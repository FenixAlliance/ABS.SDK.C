/*
 * tenant_invitation_dto.h
 *
 * 
 */

#ifndef _tenant_invitation_dto_H_
#define _tenant_invitation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_invitation_dto_t tenant_invitation_dto_t;




typedef struct tenant_invitation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    int revoked; //boolean
    int redeemed; //boolean
    char *redeemed_timestamp; //date time
    char *user_email; // string
    char *creator_enrollment_id; // string
    char *related_enrollment_id; // string

} tenant_invitation_dto_t;

tenant_invitation_dto_t *tenant_invitation_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    int revoked,
    int redeemed,
    char *redeemed_timestamp,
    char *user_email,
    char *creator_enrollment_id,
    char *related_enrollment_id
);

void tenant_invitation_dto_free(tenant_invitation_dto_t *tenant_invitation_dto);

tenant_invitation_dto_t *tenant_invitation_dto_parseFromJSON(cJSON *tenant_invitation_dtoJSON);

cJSON *tenant_invitation_dto_convertToJSON(tenant_invitation_dto_t *tenant_invitation_dto);

#endif /* _tenant_invitation_dto_H_ */

