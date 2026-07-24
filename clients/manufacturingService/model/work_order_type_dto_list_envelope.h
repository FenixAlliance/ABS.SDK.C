/*
 * work_order_type_dto_list_envelope.h
 *
 * 
 */

#ifndef _work_order_type_dto_list_envelope_H_
#define _work_order_type_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct work_order_type_dto_list_envelope_t work_order_type_dto_list_envelope_t;

#include "work_order_type_dto.h"



typedef struct work_order_type_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} work_order_type_dto_list_envelope_t;

work_order_type_dto_list_envelope_t *work_order_type_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void work_order_type_dto_list_envelope_free(work_order_type_dto_list_envelope_t *work_order_type_dto_list_envelope);

work_order_type_dto_list_envelope_t *work_order_type_dto_list_envelope_parseFromJSON(cJSON *work_order_type_dto_list_envelopeJSON);

cJSON *work_order_type_dto_list_envelope_convertToJSON(work_order_type_dto_list_envelope_t *work_order_type_dto_list_envelope);

#endif /* _work_order_type_dto_list_envelope_H_ */

