#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_dto.h"



timezone_dto_t *timezone_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *utc_offset,
    char *display_name
    ) {
    timezone_dto_t *timezone_dto_local_var = malloc(sizeof(timezone_dto_t));
    if (!timezone_dto_local_var) {
        return NULL;
    }
    timezone_dto_local_var->id = id;
    timezone_dto_local_var->timestamp = timestamp;
    timezone_dto_local_var->name = name;
    timezone_dto_local_var->utc_offset = utc_offset;
    timezone_dto_local_var->display_name = display_name;

    return timezone_dto_local_var;
}


void timezone_dto_free(timezone_dto_t *timezone_dto) {
    if(NULL == timezone_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_dto->id) {
        free(timezone_dto->id);
        timezone_dto->id = NULL;
    }
    if (timezone_dto->timestamp) {
        free(timezone_dto->timestamp);
        timezone_dto->timestamp = NULL;
    }
    if (timezone_dto->name) {
        free(timezone_dto->name);
        timezone_dto->name = NULL;
    }
    if (timezone_dto->utc_offset) {
        free(timezone_dto->utc_offset);
        timezone_dto->utc_offset = NULL;
    }
    if (timezone_dto->display_name) {
        free(timezone_dto->display_name);
        timezone_dto->display_name = NULL;
    }
    free(timezone_dto);
}

cJSON *timezone_dto_convertToJSON(timezone_dto_t *timezone_dto) {
    cJSON *item = cJSON_CreateObject();

    // timezone_dto->id
    if(timezone_dto->id) {
    if(cJSON_AddStringToObject(item, "id", timezone_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto->timestamp
    if(timezone_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", timezone_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // timezone_dto->name
    if(timezone_dto->name) {
    if(cJSON_AddStringToObject(item, "name", timezone_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto->utc_offset
    if(timezone_dto->utc_offset) {
    if(cJSON_AddStringToObject(item, "utcOffset", timezone_dto->utc_offset) == NULL) {
    goto fail; //String
    }
    }


    // timezone_dto->display_name
    if(timezone_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", timezone_dto->display_name) == NULL) {
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

timezone_dto_t *timezone_dto_parseFromJSON(cJSON *timezone_dtoJSON){

    timezone_dto_t *timezone_dto_local_var = NULL;

    // timezone_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(timezone_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // timezone_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(timezone_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // timezone_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(timezone_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // timezone_dto->utc_offset
    cJSON *utc_offset = cJSON_GetObjectItemCaseSensitive(timezone_dtoJSON, "utcOffset");
    if (utc_offset) { 
    if(!cJSON_IsString(utc_offset) && !cJSON_IsNull(utc_offset))
    {
    goto end; //String
    }
    }

    // timezone_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(timezone_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }


    timezone_dto_local_var = timezone_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        utc_offset && !cJSON_IsNull(utc_offset) ? strdup(utc_offset->valuestring) : NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL
        );

    return timezone_dto_local_var;
end:
    return NULL;

}
