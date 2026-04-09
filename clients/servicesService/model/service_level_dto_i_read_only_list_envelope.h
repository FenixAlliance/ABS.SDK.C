/*
 * service_level_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _service_level_dto_i_read_only_list_envelope_H_
#define _service_level_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_level_dto_i_read_only_list_envelope_t service_level_dto_i_read_only_list_envelope_t;

#include "service_level_dto.h"



typedef struct service_level_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} service_level_dto_i_read_only_list_envelope_t;

service_level_dto_i_read_only_list_envelope_t *service_level_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void service_level_dto_i_read_only_list_envelope_free(service_level_dto_i_read_only_list_envelope_t *service_level_dto_i_read_only_list_envelope);

service_level_dto_i_read_only_list_envelope_t *service_level_dto_i_read_only_list_envelope_parseFromJSON(cJSON *service_level_dto_i_read_only_list_envelopeJSON);

cJSON *service_level_dto_i_read_only_list_envelope_convertToJSON(service_level_dto_i_read_only_list_envelope_t *service_level_dto_i_read_only_list_envelope);

#endif /* _service_level_dto_i_read_only_list_envelope_H_ */

