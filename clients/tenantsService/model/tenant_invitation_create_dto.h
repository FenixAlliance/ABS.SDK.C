/*
 * tenant_invitation_create_dto.h
 *
 * 
 */

#ifndef _tenant_invitation_create_dto_H_
#define _tenant_invitation_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_invitation_create_dto_t tenant_invitation_create_dto_t;




typedef struct tenant_invitation_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *user_email; // string

} tenant_invitation_create_dto_t;

tenant_invitation_create_dto_t *tenant_invitation_create_dto_create(
    char *id,
    char *timestamp,
    char *user_email
);

void tenant_invitation_create_dto_free(tenant_invitation_create_dto_t *tenant_invitation_create_dto);

tenant_invitation_create_dto_t *tenant_invitation_create_dto_parseFromJSON(cJSON *tenant_invitation_create_dtoJSON);

cJSON *tenant_invitation_create_dto_convertToJSON(tenant_invitation_create_dto_t *tenant_invitation_create_dto);

#endif /* _tenant_invitation_create_dto_H_ */

