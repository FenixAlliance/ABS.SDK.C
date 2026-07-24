/*
 * create_signing_participant_dto.h
 *
 * 
 */

#ifndef _create_signing_participant_dto_H_
#define _create_signing_participant_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_signing_participant_dto_t create_signing_participant_dto_t;


// Enum ROLE for create_signing_participant_dto

typedef enum  { trustservice_create_signing_participant_dto_ROLE_NULL = 0, trustservice_create_signing_participant_dto_ROLE_Signer, trustservice_create_signing_participant_dto_ROLE_Approver, trustservice_create_signing_participant_dto_ROLE_Viewer, trustservice_create_signing_participant_dto_ROLE_Witness, trustservice_create_signing_participant_dto_ROLE_CarbonCopy, trustservice_create_signing_participant_dto_ROLE_System } trustservice_create_signing_participant_dto_ROLE_e;

char* create_signing_participant_dto_role_ToString(trustservice_create_signing_participant_dto_ROLE_e role);

trustservice_create_signing_participant_dto_ROLE_e create_signing_participant_dto_role_FromString(char* role);



typedef struct create_signing_participant_dto_t {
    char *contact_id; // string
    trustservice_create_signing_participant_dto_ROLE_e role; //enum
    int routing_order; //numeric
    char *external_reference; // string

} create_signing_participant_dto_t;

create_signing_participant_dto_t *create_signing_participant_dto_create(
    char *contact_id,
    trustservice_create_signing_participant_dto_ROLE_e role,
    int routing_order,
    char *external_reference
);

void create_signing_participant_dto_free(create_signing_participant_dto_t *create_signing_participant_dto);

create_signing_participant_dto_t *create_signing_participant_dto_parseFromJSON(cJSON *create_signing_participant_dtoJSON);

cJSON *create_signing_participant_dto_convertToJSON(create_signing_participant_dto_t *create_signing_participant_dto);

#endif /* _create_signing_participant_dto_H_ */

