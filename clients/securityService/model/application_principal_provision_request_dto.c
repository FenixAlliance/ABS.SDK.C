#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "application_principal_provision_request_dto.h"



application_principal_provision_request_dto_t *application_principal_provision_request_dto_create(
    char *business_application_id
    ) {
    application_principal_provision_request_dto_t *application_principal_provision_request_dto_local_var = malloc(sizeof(application_principal_provision_request_dto_t));
    if (!application_principal_provision_request_dto_local_var) {
        return NULL;
    }
    application_principal_provision_request_dto_local_var->business_application_id = business_application_id;

    return application_principal_provision_request_dto_local_var;
}


void application_principal_provision_request_dto_free(application_principal_provision_request_dto_t *application_principal_provision_request_dto) {
    if(NULL == application_principal_provision_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (application_principal_provision_request_dto->business_application_id) {
        free(application_principal_provision_request_dto->business_application_id);
        application_principal_provision_request_dto->business_application_id = NULL;
    }
    free(application_principal_provision_request_dto);
}

cJSON *application_principal_provision_request_dto_convertToJSON(application_principal_provision_request_dto_t *application_principal_provision_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // application_principal_provision_request_dto->business_application_id
    if (!application_principal_provision_request_dto->business_application_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessApplicationId", application_principal_provision_request_dto->business_application_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

application_principal_provision_request_dto_t *application_principal_provision_request_dto_parseFromJSON(cJSON *application_principal_provision_request_dtoJSON){

    application_principal_provision_request_dto_t *application_principal_provision_request_dto_local_var = NULL;

    // application_principal_provision_request_dto->business_application_id
    cJSON *business_application_id = cJSON_GetObjectItemCaseSensitive(application_principal_provision_request_dtoJSON, "businessApplicationId");
    if (!business_application_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_application_id))
    {
    goto end; //String
    }


    application_principal_provision_request_dto_local_var = application_principal_provision_request_dto_create (
        strdup(business_application_id->valuestring)
        );

    return application_principal_provision_request_dto_local_var;
end:
    return NULL;

}
