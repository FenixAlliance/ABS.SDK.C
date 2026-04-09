#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_id.h"



currency_id_t *currency_id_create(
    char *value,
    char *code,
    char *country
    ) {
    currency_id_t *currency_id_local_var = malloc(sizeof(currency_id_t));
    if (!currency_id_local_var) {
        return NULL;
    }
    currency_id_local_var->value = value;
    currency_id_local_var->code = code;
    currency_id_local_var->country = country;

    return currency_id_local_var;
}


void currency_id_free(currency_id_t *currency_id) {
    if(NULL == currency_id){
        return ;
    }
    listEntry_t *listEntry;
    if (currency_id->value) {
        free(currency_id->value);
        currency_id->value = NULL;
    }
    if (currency_id->code) {
        free(currency_id->code);
        currency_id->code = NULL;
    }
    if (currency_id->country) {
        free(currency_id->country);
        currency_id->country = NULL;
    }
    free(currency_id);
}

cJSON *currency_id_convertToJSON(currency_id_t *currency_id) {
    cJSON *item = cJSON_CreateObject();

    // currency_id->value
    if(currency_id->value) {
    if(cJSON_AddStringToObject(item, "value", currency_id->value) == NULL) {
    goto fail; //String
    }
    }


    // currency_id->code
    if(currency_id->code) {
    if(cJSON_AddStringToObject(item, "code", currency_id->code) == NULL) {
    goto fail; //String
    }
    }


    // currency_id->country
    if(currency_id->country) {
    if(cJSON_AddStringToObject(item, "country", currency_id->country) == NULL) {
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

currency_id_t *currency_id_parseFromJSON(cJSON *currency_idJSON){

    currency_id_t *currency_id_local_var = NULL;

    // currency_id->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(currency_idJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // currency_id->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(currency_idJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // currency_id->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(currency_idJSON, "country");
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }


    currency_id_local_var = currency_id_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        country && !cJSON_IsNull(country) ? strdup(country->valuestring) : NULL
        );

    return currency_id_local_var;
end:
    return NULL;

}
