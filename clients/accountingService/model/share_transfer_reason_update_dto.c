#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_transfer_reason_update_dto.h"



share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_create(
    char *name,
    char *description
    ) {
    share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_local_var = malloc(sizeof(share_transfer_reason_update_dto_t));
    if (!share_transfer_reason_update_dto_local_var) {
        return NULL;
    }
    share_transfer_reason_update_dto_local_var->name = name;
    share_transfer_reason_update_dto_local_var->description = description;

    return share_transfer_reason_update_dto_local_var;
}


void share_transfer_reason_update_dto_free(share_transfer_reason_update_dto_t *share_transfer_reason_update_dto) {
    if(NULL == share_transfer_reason_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (share_transfer_reason_update_dto->name) {
        free(share_transfer_reason_update_dto->name);
        share_transfer_reason_update_dto->name = NULL;
    }
    if (share_transfer_reason_update_dto->description) {
        free(share_transfer_reason_update_dto->description);
        share_transfer_reason_update_dto->description = NULL;
    }
    free(share_transfer_reason_update_dto);
}

cJSON *share_transfer_reason_update_dto_convertToJSON(share_transfer_reason_update_dto_t *share_transfer_reason_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // share_transfer_reason_update_dto->name
    if(share_transfer_reason_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", share_transfer_reason_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_reason_update_dto->description
    if(share_transfer_reason_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", share_transfer_reason_update_dto->description) == NULL) {
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

share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_parseFromJSON(cJSON *share_transfer_reason_update_dtoJSON){

    share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_local_var = NULL;

    // share_transfer_reason_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(share_transfer_reason_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // share_transfer_reason_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(share_transfer_reason_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    share_transfer_reason_update_dto_local_var = share_transfer_reason_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return share_transfer_reason_update_dto_local_var;
end:
    return NULL;

}
