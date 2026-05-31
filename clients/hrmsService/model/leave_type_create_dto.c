#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_type_create_dto.h"



leave_type_create_dto_t *leave_type_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
    ) {
    leave_type_create_dto_t *leave_type_create_dto_local_var = malloc(sizeof(leave_type_create_dto_t));
    if (!leave_type_create_dto_local_var) {
        return NULL;
    }
    leave_type_create_dto_local_var->id = id;
    leave_type_create_dto_local_var->timestamp = timestamp;
    leave_type_create_dto_local_var->title = title;
    leave_type_create_dto_local_var->description = description;

    return leave_type_create_dto_local_var;
}


void leave_type_create_dto_free(leave_type_create_dto_t *leave_type_create_dto) {
    if(NULL == leave_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_type_create_dto->id) {
        free(leave_type_create_dto->id);
        leave_type_create_dto->id = NULL;
    }
    if (leave_type_create_dto->timestamp) {
        free(leave_type_create_dto->timestamp);
        leave_type_create_dto->timestamp = NULL;
    }
    if (leave_type_create_dto->title) {
        free(leave_type_create_dto->title);
        leave_type_create_dto->title = NULL;
    }
    if (leave_type_create_dto->description) {
        free(leave_type_create_dto->description);
        leave_type_create_dto->description = NULL;
    }
    free(leave_type_create_dto);
}

cJSON *leave_type_create_dto_convertToJSON(leave_type_create_dto_t *leave_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // leave_type_create_dto->id
    if(leave_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", leave_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // leave_type_create_dto->timestamp
    if(leave_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", leave_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // leave_type_create_dto->title
    if (!leave_type_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", leave_type_create_dto->title) == NULL) {
    goto fail; //String
    }


    // leave_type_create_dto->description
    if(leave_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", leave_type_create_dto->description) == NULL) {
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

leave_type_create_dto_t *leave_type_create_dto_parseFromJSON(cJSON *leave_type_create_dtoJSON){

    leave_type_create_dto_t *leave_type_create_dto_local_var = NULL;

    // leave_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(leave_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // leave_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(leave_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // leave_type_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(leave_type_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // leave_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(leave_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    leave_type_create_dto_local_var = leave_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return leave_type_create_dto_local_var;
end:
    return NULL;

}
