#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reject_proof_of_delivery_request.h"



reject_proof_of_delivery_request_t *reject_proof_of_delivery_request_create(
    char *reason
    ) {
    reject_proof_of_delivery_request_t *reject_proof_of_delivery_request_local_var = malloc(sizeof(reject_proof_of_delivery_request_t));
    if (!reject_proof_of_delivery_request_local_var) {
        return NULL;
    }
    reject_proof_of_delivery_request_local_var->reason = reason;

    return reject_proof_of_delivery_request_local_var;
}


void reject_proof_of_delivery_request_free(reject_proof_of_delivery_request_t *reject_proof_of_delivery_request) {
    if(NULL == reject_proof_of_delivery_request){
        return ;
    }
    listEntry_t *listEntry;
    if (reject_proof_of_delivery_request->reason) {
        free(reject_proof_of_delivery_request->reason);
        reject_proof_of_delivery_request->reason = NULL;
    }
    free(reject_proof_of_delivery_request);
}

cJSON *reject_proof_of_delivery_request_convertToJSON(reject_proof_of_delivery_request_t *reject_proof_of_delivery_request) {
    cJSON *item = cJSON_CreateObject();

    // reject_proof_of_delivery_request->reason
    if(reject_proof_of_delivery_request->reason) {
    if(cJSON_AddStringToObject(item, "reason", reject_proof_of_delivery_request->reason) == NULL) {
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

reject_proof_of_delivery_request_t *reject_proof_of_delivery_request_parseFromJSON(cJSON *reject_proof_of_delivery_requestJSON){

    reject_proof_of_delivery_request_t *reject_proof_of_delivery_request_local_var = NULL;

    // reject_proof_of_delivery_request->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(reject_proof_of_delivery_requestJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }


    reject_proof_of_delivery_request_local_var = reject_proof_of_delivery_request_create (
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL
        );

    return reject_proof_of_delivery_request_local_var;
end:
    return NULL;

}
