#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "maintenance_visit_create_dto.h"



maintenance_visit_create_dto_t *maintenance_visit_create_dto_create(
    char *id,
    char *timestamp
    ) {
    maintenance_visit_create_dto_t *maintenance_visit_create_dto_local_var = malloc(sizeof(maintenance_visit_create_dto_t));
    if (!maintenance_visit_create_dto_local_var) {
        return NULL;
    }
    maintenance_visit_create_dto_local_var->id = id;
    maintenance_visit_create_dto_local_var->timestamp = timestamp;

    return maintenance_visit_create_dto_local_var;
}


void maintenance_visit_create_dto_free(maintenance_visit_create_dto_t *maintenance_visit_create_dto) {
    if(NULL == maintenance_visit_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (maintenance_visit_create_dto->id) {
        free(maintenance_visit_create_dto->id);
        maintenance_visit_create_dto->id = NULL;
    }
    if (maintenance_visit_create_dto->timestamp) {
        free(maintenance_visit_create_dto->timestamp);
        maintenance_visit_create_dto->timestamp = NULL;
    }
    free(maintenance_visit_create_dto);
}

cJSON *maintenance_visit_create_dto_convertToJSON(maintenance_visit_create_dto_t *maintenance_visit_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // maintenance_visit_create_dto->id
    if(maintenance_visit_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", maintenance_visit_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_create_dto->timestamp
    if(maintenance_visit_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", maintenance_visit_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

maintenance_visit_create_dto_t *maintenance_visit_create_dto_parseFromJSON(cJSON *maintenance_visit_create_dtoJSON){

    maintenance_visit_create_dto_t *maintenance_visit_create_dto_local_var = NULL;

    // maintenance_visit_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(maintenance_visit_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    maintenance_visit_create_dto_local_var = maintenance_visit_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return maintenance_visit_create_dto_local_var;
end:
    return NULL;

}
