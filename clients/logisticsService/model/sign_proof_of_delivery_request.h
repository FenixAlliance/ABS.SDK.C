/*
 * sign_proof_of_delivery_request.h
 *
 * 
 */

#ifndef _sign_proof_of_delivery_request_H_
#define _sign_proof_of_delivery_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sign_proof_of_delivery_request_t sign_proof_of_delivery_request_t;




typedef struct sign_proof_of_delivery_request_t {
    char *signed_by; // string
    char *signer_id; // string

} sign_proof_of_delivery_request_t;

sign_proof_of_delivery_request_t *sign_proof_of_delivery_request_create(
    char *signed_by,
    char *signer_id
);

void sign_proof_of_delivery_request_free(sign_proof_of_delivery_request_t *sign_proof_of_delivery_request);

sign_proof_of_delivery_request_t *sign_proof_of_delivery_request_parseFromJSON(cJSON *sign_proof_of_delivery_requestJSON);

cJSON *sign_proof_of_delivery_request_convertToJSON(sign_proof_of_delivery_request_t *sign_proof_of_delivery_request);

#endif /* _sign_proof_of_delivery_request_H_ */

