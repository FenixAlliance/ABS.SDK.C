#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payroll_period_update_dto.h"



payroll_period_update_dto_t *payroll_period_update_dto_create(
    char *title,
    char *description,
    char *start_date,
    char *end_date
    ) {
    payroll_period_update_dto_t *payroll_period_update_dto_local_var = malloc(sizeof(payroll_period_update_dto_t));
    if (!payroll_period_update_dto_local_var) {
        return NULL;
    }
    payroll_period_update_dto_local_var->title = title;
    payroll_period_update_dto_local_var->description = description;
    payroll_period_update_dto_local_var->start_date = start_date;
    payroll_period_update_dto_local_var->end_date = end_date;

    return payroll_period_update_dto_local_var;
}


void payroll_period_update_dto_free(payroll_period_update_dto_t *payroll_period_update_dto) {
    if(NULL == payroll_period_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payroll_period_update_dto->title) {
        free(payroll_period_update_dto->title);
        payroll_period_update_dto->title = NULL;
    }
    if (payroll_period_update_dto->description) {
        free(payroll_period_update_dto->description);
        payroll_period_update_dto->description = NULL;
    }
    if (payroll_period_update_dto->start_date) {
        free(payroll_period_update_dto->start_date);
        payroll_period_update_dto->start_date = NULL;
    }
    if (payroll_period_update_dto->end_date) {
        free(payroll_period_update_dto->end_date);
        payroll_period_update_dto->end_date = NULL;
    }
    free(payroll_period_update_dto);
}

cJSON *payroll_period_update_dto_convertToJSON(payroll_period_update_dto_t *payroll_period_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // payroll_period_update_dto->title
    if(payroll_period_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", payroll_period_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_update_dto->description
    if(payroll_period_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payroll_period_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payroll_period_update_dto->start_date
    if(payroll_period_update_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", payroll_period_update_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payroll_period_update_dto->end_date
    if(payroll_period_update_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", payroll_period_update_dto->end_date) == NULL) {
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

payroll_period_update_dto_t *payroll_period_update_dto_parseFromJSON(cJSON *payroll_period_update_dtoJSON){

    payroll_period_update_dto_t *payroll_period_update_dto_local_var = NULL;

    // payroll_period_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(payroll_period_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // payroll_period_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payroll_period_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payroll_period_update_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(payroll_period_update_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // payroll_period_update_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(payroll_period_update_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }


    payroll_period_update_dto_local_var = payroll_period_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL
        );

    return payroll_period_update_dto_local_var;
end:
    return NULL;

}
