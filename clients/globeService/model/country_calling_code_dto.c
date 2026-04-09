#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_calling_code_dto.h"



country_calling_code_dto_t *country_calling_code_dto_create(
    int id,
    char *calling_code,
    char *country_id
    ) {
    country_calling_code_dto_t *country_calling_code_dto_local_var = malloc(sizeof(country_calling_code_dto_t));
    if (!country_calling_code_dto_local_var) {
        return NULL;
    }
    country_calling_code_dto_local_var->id = id;
    country_calling_code_dto_local_var->calling_code = calling_code;
    country_calling_code_dto_local_var->country_id = country_id;

    return country_calling_code_dto_local_var;
}


void country_calling_code_dto_free(country_calling_code_dto_t *country_calling_code_dto) {
    if(NULL == country_calling_code_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (country_calling_code_dto->calling_code) {
        free(country_calling_code_dto->calling_code);
        country_calling_code_dto->calling_code = NULL;
    }
    if (country_calling_code_dto->country_id) {
        free(country_calling_code_dto->country_id);
        country_calling_code_dto->country_id = NULL;
    }
    free(country_calling_code_dto);
}

cJSON *country_calling_code_dto_convertToJSON(country_calling_code_dto_t *country_calling_code_dto) {
    cJSON *item = cJSON_CreateObject();

    // country_calling_code_dto->id
    if(country_calling_code_dto->id) {
    if(cJSON_AddNumberToObject(item, "id", country_calling_code_dto->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // country_calling_code_dto->calling_code
    if(country_calling_code_dto->calling_code) {
    if(cJSON_AddStringToObject(item, "callingCode", country_calling_code_dto->calling_code) == NULL) {
    goto fail; //String
    }
    }


    // country_calling_code_dto->country_id
    if(country_calling_code_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", country_calling_code_dto->country_id) == NULL) {
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

country_calling_code_dto_t *country_calling_code_dto_parseFromJSON(cJSON *country_calling_code_dtoJSON){

    country_calling_code_dto_t *country_calling_code_dto_local_var = NULL;

    // country_calling_code_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(country_calling_code_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // country_calling_code_dto->calling_code
    cJSON *calling_code = cJSON_GetObjectItemCaseSensitive(country_calling_code_dtoJSON, "callingCode");
    if (calling_code) { 
    if(!cJSON_IsString(calling_code) && !cJSON_IsNull(calling_code))
    {
    goto end; //String
    }
    }

    // country_calling_code_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(country_calling_code_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    country_calling_code_dto_local_var = country_calling_code_dto_create (
        id ? id->valuedouble : 0,
        calling_code && !cJSON_IsNull(calling_code) ? strdup(calling_code->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return country_calling_code_dto_local_var;
end:
    return NULL;

}
