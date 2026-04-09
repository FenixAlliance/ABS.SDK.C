/*
 * extended_user_dto_list_envelope.h
 *
 * 
 */

#ifndef _extended_user_dto_list_envelope_H_
#define _extended_user_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_user_dto_list_envelope_t extended_user_dto_list_envelope_t;

#include "extended_user_dto.h"



typedef struct extended_user_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} extended_user_dto_list_envelope_t;

extended_user_dto_list_envelope_t *extended_user_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void extended_user_dto_list_envelope_free(extended_user_dto_list_envelope_t *extended_user_dto_list_envelope);

extended_user_dto_list_envelope_t *extended_user_dto_list_envelope_parseFromJSON(cJSON *extended_user_dto_list_envelopeJSON);

cJSON *extended_user_dto_list_envelope_convertToJSON(extended_user_dto_list_envelope_t *extended_user_dto_list_envelope);

#endif /* _extended_user_dto_list_envelope_H_ */

