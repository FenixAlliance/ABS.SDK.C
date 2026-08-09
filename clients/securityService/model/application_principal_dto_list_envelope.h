/*
 * application_principal_dto_list_envelope.h
 *
 * 
 */

#ifndef _application_principal_dto_list_envelope_H_
#define _application_principal_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct application_principal_dto_list_envelope_t application_principal_dto_list_envelope_t;

#include "application_principal_dto.h"



typedef struct application_principal_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} application_principal_dto_list_envelope_t;

application_principal_dto_list_envelope_t *application_principal_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
);

void application_principal_dto_list_envelope_free(application_principal_dto_list_envelope_t *application_principal_dto_list_envelope);

application_principal_dto_list_envelope_t *application_principal_dto_list_envelope_parseFromJSON(cJSON *application_principal_dto_list_envelopeJSON);

cJSON *application_principal_dto_list_envelope_convertToJSON(application_principal_dto_list_envelope_t *application_principal_dto_list_envelope);

#endif /* _application_principal_dto_list_envelope_H_ */

