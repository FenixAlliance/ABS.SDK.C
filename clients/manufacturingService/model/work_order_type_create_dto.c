#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "work_order_type_create_dto.h"



work_order_type_create_dto_t *work_order_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    work_order_type_create_dto_t *work_order_type_create_dto_local_var = malloc(sizeof(work_order_type_create_dto_t));
    if (!work_order_type_create_dto_local_var) {
        return NULL;
    }
    work_order_type_create_dto_local_var->id = id;
    work_order_type_create_dto_local_var->timestamp = timestamp;
    work_order_type_create_dto_local_var->name = name;
    work_order_type_create_dto_local_var->description = description;

    return work_order_type_create_dto_local_var;
}


void work_order_type_create_dto_free(work_order_type_create_dto_t *work_order_type_create_dto) {
    if(NULL == work_order_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (work_order_type_create_dto->id) {
        free(work_order_type_create_dto->id);
        work_order_type_create_dto->id = NULL;
    }
    if (work_order_type_create_dto->timestamp) {
        free(work_order_type_create_dto->timestamp);
        work_order_type_create_dto->timestamp = NULL;
    }
    if (work_order_type_create_dto->name) {
        free(work_order_type_create_dto->name);
        work_order_type_create_dto->name = NULL;
    }
    if (work_order_type_create_dto->description) {
        free(work_order_type_create_dto->description);
        work_order_type_create_dto->description = NULL;
    }
    free(work_order_type_create_dto);
}

cJSON *work_order_type_create_dto_convertToJSON(work_order_type_create_dto_t *work_order_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // work_order_type_create_dto->id
    if(work_order_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", work_order_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // work_order_type_create_dto->timestamp
    if(work_order_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", work_order_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // work_order_type_create_dto->name
    if (!work_order_type_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", work_order_type_create_dto->name) == NULL) {
    goto fail; //String
    }


    // work_order_type_create_dto->description
    if(work_order_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", work_order_type_create_dto->description) == NULL) {
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

work_order_type_create_dto_t *work_order_type_create_dto_parseFromJSON(cJSON *work_order_type_create_dtoJSON){

    work_order_type_create_dto_t *work_order_type_create_dto_local_var = NULL;

    // work_order_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(work_order_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // work_order_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(work_order_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // work_order_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(work_order_type_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // work_order_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(work_order_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    work_order_type_create_dto_local_var = work_order_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return work_order_type_create_dto_local_var;
end:
    return NULL;

}
