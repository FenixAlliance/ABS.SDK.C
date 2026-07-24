#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "work_order_type_update_dto.h"



work_order_type_update_dto_t *work_order_type_update_dto_create(
    char *name,
    char *description
    ) {
    work_order_type_update_dto_t *work_order_type_update_dto_local_var = malloc(sizeof(work_order_type_update_dto_t));
    if (!work_order_type_update_dto_local_var) {
        return NULL;
    }
    work_order_type_update_dto_local_var->name = name;
    work_order_type_update_dto_local_var->description = description;

    return work_order_type_update_dto_local_var;
}


void work_order_type_update_dto_free(work_order_type_update_dto_t *work_order_type_update_dto) {
    if(NULL == work_order_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (work_order_type_update_dto->name) {
        free(work_order_type_update_dto->name);
        work_order_type_update_dto->name = NULL;
    }
    if (work_order_type_update_dto->description) {
        free(work_order_type_update_dto->description);
        work_order_type_update_dto->description = NULL;
    }
    free(work_order_type_update_dto);
}

cJSON *work_order_type_update_dto_convertToJSON(work_order_type_update_dto_t *work_order_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // work_order_type_update_dto->name
    if(work_order_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", work_order_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // work_order_type_update_dto->description
    if(work_order_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", work_order_type_update_dto->description) == NULL) {
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

work_order_type_update_dto_t *work_order_type_update_dto_parseFromJSON(cJSON *work_order_type_update_dtoJSON){

    work_order_type_update_dto_t *work_order_type_update_dto_local_var = NULL;

    // work_order_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(work_order_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // work_order_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(work_order_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    work_order_type_update_dto_local_var = work_order_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return work_order_type_update_dto_local_var;
end:
    return NULL;

}
