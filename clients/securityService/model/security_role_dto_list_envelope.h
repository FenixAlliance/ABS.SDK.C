/*
 * security_role_dto_list_envelope.h
 *
 * 
 */

#ifndef _security_role_dto_list_envelope_H_
#define _security_role_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_role_dto_list_envelope_t security_role_dto_list_envelope_t;

#include "security_role_dto.h"



typedef struct security_role_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} security_role_dto_list_envelope_t;

security_role_dto_list_envelope_t *security_role_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void security_role_dto_list_envelope_free(security_role_dto_list_envelope_t *security_role_dto_list_envelope);

security_role_dto_list_envelope_t *security_role_dto_list_envelope_parseFromJSON(cJSON *security_role_dto_list_envelopeJSON);

cJSON *security_role_dto_list_envelope_convertToJSON(security_role_dto_list_envelope_t *security_role_dto_list_envelope);

#endif /* _security_role_dto_list_envelope_H_ */

