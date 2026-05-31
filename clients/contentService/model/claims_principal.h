/*
 * claims_principal.h
 *
 * 
 */

#ifndef _claims_principal_H_
#define _claims_principal_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct claims_principal_t claims_principal_t;

#include "claim.h"
#include "claims_identity.h"
#include "i_identity.h"



typedef struct claims_principal_t {
    list_t *claims; //nonprimitive container
    list_t *identities; //nonprimitive container
    struct i_identity_t *identity; //model

} claims_principal_t;

claims_principal_t *claims_principal_create(
    list_t *claims,
    list_t *identities,
    i_identity_t *identity
);

void claims_principal_free(claims_principal_t *claims_principal);

claims_principal_t *claims_principal_parseFromJSON(cJSON *claims_principalJSON);

cJSON *claims_principal_convertToJSON(claims_principal_t *claims_principal);

#endif /* _claims_principal_H_ */

