#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inbox_admin_reason_dto.h"



inbox_admin_reason_dto_t *inbox_admin_reason_dto_create(
    char *reason
    ) {
    inbox_admin_reason_dto_t *inbox_admin_reason_dto_local_var = malloc(sizeof(inbox_admin_reason_dto_t));
    if (!inbox_admin_reason_dto_local_var) {
        return NULL;
    }
    inbox_admin_reason_dto_local_var->reason = reason;

    return inbox_admin_reason_dto_local_var;
}


void inbox_admin_reason_dto_free(inbox_admin_reason_dto_t *inbox_admin_reason_dto) {
    if(NULL == inbox_admin_reason_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (inbox_admin_reason_dto->reason) {
        free(inbox_admin_reason_dto->reason);
        inbox_admin_reason_dto->reason = NULL;
    }
    free(inbox_admin_reason_dto);
}

cJSON *inbox_admin_reason_dto_convertToJSON(inbox_admin_reason_dto_t *inbox_admin_reason_dto) {
    cJSON *item = cJSON_CreateObject();

    // inbox_admin_reason_dto->reason
    if (!inbox_admin_reason_dto->reason) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "reason", inbox_admin_reason_dto->reason) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inbox_admin_reason_dto_t *inbox_admin_reason_dto_parseFromJSON(cJSON *inbox_admin_reason_dtoJSON){

    inbox_admin_reason_dto_t *inbox_admin_reason_dto_local_var = NULL;

    // inbox_admin_reason_dto->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(inbox_admin_reason_dtoJSON, "reason");
    if (!reason) {
        goto end;
    }

    
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }


    inbox_admin_reason_dto_local_var = inbox_admin_reason_dto_create (
        strdup(reason->valuestring)
        );

    return inbox_admin_reason_dto_local_var;
end:
    return NULL;

}
