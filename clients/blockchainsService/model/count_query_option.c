#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "count_query_option.h"



count_query_option_t *count_query_option_create(
    o_data_query_context_t *context,
    char *raw_value,
    int value,
    object_t *validator
    ) {
    count_query_option_t *count_query_option_local_var = malloc(sizeof(count_query_option_t));
    if (!count_query_option_local_var) {
        return NULL;
    }
    count_query_option_local_var->context = context;
    count_query_option_local_var->raw_value = raw_value;
    count_query_option_local_var->value = value;
    count_query_option_local_var->validator = validator;

    return count_query_option_local_var;
}


void count_query_option_free(count_query_option_t *count_query_option) {
    if(NULL == count_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (count_query_option->context) {
        o_data_query_context_free(count_query_option->context);
        count_query_option->context = NULL;
    }
    if (count_query_option->raw_value) {
        free(count_query_option->raw_value);
        count_query_option->raw_value = NULL;
    }
    if (count_query_option->validator) {
        object_free(count_query_option->validator);
        count_query_option->validator = NULL;
    }
    free(count_query_option);
}

cJSON *count_query_option_convertToJSON(count_query_option_t *count_query_option) {
    cJSON *item = cJSON_CreateObject();

    // count_query_option->context
    if(count_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(count_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // count_query_option->raw_value
    if(count_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", count_query_option->raw_value) == NULL) {
    goto fail; //String
    }
    }


    // count_query_option->value
    if(count_query_option->value) {
    if(cJSON_AddBoolToObject(item, "value", count_query_option->value) == NULL) {
    goto fail; //Bool
    }
    }


    // count_query_option->validator
    if(count_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(count_query_option->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

count_query_option_t *count_query_option_parseFromJSON(cJSON *count_query_optionJSON){

    count_query_option_t *count_query_option_local_var = NULL;

    // define the local variable for count_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // count_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(count_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // count_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(count_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }

    // count_query_option->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(count_query_optionJSON, "value");
    if (value) { 
    if(!cJSON_IsBool(value))
    {
    goto end; //Bool
    }
    }

    // count_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(count_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }


    count_query_option_local_var = count_query_option_create (
        context ? context_local_nonprim : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL,
        value ? value->valueint : 0,
        validator ? validator_local_object : NULL
        );

    return count_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    return NULL;

}
