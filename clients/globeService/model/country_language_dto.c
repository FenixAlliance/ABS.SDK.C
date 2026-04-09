#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_language_dto.h"



country_language_dto_t *country_language_dto_create(
    char *id,
    char *timestamp,
    char *iso639_1,
    char *iso639_2,
    int enabled,
    char *name,
    char *language_native_name
    ) {
    country_language_dto_t *country_language_dto_local_var = malloc(sizeof(country_language_dto_t));
    if (!country_language_dto_local_var) {
        return NULL;
    }
    country_language_dto_local_var->id = id;
    country_language_dto_local_var->timestamp = timestamp;
    country_language_dto_local_var->iso639_1 = iso639_1;
    country_language_dto_local_var->iso639_2 = iso639_2;
    country_language_dto_local_var->enabled = enabled;
    country_language_dto_local_var->name = name;
    country_language_dto_local_var->language_native_name = language_native_name;

    return country_language_dto_local_var;
}


void country_language_dto_free(country_language_dto_t *country_language_dto) {
    if(NULL == country_language_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (country_language_dto->id) {
        free(country_language_dto->id);
        country_language_dto->id = NULL;
    }
    if (country_language_dto->timestamp) {
        free(country_language_dto->timestamp);
        country_language_dto->timestamp = NULL;
    }
    if (country_language_dto->iso639_1) {
        free(country_language_dto->iso639_1);
        country_language_dto->iso639_1 = NULL;
    }
    if (country_language_dto->iso639_2) {
        free(country_language_dto->iso639_2);
        country_language_dto->iso639_2 = NULL;
    }
    if (country_language_dto->name) {
        free(country_language_dto->name);
        country_language_dto->name = NULL;
    }
    if (country_language_dto->language_native_name) {
        free(country_language_dto->language_native_name);
        country_language_dto->language_native_name = NULL;
    }
    free(country_language_dto);
}

cJSON *country_language_dto_convertToJSON(country_language_dto_t *country_language_dto) {
    cJSON *item = cJSON_CreateObject();

    // country_language_dto->id
    if(country_language_dto->id) {
    if(cJSON_AddStringToObject(item, "id", country_language_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto->timestamp
    if(country_language_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", country_language_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // country_language_dto->iso639_1
    if(country_language_dto->iso639_1) {
    if(cJSON_AddStringToObject(item, "iso639_1", country_language_dto->iso639_1) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto->iso639_2
    if(country_language_dto->iso639_2) {
    if(cJSON_AddStringToObject(item, "iso639_2", country_language_dto->iso639_2) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto->enabled
    if(country_language_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", country_language_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // country_language_dto->name
    if(country_language_dto->name) {
    if(cJSON_AddStringToObject(item, "name", country_language_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // country_language_dto->language_native_name
    if(country_language_dto->language_native_name) {
    if(cJSON_AddStringToObject(item, "languageNativeName", country_language_dto->language_native_name) == NULL) {
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

country_language_dto_t *country_language_dto_parseFromJSON(cJSON *country_language_dtoJSON){

    country_language_dto_t *country_language_dto_local_var = NULL;

    // country_language_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // country_language_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // country_language_dto->iso639_1
    cJSON *iso639_1 = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "iso639_1");
    if (iso639_1) { 
    if(!cJSON_IsString(iso639_1) && !cJSON_IsNull(iso639_1))
    {
    goto end; //String
    }
    }

    // country_language_dto->iso639_2
    cJSON *iso639_2 = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "iso639_2");
    if (iso639_2) { 
    if(!cJSON_IsString(iso639_2) && !cJSON_IsNull(iso639_2))
    {
    goto end; //String
    }
    }

    // country_language_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // country_language_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // country_language_dto->language_native_name
    cJSON *language_native_name = cJSON_GetObjectItemCaseSensitive(country_language_dtoJSON, "languageNativeName");
    if (language_native_name) { 
    if(!cJSON_IsString(language_native_name) && !cJSON_IsNull(language_native_name))
    {
    goto end; //String
    }
    }


    country_language_dto_local_var = country_language_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        iso639_1 && !cJSON_IsNull(iso639_1) ? strdup(iso639_1->valuestring) : NULL,
        iso639_2 && !cJSON_IsNull(iso639_2) ? strdup(iso639_2->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        language_native_name && !cJSON_IsNull(language_native_name) ? strdup(language_native_name->valuestring) : NULL
        );

    return country_language_dto_local_var;
end:
    return NULL;

}
