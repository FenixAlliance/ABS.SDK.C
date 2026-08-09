#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "outbox_admin_reason_dto.h"



outbox_admin_reason_dto_t *outbox_admin_reason_dto_create(
    char *reason
    ) {
    outbox_admin_reason_dto_t *outbox_admin_reason_dto_local_var = malloc(sizeof(outbox_admin_reason_dto_t));
    if (!outbox_admin_reason_dto_local_var) {
        return NULL;
    }
    outbox_admin_reason_dto_local_var->reason = reason;

    return outbox_admin_reason_dto_local_var;
}


void outbox_admin_reason_dto_free(outbox_admin_reason_dto_t *outbox_admin_reason_dto) {
    if(NULL == outbox_admin_reason_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (outbox_admin_reason_dto->reason) {
        free(outbox_admin_reason_dto->reason);
        outbox_admin_reason_dto->reason = NULL;
    }
    free(outbox_admin_reason_dto);
}

cJSON *outbox_admin_reason_dto_convertToJSON(outbox_admin_reason_dto_t *outbox_admin_reason_dto) {
    cJSON *item = cJSON_CreateObject();

    // outbox_admin_reason_dto->reason
    if (!outbox_admin_reason_dto->reason) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "reason", outbox_admin_reason_dto->reason) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

outbox_admin_reason_dto_t *outbox_admin_reason_dto_parseFromJSON(cJSON *outbox_admin_reason_dtoJSON){

    outbox_admin_reason_dto_t *outbox_admin_reason_dto_local_var = NULL;

    // outbox_admin_reason_dto->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(outbox_admin_reason_dtoJSON, "reason");
    if (!reason) {
        goto end;
    }

    
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }


    outbox_admin_reason_dto_local_var = outbox_admin_reason_dto_create (
        strdup(reason->valuestring)
        );

    return outbox_admin_reason_dto_local_var;
end:
    return NULL;

}
