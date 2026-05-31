/*
 * reject_proof_of_delivery_request.h
 *
 * 
 */

#ifndef _reject_proof_of_delivery_request_H_
#define _reject_proof_of_delivery_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reject_proof_of_delivery_request_t reject_proof_of_delivery_request_t;




typedef struct reject_proof_of_delivery_request_t {
    char *reason; // string

} reject_proof_of_delivery_request_t;

reject_proof_of_delivery_request_t *reject_proof_of_delivery_request_create(
    char *reason
);

void reject_proof_of_delivery_request_free(reject_proof_of_delivery_request_t *reject_proof_of_delivery_request);

reject_proof_of_delivery_request_t *reject_proof_of_delivery_request_parseFromJSON(cJSON *reject_proof_of_delivery_requestJSON);

cJSON *reject_proof_of_delivery_request_convertToJSON(reject_proof_of_delivery_request_t *reject_proof_of_delivery_request);

#endif /* _reject_proof_of_delivery_request_H_ */

