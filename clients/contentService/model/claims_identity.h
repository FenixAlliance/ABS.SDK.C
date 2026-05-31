/*
 * claims_identity.h
 *
 * 
 */

#ifndef _claims_identity_H_
#define _claims_identity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct claims_identity_t claims_identity_t;

#include "any_type.h"
#include "claim.h"



typedef struct claims_identity_t {
    char *authentication_type; // string
    int is_authenticated; //boolean
    struct claims_identity_t *actor; //model
    any_type_t *bootstrap_context; // custom
    list_t *claims; //nonprimitive container
    char *label; // string
    char *name; // string
    char *name_claim_type; // string
    char *role_claim_type; // string

} claims_identity_t;

claims_identity_t *claims_identity_create(
    char *authentication_type,
    int is_authenticated,
    claims_identity_t *actor,
    any_type_t *bootstrap_context,
    list_t *claims,
    char *label,
    char *name,
    char *name_claim_type,
    char *role_claim_type
);

void claims_identity_free(claims_identity_t *claims_identity);

claims_identity_t *claims_identity_parseFromJSON(cJSON *claims_identityJSON);

cJSON *claims_identity_convertToJSON(claims_identity_t *claims_identity);

#endif /* _claims_identity_H_ */

