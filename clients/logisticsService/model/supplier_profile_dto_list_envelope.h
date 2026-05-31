/*
 * supplier_profile_dto_list_envelope.h
 *
 * 
 */

#ifndef _supplier_profile_dto_list_envelope_H_
#define _supplier_profile_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_profile_dto_list_envelope_t supplier_profile_dto_list_envelope_t;

#include "supplier_profile_dto.h"



typedef struct supplier_profile_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} supplier_profile_dto_list_envelope_t;

supplier_profile_dto_list_envelope_t *supplier_profile_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void supplier_profile_dto_list_envelope_free(supplier_profile_dto_list_envelope_t *supplier_profile_dto_list_envelope);

supplier_profile_dto_list_envelope_t *supplier_profile_dto_list_envelope_parseFromJSON(cJSON *supplier_profile_dto_list_envelopeJSON);

cJSON *supplier_profile_dto_list_envelope_convertToJSON(supplier_profile_dto_list_envelope_t *supplier_profile_dto_list_envelope);

#endif /* _supplier_profile_dto_list_envelope_H_ */

