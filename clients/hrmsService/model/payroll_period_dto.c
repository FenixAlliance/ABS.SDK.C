#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_period_dto.h"



payroll_period_dto_t *payroll_period_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start,
    char *end
    ) {
    payroll_period_dto_t *payroll_period_dto_local_var = malloc(sizeof(payroll_period_dto_t));
    if (!payroll_period_dto_local_var) {
        return NULL;
    }
    payroll_period_dto_local_var->id = id;
    payroll_period_dto_local_var->timestamp = timestamp;
    payroll_period_dto_local_var->title = title;
    payroll_period_dto_local_var->description = description;
    payroll_period_dto_local_var->start = start;
    payroll_period_dto_local_var->end = end;

    return payroll_period_dto_local_var;
}


void payroll_period_dto_free(payroll_period_dto_t *payroll_period_dto) {
    if(NULL == payroll_period_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_period_dto->id) {
        free(payroll_period_dto->id);
        payroll_period_dto->id = NULL;
    }
    if (payroll_period_dto->timestamp) {
        free(payroll_period_dto->timestamp);
        payroll_period_dto->timestamp = NULL;
    }
    if (payroll_period_dto->title) {
        free(payroll_period_dto->title);
        payroll_period_dto->title = NULL;
    }
    if (payroll_period_dto->description) {
        free(payroll_period_dto->description);
        payroll_period_dto->description = NULL;
    }
    if (payroll_period_dto->start) {
        free(payroll_period_dto->start);
        payroll_period_dto->start = NULL;
    }
    if (payroll_period_dto->end) {
        free(payroll_period_dto->end);
        payroll_period_dto->end = NULL;
    }
    free(payroll_period_dto);
}

cJSON *payroll_period_dto_convertToJSON(payroll_period_dto_t *payroll_period_dto) {
    cJSON *item = cJSON_CreateObject();

    // payroll_period_dto->id
    if(payroll_period_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payroll_period_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_dto->timestamp
    if(payroll_period_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payroll_period_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_period_dto->title
    if(payroll_period_dto->title) {
    if(cJSON_AddStringToObject(item, "title", payroll_period_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_dto->description
    if(payroll_period_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payroll_period_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_dto->start
    if(payroll_period_dto->start) {
    if(cJSON_AddStringToObject(item, "start", payroll_period_dto->start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_period_dto->end
    if(payroll_period_dto->end) {
    if(cJSON_AddStringToObject(item, "end", payroll_period_dto->end) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payroll_period_dto_t *payroll_period_dto_parseFromJSON(cJSON *payroll_period_dtoJSON){

    payroll_period_dto_t *payroll_period_dto_local_var = NULL;

    // payroll_period_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payroll_period_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payroll_period_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payroll_period_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payroll_period_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(payroll_period_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // payroll_period_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payroll_period_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payroll_period_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(payroll_period_dtoJSON, "start");
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }
    }

    // payroll_period_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(payroll_period_dtoJSON, "end");
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }
    }


    payroll_period_dto_local_var = payroll_period_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        start && !cJSON_IsNull(start) ? strdup(start->valuestring) : NULL,
        end && !cJSON_IsNull(end) ? strdup(end->valuestring) : NULL
        );

    return payroll_period_dto_local_var;
end:
    return NULL;

}
