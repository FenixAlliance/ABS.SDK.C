#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "void_signing_request_dto.h"



void_signing_request_dto_t *void_signing_request_dto_create(
    char *voided_reason
    ) {
    void_signing_request_dto_t *void_signing_request_dto_local_var = malloc(sizeof(void_signing_request_dto_t));
    if (!void_signing_request_dto_local_var) {
        return NULL;
    }
    void_signing_request_dto_local_var->voided_reason = voided_reason;

    return void_signing_request_dto_local_var;
}


void void_signing_request_dto_free(void_signing_request_dto_t *void_signing_request_dto) {
    if(NULL == void_signing_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (void_signing_request_dto->voided_reason) {
        free(void_signing_request_dto->voided_reason);
        void_signing_request_dto->voided_reason = NULL;
    }
    free(void_signing_request_dto);
}

cJSON *void_signing_request_dto_convertToJSON(void_signing_request_dto_t *void_signing_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // void_signing_request_dto->voided_reason
    if(void_signing_request_dto->voided_reason) {
    if(cJSON_AddStringToObject(item, "voidedReason", void_signing_request_dto->voided_reason) == NULL) {
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

void_signing_request_dto_t *void_signing_request_dto_parseFromJSON(cJSON *void_signing_request_dtoJSON){

    void_signing_request_dto_t *void_signing_request_dto_local_var = NULL;

    // void_signing_request_dto->voided_reason
    cJSON *voided_reason = cJSON_GetObjectItemCaseSensitive(void_signing_request_dtoJSON, "voidedReason");
    if (voided_reason) { 
    if(!cJSON_IsString(voided_reason) && !cJSON_IsNull(voided_reason))
    {
    goto end; //String
    }
    }


    void_signing_request_dto_local_var = void_signing_request_dto_create (
        voided_reason && !cJSON_IsNull(voided_reason) ? strdup(voided_reason->valuestring) : NULL
        );

    return void_signing_request_dto_local_var;
end:
    return NULL;

}
