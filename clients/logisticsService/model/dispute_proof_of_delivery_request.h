/*
 * dispute_proof_of_delivery_request.h
 *
 * 
 */

#ifndef _dispute_proof_of_delivery_request_H_
#define _dispute_proof_of_delivery_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dispute_proof_of_delivery_request_t dispute_proof_of_delivery_request_t;




typedef struct dispute_proof_of_delivery_request_t {
    char *reason; // string

} dispute_proof_of_delivery_request_t;

dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request_create(
    char *reason
);

void dispute_proof_of_delivery_request_free(dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request);

dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request_parseFromJSON(cJSON *dispute_proof_of_delivery_requestJSON);

cJSON *dispute_proof_of_delivery_request_convertToJSON(dispute_proof_of_delivery_request_t *dispute_proof_of_delivery_request);

#endif /* _dispute_proof_of_delivery_request_H_ */

