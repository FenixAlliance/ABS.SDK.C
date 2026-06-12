#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "localization_string_create_dto.h"



localization_string_create_dto_t *localization_string_create_dto_create(
    char *id,
    char *timestamp,
    char *base,
    char *comments,
    char *country_language_id
    ) {
    localization_string_create_dto_t *localization_string_create_dto_local_var = malloc(sizeof(localization_string_create_dto_t));
    if (!localization_string_create_dto_local_var) {
        return NULL;
    }
    localization_string_create_dto_local_var->id = id;
    localization_string_create_dto_local_var->timestamp = timestamp;
    localization_string_create_dto_local_var->base = base;
    localization_string_create_dto_local_var->comments = comments;
    localization_string_create_dto_local_var->country_language_id = country_language_id;

    return localization_string_create_dto_local_var;
}


void localization_string_create_dto_free(localization_string_create_dto_t *localization_string_create_dto) {
    if(NULL == localization_string_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (localization_string_create_dto->id) {
        free(localization_string_create_dto->id);
        localization_string_create_dto->id = NULL;
    }
    if (localization_string_create_dto->timestamp) {
        free(localization_string_create_dto->timestamp);
        localization_string_create_dto->timestamp = NULL;
    }
    if (localization_string_create_dto->base) {
        free(localization_string_create_dto->base);
        localization_string_create_dto->base = NULL;
    }
    if (localization_string_create_dto->comments) {
        free(localization_string_create_dto->comments);
        localization_string_create_dto->comments = NULL;
    }
    if (localization_string_create_dto->country_language_id) {
        free(localization_string_create_dto->country_language_id);
        localization_string_create_dto->country_language_id = NULL;
    }
    free(localization_string_create_dto);
}

cJSON *localization_string_create_dto_convertToJSON(localization_string_create_dto_t *localization_string_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // localization_string_create_dto->id
    if(localization_string_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", localization_string_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_create_dto->timestamp
    if(localization_string_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", localization_string_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // localization_string_create_dto->base
    if (!localization_string_create_dto->base) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "base", localization_string_create_dto->base) == NULL) {
    goto fail; //String
    }


    // localization_string_create_dto->comments
    if(localization_string_create_dto->comments) {
    if(cJSON_AddStringToObject(item, "comments", localization_string_create_dto->comments) == NULL) {
    goto fail; //String
    }
    }


    // localization_string_create_dto->country_language_id
    if(localization_string_create_dto->country_language_id) {
    if(cJSON_AddStringToObject(item, "countryLanguageId", localization_string_create_dto->country_language_id) == NULL) {
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

localization_string_create_dto_t *localization_string_create_dto_parseFromJSON(cJSON *localization_string_create_dtoJSON){

    localization_string_create_dto_t *localization_string_create_dto_local_var = NULL;

    // localization_string_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(localization_string_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // localization_string_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(localization_string_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // localization_string_create_dto->base
    cJSON *base = cJSON_GetObjectItemCaseSensitive(localization_string_create_dtoJSON, "base");
    if (!base) {
        goto end;
    }

    
    if(!cJSON_IsString(base))
    {
    goto end; //String
    }

    // localization_string_create_dto->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(localization_string_create_dtoJSON, "comments");
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }

    // localization_string_create_dto->country_language_id
    cJSON *country_language_id = cJSON_GetObjectItemCaseSensitive(localization_string_create_dtoJSON, "countryLanguageId");
    if (country_language_id) { 
    if(!cJSON_IsString(country_language_id) && !cJSON_IsNull(country_language_id))
    {
    goto end; //String
    }
    }


    localization_string_create_dto_local_var = localization_string_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(base->valuestring),
        comments && !cJSON_IsNull(comments) ? strdup(comments->valuestring) : NULL,
        country_language_id && !cJSON_IsNull(country_language_id) ? strdup(country_language_id->valuestring) : NULL
        );

    return localization_string_create_dto_local_var;
end:
    return NULL;

}
