#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sign_proof_of_delivery_request.h"



sign_proof_of_delivery_request_t *sign_proof_of_delivery_request_create(
    char *signed_by,
    char *signer_id
    ) {
    sign_proof_of_delivery_request_t *sign_proof_of_delivery_request_local_var = malloc(sizeof(sign_proof_of_delivery_request_t));
    if (!sign_proof_of_delivery_request_local_var) {
        return NULL;
    }
    sign_proof_of_delivery_request_local_var->signed_by = signed_by;
    sign_proof_of_delivery_request_local_var->signer_id = signer_id;

    return sign_proof_of_delivery_request_local_var;
}


void sign_proof_of_delivery_request_free(sign_proof_of_delivery_request_t *sign_proof_of_delivery_request) {
    if(NULL == sign_proof_of_delivery_request){
        return ;
    }
    listEntry_t *listEntry;
    if (sign_proof_of_delivery_request->signed_by) {
        free(sign_proof_of_delivery_request->signed_by);
        sign_proof_of_delivery_request->signed_by = NULL;
    }
    if (sign_proof_of_delivery_request->signer_id) {
        free(sign_proof_of_delivery_request->signer_id);
        sign_proof_of_delivery_request->signer_id = NULL;
    }
    free(sign_proof_of_delivery_request);
}

cJSON *sign_proof_of_delivery_request_convertToJSON(sign_proof_of_delivery_request_t *sign_proof_of_delivery_request) {
    cJSON *item = cJSON_CreateObject();

    // sign_proof_of_delivery_request->signed_by
    if(sign_proof_of_delivery_request->signed_by) {
    if(cJSON_AddStringToObject(item, "signedBy", sign_proof_of_delivery_request->signed_by) == NULL) {
    goto fail; //String
    }
    }


    // sign_proof_of_delivery_request->signer_id
    if(sign_proof_of_delivery_request->signer_id) {
    if(cJSON_AddStringToObject(item, "signerId", sign_proof_of_delivery_request->signer_id) == NULL) {
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

sign_proof_of_delivery_request_t *sign_proof_of_delivery_request_parseFromJSON(cJSON *sign_proof_of_delivery_requestJSON){

    sign_proof_of_delivery_request_t *sign_proof_of_delivery_request_local_var = NULL;

    // sign_proof_of_delivery_request->signed_by
    cJSON *signed_by = cJSON_GetObjectItemCaseSensitive(sign_proof_of_delivery_requestJSON, "signedBy");
    if (signed_by) { 
    if(!cJSON_IsString(signed_by) && !cJSON_IsNull(signed_by))
    {
    goto end; //String
    }
    }

    // sign_proof_of_delivery_request->signer_id
    cJSON *signer_id = cJSON_GetObjectItemCaseSensitive(sign_proof_of_delivery_requestJSON, "signerId");
    if (signer_id) { 
    if(!cJSON_IsString(signer_id) && !cJSON_IsNull(signer_id))
    {
    goto end; //String
    }
    }


    sign_proof_of_delivery_request_local_var = sign_proof_of_delivery_request_create (
        signed_by && !cJSON_IsNull(signed_by) ? strdup(signed_by->valuestring) : NULL,
        signer_id && !cJSON_IsNull(signer_id) ? strdup(signer_id->valuestring) : NULL
        );

    return sign_proof_of_delivery_request_local_var;
end:
    return NULL;

}
