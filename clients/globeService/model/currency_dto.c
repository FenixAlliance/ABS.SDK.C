#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_dto.h"



currency_dto_t *currency_dto_create(
    char *id,
    char *code,
    char *name,
    char *symbol,
    country_dto_t *country
    ) {
    currency_dto_t *currency_dto_local_var = malloc(sizeof(currency_dto_t));
    if (!currency_dto_local_var) {
        return NULL;
    }
    currency_dto_local_var->id = id;
    currency_dto_local_var->code = code;
    currency_dto_local_var->name = name;
    currency_dto_local_var->symbol = symbol;
    currency_dto_local_var->country = country;

    return currency_dto_local_var;
}


void currency_dto_free(currency_dto_t *currency_dto) {
    if(NULL == currency_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (currency_dto->id) {
        free(currency_dto->id);
        currency_dto->id = NULL;
    }
    if (currency_dto->code) {
        free(currency_dto->code);
        currency_dto->code = NULL;
    }
    if (currency_dto->name) {
        free(currency_dto->name);
        currency_dto->name = NULL;
    }
    if (currency_dto->symbol) {
        free(currency_dto->symbol);
        currency_dto->symbol = NULL;
    }
    if (currency_dto->country) {
        country_dto_free(currency_dto->country);
        currency_dto->country = NULL;
    }
    free(currency_dto);
}

cJSON *currency_dto_convertToJSON(currency_dto_t *currency_dto) {
    cJSON *item = cJSON_CreateObject();

    // currency_dto->id
    if(currency_dto->id) {
    if(cJSON_AddStringToObject(item, "id", currency_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto->code
    if(currency_dto->code) {
    if(cJSON_AddStringToObject(item, "code", currency_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto->name
    if(currency_dto->name) {
    if(cJSON_AddStringToObject(item, "name", currency_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto->symbol
    if(currency_dto->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", currency_dto->symbol) == NULL) {
    goto fail; //String
    }
    }


    // currency_dto->country
    if(currency_dto->country) {
    cJSON *country_local_JSON = country_dto_convertToJSON(currency_dto->country);
    if(country_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "country", country_local_JSON);
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

currency_dto_t *currency_dto_parseFromJSON(cJSON *currency_dtoJSON){

    currency_dto_t *currency_dto_local_var = NULL;

    // define the local variable for currency_dto->country
    country_dto_t *country_local_nonprim = NULL;

    // currency_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(currency_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // currency_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(currency_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // currency_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(currency_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // currency_dto->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(currency_dtoJSON, "symbol");
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // currency_dto->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(currency_dtoJSON, "country");
    if (country) { 
    country_local_nonprim = country_dto_parseFromJSON(country); //nonprimitive
    }


    currency_dto_local_var = currency_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        symbol && !cJSON_IsNull(symbol) ? strdup(symbol->valuestring) : NULL,
        country ? country_local_nonprim : NULL
        );

    return currency_dto_local_var;
end:
    if (country_local_nonprim) {
        country_dto_free(country_local_nonprim);
        country_local_nonprim = NULL;
    }
    return NULL;

}
