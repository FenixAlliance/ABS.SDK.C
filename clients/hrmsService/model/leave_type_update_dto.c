#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_type_update_dto.h"



leave_type_update_dto_t *leave_type_update_dto_create(
    char *title,
    char *description
    ) {
    leave_type_update_dto_t *leave_type_update_dto_local_var = malloc(sizeof(leave_type_update_dto_t));
    if (!leave_type_update_dto_local_var) {
        return NULL;
    }
    leave_type_update_dto_local_var->title = title;
    leave_type_update_dto_local_var->description = description;

    return leave_type_update_dto_local_var;
}


void leave_type_update_dto_free(leave_type_update_dto_t *leave_type_update_dto) {
    if(NULL == leave_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_type_update_dto->title) {
        free(leave_type_update_dto->title);
        leave_type_update_dto->title = NULL;
    }
    if (leave_type_update_dto->description) {
        free(leave_type_update_dto->description);
        leave_type_update_dto->description = NULL;
    }
    free(leave_type_update_dto);
}

cJSON *leave_type_update_dto_convertToJSON(leave_type_update_dto_t *leave_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // leave_type_update_dto->title
    if(leave_type_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", leave_type_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // leave_type_update_dto->description
    if(leave_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", leave_type_update_dto->description) == NULL) {
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

leave_type_update_dto_t *leave_type_update_dto_parseFromJSON(cJSON *leave_type_update_dtoJSON){

    leave_type_update_dto_t *leave_type_update_dto_local_var = NULL;

    // leave_type_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(leave_type_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // leave_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(leave_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    leave_type_update_dto_local_var = leave_type_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return leave_type_update_dto_local_var;
end:
    return NULL;

}
