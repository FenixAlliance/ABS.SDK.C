/*
 * business_domain_dto_envelope.h
 *
 * 
 */

#ifndef _business_domain_dto_envelope_H_
#define _business_domain_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_domain_dto_envelope_t business_domain_dto_envelope_t;

#include "business_domain_dto.h"



typedef struct business_domain_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct business_domain_dto_t *result; //model

} business_domain_dto_envelope_t;

business_domain_dto_envelope_t *business_domain_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    business_domain_dto_t *result
);

void business_domain_dto_envelope_free(business_domain_dto_envelope_t *business_domain_dto_envelope);

business_domain_dto_envelope_t *business_domain_dto_envelope_parseFromJSON(cJSON *business_domain_dto_envelopeJSON);

cJSON *business_domain_dto_envelope_convertToJSON(business_domain_dto_envelope_t *business_domain_dto_envelope);

#endif /* _business_domain_dto_envelope_H_ */

