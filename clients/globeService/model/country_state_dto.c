#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_state_dto.h"



country_state_dto_t *country_state_dto_create(
    char *timestamp,
    char *id,
    char *name,
    char *code,
    char *country_id
    ) {
    country_state_dto_t *country_state_dto_local_var = malloc(sizeof(country_state_dto_t));
    if (!country_state_dto_local_var) {
        return NULL;
    }
    country_state_dto_local_var->timestamp = timestamp;
    country_state_dto_local_var->id = id;
    country_state_dto_local_var->name = name;
    country_state_dto_local_var->code = code;
    country_state_dto_local_var->country_id = country_id;

    return country_state_dto_local_var;
}


void country_state_dto_free(country_state_dto_t *country_state_dto) {
    if(NULL == country_state_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (country_state_dto->timestamp) {
        free(country_state_dto->timestamp);
        country_state_dto->timestamp = NULL;
    }
    if (country_state_dto->id) {
        free(country_state_dto->id);
        country_state_dto->id = NULL;
    }
    if (country_state_dto->name) {
        free(country_state_dto->name);
        country_state_dto->name = NULL;
    }
    if (country_state_dto->code) {
        free(country_state_dto->code);
        country_state_dto->code = NULL;
    }
    if (country_state_dto->country_id) {
        free(country_state_dto->country_id);
        country_state_dto->country_id = NULL;
    }
    free(country_state_dto);
}

cJSON *country_state_dto_convertToJSON(country_state_dto_t *country_state_dto) {
    cJSON *item = cJSON_CreateObject();

    // country_state_dto->timestamp
    if(country_state_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", country_state_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // country_state_dto->id
    if(country_state_dto->id) {
    if(cJSON_AddStringToObject(item, "id", country_state_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // country_state_dto->name
    if(country_state_dto->name) {
    if(cJSON_AddStringToObject(item, "name", country_state_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // country_state_dto->code
    if(country_state_dto->code) {
    if(cJSON_AddStringToObject(item, "code", country_state_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // country_state_dto->country_id
    if(country_state_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", country_state_dto->country_id) == NULL) {
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

country_state_dto_t *country_state_dto_parseFromJSON(cJSON *country_state_dtoJSON){

    country_state_dto_t *country_state_dto_local_var = NULL;

    // country_state_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(country_state_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // country_state_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(country_state_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // country_state_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(country_state_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // country_state_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(country_state_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // country_state_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(country_state_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    country_state_dto_local_var = country_state_dto_create (
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return country_state_dto_local_var;
end:
    return NULL;

}
