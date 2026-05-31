#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "top_query_option.h"



top_query_option_t *top_query_option_create(
    o_data_query_context_t *context,
    char *raw_value,
    int value,
    object_t *validator
    ) {
    top_query_option_t *top_query_option_local_var = malloc(sizeof(top_query_option_t));
    if (!top_query_option_local_var) {
        return NULL;
    }
    top_query_option_local_var->context = context;
    top_query_option_local_var->raw_value = raw_value;
    top_query_option_local_var->value = value;
    top_query_option_local_var->validator = validator;

    return top_query_option_local_var;
}


void top_query_option_free(top_query_option_t *top_query_option) {
    if(NULL == top_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (top_query_option->context) {
        o_data_query_context_free(top_query_option->context);
        top_query_option->context = NULL;
    }
    if (top_query_option->raw_value) {
        free(top_query_option->raw_value);
        top_query_option->raw_value = NULL;
    }
    if (top_query_option->validator) {
        object_free(top_query_option->validator);
        top_query_option->validator = NULL;
    }
    free(top_query_option);
}

cJSON *top_query_option_convertToJSON(top_query_option_t *top_query_option) {
    cJSON *item = cJSON_CreateObject();

    // top_query_option->context
    if(top_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(top_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // top_query_option->raw_value
    if(top_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", top_query_option->raw_value) == NULL) {
    goto fail; //String
    }
    }


    // top_query_option->value
    if(top_query_option->value) {
    if(cJSON_AddNumberToObject(item, "value", top_query_option->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // top_query_option->validator
    if(top_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(top_query_option->validator);
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

top_query_option_t *top_query_option_parseFromJSON(cJSON *top_query_optionJSON){

    top_query_option_t *top_query_option_local_var = NULL;

    // define the local variable for top_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // top_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(top_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // top_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(top_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }

    // top_query_option->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(top_query_optionJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // top_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(top_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }


    top_query_option_local_var = top_query_option_create (
        context ? context_local_nonprim : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL,
        value ? value->valuedouble : 0,
        validator ? validator_local_object : NULL
        );

    return top_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    return NULL;

}
