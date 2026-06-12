#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "skip_token_query_option.h"



skip_token_query_option_t *skip_token_query_option_create(
    char *raw_value,
    o_data_query_context_t *context,
    object_t *validator,
    object_t *handler
    ) {
    skip_token_query_option_t *skip_token_query_option_local_var = malloc(sizeof(skip_token_query_option_t));
    if (!skip_token_query_option_local_var) {
        return NULL;
    }
    skip_token_query_option_local_var->raw_value = raw_value;
    skip_token_query_option_local_var->context = context;
    skip_token_query_option_local_var->validator = validator;
    skip_token_query_option_local_var->handler = handler;

    return skip_token_query_option_local_var;
}


void skip_token_query_option_free(skip_token_query_option_t *skip_token_query_option) {
    if(NULL == skip_token_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (skip_token_query_option->raw_value) {
        free(skip_token_query_option->raw_value);
        skip_token_query_option->raw_value = NULL;
    }
    if (skip_token_query_option->context) {
        o_data_query_context_free(skip_token_query_option->context);
        skip_token_query_option->context = NULL;
    }
    if (skip_token_query_option->validator) {
        object_free(skip_token_query_option->validator);
        skip_token_query_option->validator = NULL;
    }
    if (skip_token_query_option->handler) {
        object_free(skip_token_query_option->handler);
        skip_token_query_option->handler = NULL;
    }
    free(skip_token_query_option);
}

cJSON *skip_token_query_option_convertToJSON(skip_token_query_option_t *skip_token_query_option) {
    cJSON *item = cJSON_CreateObject();

    // skip_token_query_option->raw_value
    if(skip_token_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", skip_token_query_option->raw_value) == NULL) {
    goto fail; //String
    }
    }


    // skip_token_query_option->context
    if(skip_token_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(skip_token_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // skip_token_query_option->validator
    if(skip_token_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(skip_token_query_option->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // skip_token_query_option->handler
    if(skip_token_query_option->handler) {
    cJSON *handler_object = object_convertToJSON(skip_token_query_option->handler);
    if(handler_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "handler", handler_object);
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

skip_token_query_option_t *skip_token_query_option_parseFromJSON(cJSON *skip_token_query_optionJSON){

    skip_token_query_option_t *skip_token_query_option_local_var = NULL;

    // define the local variable for skip_token_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // skip_token_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(skip_token_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }

    // skip_token_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(skip_token_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // skip_token_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(skip_token_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }

    // skip_token_query_option->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(skip_token_query_optionJSON, "handler");
    object_t *handler_local_object = NULL;
    if (handler) { 
    handler_local_object = object_parseFromJSON(handler); //object
    }


    skip_token_query_option_local_var = skip_token_query_option_create (
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL,
        context ? context_local_nonprim : NULL,
        validator ? validator_local_object : NULL,
        handler ? handler_local_object : NULL
        );

    return skip_token_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    return NULL;

}
