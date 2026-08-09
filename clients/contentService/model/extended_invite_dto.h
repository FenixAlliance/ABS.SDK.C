/*
 * extended_invite_dto.h
 *
 * 
 */

#ifndef _extended_invite_dto_H_
#define _extended_invite_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_invite_dto_t extended_invite_dto_t;

#include "tenant_dto.h"



typedef struct extended_invite_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    int revoked; //boolean
    int redeemed; //boolean
    char *redeemed_timestamp; //date time
    char *user_email; // string
    char *creator_enrollment_id; // string
    char *related_enrollment_id; // string
    struct tenant_dto_t *tenant; //model

} extended_invite_dto_t;

extended_invite_dto_t *extended_invite_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    int revoked,
    int redeemed,
    char *redeemed_timestamp,
    char *user_email,
    char *creator_enrollment_id,
    char *related_enrollment_id,
    tenant_dto_t *tenant
);

void extended_invite_dto_free(extended_invite_dto_t *extended_invite_dto);

extended_invite_dto_t *extended_invite_dto_parseFromJSON(cJSON *extended_invite_dtoJSON);

cJSON *extended_invite_dto_convertToJSON(extended_invite_dto_t *extended_invite_dto);

#endif /* _extended_invite_dto_H_ */

