/*
 * business_domain_dto_list_envelope.h
 *
 * 
 */

#ifndef _business_domain_dto_list_envelope_H_
#define _business_domain_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_domain_dto_list_envelope_t business_domain_dto_list_envelope_t;

#include "business_domain_dto.h"



typedef struct business_domain_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} business_domain_dto_list_envelope_t;

business_domain_dto_list_envelope_t *business_domain_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void business_domain_dto_list_envelope_free(business_domain_dto_list_envelope_t *business_domain_dto_list_envelope);

business_domain_dto_list_envelope_t *business_domain_dto_list_envelope_parseFromJSON(cJSON *business_domain_dto_list_envelopeJSON);

cJSON *business_domain_dto_list_envelope_convertToJSON(business_domain_dto_list_envelope_t *business_domain_dto_list_envelope);

#endif /* _business_domain_dto_list_envelope_H_ */

