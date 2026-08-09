#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_dto.h"



country_dto_t *country_dto_create(
    char *id,
    char *timestamp,
    char *iso3,
    char *iso2,
    char *name,
    char *native_name,
    char *flag_url
    ) {
    country_dto_t *country_dto_local_var = malloc(sizeof(country_dto_t));
    if (!country_dto_local_var) {
        return NULL;
    }
    country_dto_local_var->id = id;
    country_dto_local_var->timestamp = timestamp;
    country_dto_local_var->iso3 = iso3;
    country_dto_local_var->iso2 = iso2;
    country_dto_local_var->name = name;
    country_dto_local_var->native_name = native_name;
    country_dto_local_var->flag_url = flag_url;

    return country_dto_local_var;
}


void country_dto_free(country_dto_t *country_dto) {
    if(NULL == country_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (country_dto->id) {
        free(country_dto->id);
        country_dto->id = NULL;
    }
    if (country_dto->timestamp) {
        free(country_dto->timestamp);
        country_dto->timestamp = NULL;
    }
    if (country_dto->iso3) {
        free(country_dto->iso3);
        country_dto->iso3 = NULL;
    }
    if (country_dto->iso2) {
        free(country_dto->iso2);
        country_dto->iso2 = NULL;
    }
    if (country_dto->name) {
        free(country_dto->name);
        country_dto->name = NULL;
    }
    if (country_dto->native_name) {
        free(country_dto->native_name);
        country_dto->native_name = NULL;
    }
    if (country_dto->flag_url) {
        free(country_dto->flag_url);
        country_dto->flag_url = NULL;
    }
    free(country_dto);
}

cJSON *country_dto_convertToJSON(country_dto_t *country_dto) {
    cJSON *item = cJSON_CreateObject();

    // country_dto->id
    if(country_dto->id) {
    if(cJSON_AddStringToObject(item, "id", country_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // country_dto->timestamp
    if(country_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", country_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // country_dto->iso3
    if(country_dto->iso3) {
    if(cJSON_AddStringToObject(item, "iso3", country_dto->iso3) == NULL) {
    goto fail; //String
    }
    }


    // country_dto->iso2
    if(country_dto->iso2) {
    if(cJSON_AddStringToObject(item, "iso2", country_dto->iso2) == NULL) {
    goto fail; //String
    }
    }


    // country_dto->name
    if(country_dto->name) {
    if(cJSON_AddStringToObject(item, "name", country_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // country_dto->native_name
    if(country_dto->native_name) {
    if(cJSON_AddStringToObject(item, "nativeName", country_dto->native_name) == NULL) {
    goto fail; //String
    }
    }


    // country_dto->flag_url
    if(country_dto->flag_url) {
    if(cJSON_AddStringToObject(item, "flagUrl", country_dto->flag_url) == NULL) {
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

country_dto_t *country_dto_parseFromJSON(cJSON *country_dtoJSON){

    country_dto_t *country_dto_local_var = NULL;

    // country_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // country_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // country_dto->iso3
    cJSON *iso3 = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "iso3");
    if (iso3) { 
    if(!cJSON_IsString(iso3) && !cJSON_IsNull(iso3))
    {
    goto end; //String
    }
    }

    // country_dto->iso2
    cJSON *iso2 = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "iso2");
    if (iso2) { 
    if(!cJSON_IsString(iso2) && !cJSON_IsNull(iso2))
    {
    goto end; //String
    }
    }

    // country_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // country_dto->native_name
    cJSON *native_name = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "nativeName");
    if (native_name) { 
    if(!cJSON_IsString(native_name) && !cJSON_IsNull(native_name))
    {
    goto end; //String
    }
    }

    // country_dto->flag_url
    cJSON *flag_url = cJSON_GetObjectItemCaseSensitive(country_dtoJSON, "flagUrl");
    if (flag_url) { 
    if(!cJSON_IsString(flag_url) && !cJSON_IsNull(flag_url))
    {
    goto end; //String
    }
    }


    country_dto_local_var = country_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        iso3 && !cJSON_IsNull(iso3) ? strdup(iso3->valuestring) : NULL,
        iso2 && !cJSON_IsNull(iso2) ? strdup(iso2->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        native_name && !cJSON_IsNull(native_name) ? strdup(native_name->valuestring) : NULL,
        flag_url && !cJSON_IsNull(flag_url) ? strdup(flag_url->valuestring) : NULL
        );

    return country_dto_local_var;
end:
    return NULL;

}
