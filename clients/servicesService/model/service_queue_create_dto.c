#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_queue_create_dto.h"



service_queue_create_dto_t *service_queue_create_dto_create(
    char *id,
    char *timestamp,
    char *service_id
    ) {
    service_queue_create_dto_t *service_queue_create_dto_local_var = malloc(sizeof(service_queue_create_dto_t));
    if (!service_queue_create_dto_local_var) {
        return NULL;
    }
    service_queue_create_dto_local_var->id = id;
    service_queue_create_dto_local_var->timestamp = timestamp;
    service_queue_create_dto_local_var->service_id = service_id;

    return service_queue_create_dto_local_var;
}


void service_queue_create_dto_free(service_queue_create_dto_t *service_queue_create_dto) {
    if(NULL == service_queue_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (service_queue_create_dto->id) {
        free(service_queue_create_dto->id);
        service_queue_create_dto->id = NULL;
    }
    if (service_queue_create_dto->timestamp) {
        free(service_queue_create_dto->timestamp);
        service_queue_create_dto->timestamp = NULL;
    }
    if (service_queue_create_dto->service_id) {
        free(service_queue_create_dto->service_id);
        service_queue_create_dto->service_id = NULL;
    }
    free(service_queue_create_dto);
}

cJSON *service_queue_create_dto_convertToJSON(service_queue_create_dto_t *service_queue_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // service_queue_create_dto->id
    if(service_queue_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", service_queue_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // service_queue_create_dto->timestamp
    if(service_queue_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", service_queue_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // service_queue_create_dto->service_id
    if(service_queue_create_dto->service_id) {
    if(cJSON_AddStringToObject(item, "serviceId", service_queue_create_dto->service_id) == NULL) {
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

service_queue_create_dto_t *service_queue_create_dto_parseFromJSON(cJSON *service_queue_create_dtoJSON){

    service_queue_create_dto_t *service_queue_create_dto_local_var = NULL;

    // service_queue_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(service_queue_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // service_queue_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(service_queue_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // service_queue_create_dto->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(service_queue_create_dtoJSON, "serviceId");
    if (service_id) { 
    if(!cJSON_IsString(service_id) && !cJSON_IsNull(service_id))
    {
    goto end; //String
    }
    }


    service_queue_create_dto_local_var = service_queue_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        service_id && !cJSON_IsNull(service_id) ? strdup(service_id->valuestring) : NULL
        );

    return service_queue_create_dto_local_var;
end:
    return NULL;

}
