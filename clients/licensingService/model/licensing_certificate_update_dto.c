#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licensing_certificate_update_dto.h"



licensing_certificate_update_dto_t *licensing_certificate_update_dto_create(
    int expired,
    int disabled
    ) {
    licensing_certificate_update_dto_t *licensing_certificate_update_dto_local_var = malloc(sizeof(licensing_certificate_update_dto_t));
    if (!licensing_certificate_update_dto_local_var) {
        return NULL;
    }
    licensing_certificate_update_dto_local_var->expired = expired;
    licensing_certificate_update_dto_local_var->disabled = disabled;

    return licensing_certificate_update_dto_local_var;
}


void licensing_certificate_update_dto_free(licensing_certificate_update_dto_t *licensing_certificate_update_dto) {
    if(NULL == licensing_certificate_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    free(licensing_certificate_update_dto);
}

cJSON *licensing_certificate_update_dto_convertToJSON(licensing_certificate_update_dto_t *licensing_certificate_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // licensing_certificate_update_dto->expired
    if(licensing_certificate_update_dto->expired) {
    if(cJSON_AddBoolToObject(item, "expired", licensing_certificate_update_dto->expired) == NULL) {
    goto fail; //Bool
    }
    }


    // licensing_certificate_update_dto->disabled
    if(licensing_certificate_update_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", licensing_certificate_update_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

licensing_certificate_update_dto_t *licensing_certificate_update_dto_parseFromJSON(cJSON *licensing_certificate_update_dtoJSON){

    licensing_certificate_update_dto_t *licensing_certificate_update_dto_local_var = NULL;

    // licensing_certificate_update_dto->expired
    cJSON *expired = cJSON_GetObjectItemCaseSensitive(licensing_certificate_update_dtoJSON, "expired");
    if (expired) { 
    if(!cJSON_IsBool(expired))
    {
    goto end; //Bool
    }
    }

    // licensing_certificate_update_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(licensing_certificate_update_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }


    licensing_certificate_update_dto_local_var = licensing_certificate_update_dto_create (
        expired ? expired->valueint : 0,
        disabled ? disabled->valueint : 0
        );

    return licensing_certificate_update_dto_local_var;
end:
    return NULL;

}
