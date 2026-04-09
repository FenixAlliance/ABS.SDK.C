#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_case_type_update_dto.h"



service_case_type_update_dto_t *service_case_type_update_dto_create(
    char *title,
    char *description
    ) {
    service_case_type_update_dto_t *service_case_type_update_dto_local_var = malloc(sizeof(service_case_type_update_dto_t));
    if (!service_case_type_update_dto_local_var) {
        return NULL;
    }
    service_case_type_update_dto_local_var->title = title;
    service_case_type_update_dto_local_var->description = description;

    return service_case_type_update_dto_local_var;
}


void service_case_type_update_dto_free(service_case_type_update_dto_t *service_case_type_update_dto) {
    if(NULL == service_case_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (service_case_type_update_dto->title) {
        free(service_case_type_update_dto->title);
        service_case_type_update_dto->title = NULL;
    }
    if (service_case_type_update_dto->description) {
        free(service_case_type_update_dto->description);
        service_case_type_update_dto->description = NULL;
    }
    free(service_case_type_update_dto);
}

cJSON *service_case_type_update_dto_convertToJSON(service_case_type_update_dto_t *service_case_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // service_case_type_update_dto->title
    if(service_case_type_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", service_case_type_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // service_case_type_update_dto->description
    if(service_case_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", service_case_type_update_dto->description) == NULL) {
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

service_case_type_update_dto_t *service_case_type_update_dto_parseFromJSON(cJSON *service_case_type_update_dtoJSON){

    service_case_type_update_dto_t *service_case_type_update_dto_local_var = NULL;

    // service_case_type_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(service_case_type_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // service_case_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(service_case_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    service_case_type_update_dto_local_var = service_case_type_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return service_case_type_update_dto_local_var;
end:
    return NULL;

}
