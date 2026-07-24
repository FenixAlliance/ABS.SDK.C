/*
 * trust_signing_provider_descriptor_dto_list_envelope.h
 *
 * 
 */

#ifndef _trust_signing_provider_descriptor_dto_list_envelope_H_
#define _trust_signing_provider_descriptor_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trust_signing_provider_descriptor_dto_list_envelope_t trust_signing_provider_descriptor_dto_list_envelope_t;

#include "trust_signing_provider_descriptor_dto.h"



typedef struct trust_signing_provider_descriptor_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} trust_signing_provider_descriptor_dto_list_envelope_t;

trust_signing_provider_descriptor_dto_list_envelope_t *trust_signing_provider_descriptor_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void trust_signing_provider_descriptor_dto_list_envelope_free(trust_signing_provider_descriptor_dto_list_envelope_t *trust_signing_provider_descriptor_dto_list_envelope);

trust_signing_provider_descriptor_dto_list_envelope_t *trust_signing_provider_descriptor_dto_list_envelope_parseFromJSON(cJSON *trust_signing_provider_descriptor_dto_list_envelopeJSON);

cJSON *trust_signing_provider_descriptor_dto_list_envelope_convertToJSON(trust_signing_provider_descriptor_dto_list_envelope_t *trust_signing_provider_descriptor_dto_list_envelope);

#endif /* _trust_signing_provider_descriptor_dto_list_envelope_H_ */

