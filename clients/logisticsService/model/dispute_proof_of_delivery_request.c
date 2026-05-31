#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dispute_proof_of_delivery_request.h"



dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request_create(
    char *reason
    ) {
    dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request_local_var = malloc(sizeof(dispute_proof_of_delivery_request_t));
    if (!dispute_proof_of_delivery_request_local_var) {
        return NULL;
    }
    dispute_proof_of_delivery_request_local_var->reason = reason;

    return dispute_proof_of_delivery_request_local_var;
}


void dispute_proof_of_delivery_request_free(dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request) {
    if(NULL == dispute_proof_of_delivery_request){
        return ;
    }
    listEntry_t *listEntry;
    if (dispute_proof_of_delivery_request->reason) {
        free(dispute_proof_of_delivery_request->reason);
        dispute_proof_of_delivery_request->reason = NULL;
    }
    free(dispute_proof_of_delivery_request);
}

cJSON *dispute_proof_of_delivery_request_convertToJSON(dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request) {
    cJSON *item = cJSON_CreateObject();

    // dispute_proof_of_delivery_request->reason
    if(dispute_proof_of_delivery_request->reason) {
    if(cJSON_AddStringToObject(item, "reason", dispute_proof_of_delivery_request->reason) == NULL) {
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

dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request_parseFromJSON(cJSON *dispute_proof_of_delivery_requestJSON){

    dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request_local_var = NULL;

    // dispute_proof_of_delivery_request->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(dispute_proof_of_delivery_requestJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }


    dispute_proof_of_delivery_request_local_var = dispute_proof_of_delivery_request_create (
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL
        );

    return dispute_proof_of_delivery_request_local_var;
end:
    return NULL;

}
