#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_type_update_dto.h"



activity_type_update_dto_t *activity_type_update_dto_create(
    char *name
    ) {
    activity_type_update_dto_t *activity_type_update_dto_local_var = malloc(sizeof(activity_type_update_dto_t));
    if (!activity_type_update_dto_local_var) {
        return NULL;
    }
    activity_type_update_dto_local_var->name = name;

    return activity_type_update_dto_local_var;
}


void activity_type_update_dto_free(activity_type_update_dto_t *activity_type_update_dto) {
    if(NULL == activity_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_type_update_dto->name) {
        free(activity_type_update_dto->name);
        activity_type_update_dto->name = NULL;
    }
    free(activity_type_update_dto);
}

cJSON *activity_type_update_dto_convertToJSON(activity_type_update_dto_t *activity_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // activity_type_update_dto->name
    if(activity_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", activity_type_update_dto->name) == NULL) {
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

activity_type_update_dto_t *activity_type_update_dto_parseFromJSON(cJSON *activity_type_update_dtoJSON){

    activity_type_update_dto_t *activity_type_update_dto_local_var = NULL;

    // activity_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(activity_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    activity_type_update_dto_local_var = activity_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return activity_type_update_dto_local_var;
end:
    return NULL;

}
