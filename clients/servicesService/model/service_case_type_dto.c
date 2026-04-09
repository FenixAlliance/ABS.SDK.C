#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_case_type_dto.h"



service_case_type_dto_t *service_case_type_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
    ) {
    service_case_type_dto_t *service_case_type_dto_local_var = malloc(sizeof(service_case_type_dto_t));
    if (!service_case_type_dto_local_var) {
        return NULL;
    }
    service_case_type_dto_local_var->id = id;
    service_case_type_dto_local_var->timestamp = timestamp;
    service_case_type_dto_local_var->title = title;
    service_case_type_dto_local_var->description = description;

    return service_case_type_dto_local_var;
}


void service_case_type_dto_free(service_case_type_dto_t *service_case_type_dto) {
    if(NULL == service_case_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (service_case_type_dto->id) {
        free(service_case_type_dto->id);
        service_case_type_dto->id = NULL;
    }
    if (service_case_type_dto->timestamp) {
        free(service_case_type_dto->timestamp);
        service_case_type_dto->timestamp = NULL;
    }
    if (service_case_type_dto->title) {
        free(service_case_type_dto->title);
        service_case_type_dto->title = NULL;
    }
    if (service_case_type_dto->description) {
        free(service_case_type_dto->description);
        service_case_type_dto->description = NULL;
    }
    free(service_case_type_dto);
}

cJSON *service_case_type_dto_convertToJSON(service_case_type_dto_t *service_case_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // service_case_type_dto->id
    if(service_case_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", service_case_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_type_dto->timestamp
    if(service_case_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", service_case_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // service_case_type_dto->title
    if(service_case_type_dto->title) {
    if(cJSON_AddStringToObject(item, "title", service_case_type_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // service_case_type_dto->description
    if(service_case_type_dto->description) {
    if(cJSON_AddStringToObject(item, "description", service_case_type_dto->description) == NULL) {
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

service_case_type_dto_t *service_case_type_dto_parseFromJSON(cJSON *service_case_type_dtoJSON){

    service_case_type_dto_t *service_case_type_dto_local_var = NULL;

    // service_case_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(service_case_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // service_case_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(service_case_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // service_case_type_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(service_case_type_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // service_case_type_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(service_case_type_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    service_case_type_dto_local_var = service_case_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return service_case_type_dto_local_var;
end:
    return NULL;

}
