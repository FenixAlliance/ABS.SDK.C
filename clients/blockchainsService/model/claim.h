/*
 * claim.h
 *
 * 
 */

#ifndef _claim_H_
#define _claim_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct claim_t claim_t;

#include "claims_identity.h"



typedef struct claim_t {
    char *issuer; // string
    char *original_issuer; // string
    list_t* properties; //map
    struct claims_identity_t *subject; //model
    char *type; // string
    char *value; // string
    char *value_type; // string

} claim_t;

claim_t *claim_create(
    char *issuer,
    char *original_issuer,
    list_t* properties,
    claims_identity_t *subject,
    char *type,
    char *value,
    char *value_type
);

void claim_free(claim_t *claim);

claim_t *claim_parseFromJSON(cJSON *claimJSON);

cJSON *claim_convertToJSON(claim_t *claim);

#endif /* _claim_H_ */

