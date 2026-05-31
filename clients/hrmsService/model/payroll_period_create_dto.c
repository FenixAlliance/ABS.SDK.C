#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_period_create_dto.h"



payroll_period_create_dto_t *payroll_period_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start_date,
    char *end_date
    ) {
    payroll_period_create_dto_t *payroll_period_create_dto_local_var = malloc(sizeof(payroll_period_create_dto_t));
    if (!payroll_period_create_dto_local_var) {
        return NULL;
    }
    payroll_period_create_dto_local_var->id = id;
    payroll_period_create_dto_local_var->timestamp = timestamp;
    payroll_period_create_dto_local_var->title = title;
    payroll_period_create_dto_local_var->description = description;
    payroll_period_create_dto_local_var->start_date = start_date;
    payroll_period_create_dto_local_var->end_date = end_date;

    return payroll_period_create_dto_local_var;
}


void payroll_period_create_dto_free(payroll_period_create_dto_t *payroll_period_create_dto) {
    if(NULL == payroll_period_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_period_create_dto->id) {
        free(payroll_period_create_dto->id);
        payroll_period_create_dto->id = NULL;
    }
    if (payroll_period_create_dto->timestamp) {
        free(payroll_period_create_dto->timestamp);
        payroll_period_create_dto->timestamp = NULL;
    }
    if (payroll_period_create_dto->title) {
        free(payroll_period_create_dto->title);
        payroll_period_create_dto->title = NULL;
    }
    if (payroll_period_create_dto->description) {
        free(payroll_period_create_dto->description);
        payroll_period_create_dto->description = NULL;
    }
    if (payroll_period_create_dto->start_date) {
        free(payroll_period_create_dto->start_date);
        payroll_period_create_dto->start_date = NULL;
    }
    if (payroll_period_create_dto->end_date) {
        free(payroll_period_create_dto->end_date);
        payroll_period_create_dto->end_date = NULL;
    }
    free(payroll_period_create_dto);
}

cJSON *payroll_period_create_dto_convertToJSON(payroll_period_create_dto_t *payroll_period_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // payroll_period_create_dto->id
    if(payroll_period_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payroll_period_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_create_dto->timestamp
    if(payroll_period_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payroll_period_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_period_create_dto->title
    if (!payroll_period_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", payroll_period_create_dto->title) == NULL) {
    goto fail; //String
    }


    // payroll_period_create_dto->description
    if(payroll_period_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payroll_period_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_create_dto->start_date
    if (!payroll_period_create_dto->start_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "startDate", payroll_period_create_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }


    // payroll_period_create_dto->end_date
    if (!payroll_period_create_dto->end_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "endDate", payroll_period_create_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payroll_period_create_dto_t *payroll_period_create_dto_parseFromJSON(cJSON *payroll_period_create_dtoJSON){

    payroll_period_create_dto_t *payroll_period_create_dto_local_var = NULL;

    // payroll_period_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payroll_period_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payroll_period_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payroll_period_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payroll_period_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(payroll_period_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // payroll_period_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payroll_period_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payroll_period_create_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(payroll_period_create_dtoJSON, "startDate");
    if (!start_date) {
        goto end;
    }

    
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }

    // payroll_period_create_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(payroll_period_create_dtoJSON, "endDate");
    if (!end_date) {
        goto end;
    }

    
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }


    payroll_period_create_dto_local_var = payroll_period_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        strdup(start_date->valuestring),
        strdup(end_date->valuestring)
        );

    return payroll_period_create_dto_local_var;
end:
    return NULL;

}
