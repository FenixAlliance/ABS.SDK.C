/*
 * tenant_type_dto_list_envelope.h
 *
 * 
 */

#ifndef _tenant_type_dto_list_envelope_H_
#define _tenant_type_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_type_dto_list_envelope_t tenant_type_dto_list_envelope_t;

#include "tenant_type_dto.h"



typedef struct tenant_type_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} tenant_type_dto_list_envelope_t;

tenant_type_dto_list_envelope_t *tenant_type_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void tenant_type_dto_list_envelope_free(tenant_type_dto_list_envelope_t *tenant_type_dto_list_envelope);

tenant_type_dto_list_envelope_t *tenant_type_dto_list_envelope_parseFromJSON(cJSON *tenant_type_dto_list_envelopeJSON);

cJSON *tenant_type_dto_list_envelope_convertToJSON(tenant_type_dto_list_envelope_t *tenant_type_dto_list_envelope);

#endif /* _tenant_type_dto_list_envelope_H_ */

