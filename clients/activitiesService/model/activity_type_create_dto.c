#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_type_create_dto.h"



activity_type_create_dto_t *activity_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name
    ) {
    activity_type_create_dto_t *activity_type_create_dto_local_var = malloc(sizeof(activity_type_create_dto_t));
    if (!activity_type_create_dto_local_var) {
        return NULL;
    }
    activity_type_create_dto_local_var->id = id;
    activity_type_create_dto_local_var->timestamp = timestamp;
    activity_type_create_dto_local_var->name = name;

    return activity_type_create_dto_local_var;
}


void activity_type_create_dto_free(activity_type_create_dto_t *activity_type_create_dto) {
    if(NULL == activity_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_type_create_dto->id) {
        free(activity_type_create_dto->id);
        activity_type_create_dto->id = NULL;
    }
    if (activity_type_create_dto->timestamp) {
        free(activity_type_create_dto->timestamp);
        activity_type_create_dto->timestamp = NULL;
    }
    if (activity_type_create_dto->name) {
        free(activity_type_create_dto->name);
        activity_type_create_dto->name = NULL;
    }
    free(activity_type_create_dto);
}

cJSON *activity_type_create_dto_convertToJSON(activity_type_create_dto_t *activity_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // activity_type_create_dto->id
    if(activity_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", activity_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // activity_type_create_dto->timestamp
    if(activity_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", activity_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // activity_type_create_dto->name
    if(activity_type_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", activity_type_create_dto->name) == NULL) {
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

activity_type_create_dto_t *activity_type_create_dto_parseFromJSON(cJSON *activity_type_create_dtoJSON){

    activity_type_create_dto_t *activity_type_create_dto_local_var = NULL;

    // activity_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(activity_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // activity_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(activity_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // activity_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(activity_type_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    activity_type_create_dto_local_var = activity_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return activity_type_create_dto_local_var;
end:
    return NULL;

}
