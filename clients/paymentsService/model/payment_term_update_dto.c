#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_term_update_dto.h"



payment_term_update_dto_t *payment_term_update_dto_create(
    char *name,
    char *description,
    int is_template,
    double percentage,
    double credit_days,
    double credit_weeks,
    double credit_months,
    double credit_years,
    char *payment_mode_id
    ) {
    payment_term_update_dto_t *payment_term_update_dto_local_var = malloc(sizeof(payment_term_update_dto_t));
    if (!payment_term_update_dto_local_var) {
        return NULL;
    }
    payment_term_update_dto_local_var->name = name;
    payment_term_update_dto_local_var->description = description;
    payment_term_update_dto_local_var->is_template = is_template;
    payment_term_update_dto_local_var->percentage = percentage;
    payment_term_update_dto_local_var->credit_days = credit_days;
    payment_term_update_dto_local_var->credit_weeks = credit_weeks;
    payment_term_update_dto_local_var->credit_months = credit_months;
    payment_term_update_dto_local_var->credit_years = credit_years;
    payment_term_update_dto_local_var->payment_mode_id = payment_mode_id;

    return payment_term_update_dto_local_var;
}


void payment_term_update_dto_free(payment_term_update_dto_t *payment_term_update_dto) {
    if(NULL == payment_term_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_term_update_dto->name) {
        free(payment_term_update_dto->name);
        payment_term_update_dto->name = NULL;
    }
    if (payment_term_update_dto->description) {
        free(payment_term_update_dto->description);
        payment_term_update_dto->description = NULL;
    }
    if (payment_term_update_dto->payment_mode_id) {
        free(payment_term_update_dto->payment_mode_id);
        payment_term_update_dto->payment_mode_id = NULL;
    }
    free(payment_term_update_dto);
}

cJSON *payment_term_update_dto_convertToJSON(payment_term_update_dto_t *payment_term_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_term_update_dto->name
    if(payment_term_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", payment_term_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // payment_term_update_dto->description
    if(payment_term_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payment_term_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // payment_term_update_dto->is_template
    if(payment_term_update_dto->is_template) {
    if(cJSON_AddBoolToObject(item, "isTemplate", payment_term_update_dto->is_template) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_term_update_dto->percentage
    if(payment_term_update_dto->percentage) {
    if(cJSON_AddNumberToObject(item, "percentage", payment_term_update_dto->percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_term_update_dto->credit_days
    if(payment_term_update_dto->credit_days) {
    if(cJSON_AddNumberToObject(item, "creditDays", payment_term_update_dto->credit_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_term_update_dto->credit_weeks
    if(payment_term_update_dto->credit_weeks) {
    if(cJSON_AddNumberToObject(item, "creditWeeks", payment_term_update_dto->credit_weeks) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_term_update_dto->credit_months
    if(payment_term_update_dto->credit_months) {
    if(cJSON_AddNumberToObject(item, "creditMonths", payment_term_update_dto->credit_months) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_term_update_dto->credit_years
    if(payment_term_update_dto->credit_years) {
    if(cJSON_AddNumberToObject(item, "creditYears", payment_term_update_dto->credit_years) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_term_update_dto->payment_mode_id
    if(payment_term_update_dto->payment_mode_id) {
    if(cJSON_AddStringToObject(item, "paymentModeID", payment_term_update_dto->payment_mode_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payment_term_update_dto_t *payment_term_update_dto_parseFromJSON(cJSON *payment_term_update_dtoJSON){

    payment_term_update_dto_t *payment_term_update_dto_local_var = NULL;

    // payment_term_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // payment_term_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payment_term_update_dto->is_template
    cJSON *is_template = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "isTemplate");
    if (is_template) { 
    if(!cJSON_IsBool(is_template))
    {
    goto end; //Bool
    }
    }

    // payment_term_update_dto->percentage
    cJSON *percentage = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "percentage");
    if (percentage) { 
    if(!cJSON_IsNumber(percentage))
    {
    goto end; //Numeric
    }
    }

    // payment_term_update_dto->credit_days
    cJSON *credit_days = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "creditDays");
    if (credit_days) { 
    if(!cJSON_IsNumber(credit_days))
    {
    goto end; //Numeric
    }
    }

    // payment_term_update_dto->credit_weeks
    cJSON *credit_weeks = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "creditWeeks");
    if (credit_weeks) { 
    if(!cJSON_IsNumber(credit_weeks))
    {
    goto end; //Numeric
    }
    }

    // payment_term_update_dto->credit_months
    cJSON *credit_months = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "creditMonths");
    if (credit_months) { 
    if(!cJSON_IsNumber(credit_months))
    {
    goto end; //Numeric
    }
    }

    // payment_term_update_dto->credit_years
    cJSON *credit_years = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "creditYears");
    if (credit_years) { 
    if(!cJSON_IsNumber(credit_years))
    {
    goto end; //Numeric
    }
    }

    // payment_term_update_dto->payment_mode_id
    cJSON *payment_mode_id = cJSON_GetObjectItemCaseSensitive(payment_term_update_dtoJSON, "paymentModeID");
    if (payment_mode_id) { 
    if(!cJSON_IsString(payment_mode_id) && !cJSON_IsNull(payment_mode_id))
    {
    goto end; //String
    }
    }


    payment_term_update_dto_local_var = payment_term_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        is_template ? is_template->valueint : 0,
        percentage ? percentage->valuedouble : 0,
        credit_days ? credit_days->valuedouble : 0,
        credit_weeks ? credit_weeks->valuedouble : 0,
        credit_months ? credit_months->valuedouble : 0,
        credit_years ? credit_years->valuedouble : 0,
        payment_mode_id && !cJSON_IsNull(payment_mode_id) ? strdup(payment_mode_id->valuestring) : NULL
        );

    return payment_term_update_dto_local_var;
end:
    return NULL;

}
