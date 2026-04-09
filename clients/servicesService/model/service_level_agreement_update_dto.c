#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_level_agreement_update_dto.h"



service_level_agreement_update_dto_t *service_level_agreement_update_dto_create(
    char *service_id,
    char *service_level_id,
    char *contact_id
    ) {
    service_level_agreement_update_dto_t *service_level_agreement_update_dto_local_var = malloc(sizeof(service_level_agreement_update_dto_t));
    if (!service_level_agreement_update_dto_local_var) {
        return NULL;
    }
    service_level_agreement_update_dto_local_var->service_id = service_id;
    service_level_agreement_update_dto_local_var->service_level_id = service_level_id;
    service_level_agreement_update_dto_local_var->contact_id = contact_id;

    return service_level_agreement_update_dto_local_var;
}


void service_level_agreement_update_dto_free(service_level_agreement_update_dto_t *service_level_agreement_update_dto) {
    if(NULL == service_level_agreement_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (service_level_agreement_update_dto->service_id) {
        free(service_level_agreement_update_dto->service_id);
        service_level_agreement_update_dto->service_id = NULL;
    }
    if (service_level_agreement_update_dto->service_level_id) {
        free(service_level_agreement_update_dto->service_level_id);
        service_level_agreement_update_dto->service_level_id = NULL;
    }
    if (service_level_agreement_update_dto->contact_id) {
        free(service_level_agreement_update_dto->contact_id);
        service_level_agreement_update_dto->contact_id = NULL;
    }
    free(service_level_agreement_update_dto);
}

cJSON *service_level_agreement_update_dto_convertToJSON(service_level_agreement_update_dto_t *service_level_agreement_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // service_level_agreement_update_dto->service_id
    if(service_level_agreement_update_dto->service_id) {
    if(cJSON_AddStringToObject(item, "serviceId", service_level_agreement_update_dto->service_id) == NULL) {
    goto fail; //String
    }
    }


    // service_level_agreement_update_dto->service_level_id
    if(service_level_agreement_update_dto->service_level_id) {
    if(cJSON_AddStringToObject(item, "serviceLevelId", service_level_agreement_update_dto->service_level_id) == NULL) {
    goto fail; //String
    }
    }


    // service_level_agreement_update_dto->contact_id
    if(service_level_agreement_update_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", service_level_agreement_update_dto->contact_id) == NULL) {
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

service_level_agreement_update_dto_t *service_level_agreement_update_dto_parseFromJSON(cJSON *service_level_agreement_update_dtoJSON){

    service_level_agreement_update_dto_t *service_level_agreement_update_dto_local_var = NULL;

    // service_level_agreement_update_dto->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(service_level_agreement_update_dtoJSON, "serviceId");
    if (service_id) { 
    if(!cJSON_IsString(service_id) && !cJSON_IsNull(service_id))
    {
    goto end; //String
    }
    }

    // service_level_agreement_update_dto->service_level_id
    cJSON *service_level_id = cJSON_GetObjectItemCaseSensitive(service_level_agreement_update_dtoJSON, "serviceLevelId");
    if (service_level_id) { 
    if(!cJSON_IsString(service_level_id) && !cJSON_IsNull(service_level_id))
    {
    goto end; //String
    }
    }

    // service_level_agreement_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(service_level_agreement_update_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    service_level_agreement_update_dto_local_var = service_level_agreement_update_dto_create (
        service_id && !cJSON_IsNull(service_id) ? strdup(service_id->valuestring) : NULL,
        service_level_id && !cJSON_IsNull(service_level_id) ? strdup(service_level_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return service_level_agreement_update_dto_local_var;
end:
    return NULL;

}
