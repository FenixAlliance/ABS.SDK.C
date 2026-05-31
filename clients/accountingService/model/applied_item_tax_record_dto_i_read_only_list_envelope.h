/*
 * applied_item_tax_record_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _applied_item_tax_record_dto_i_read_only_list_envelope_H_
#define _applied_item_tax_record_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct applied_item_tax_record_dto_i_read_only_list_envelope_t applied_item_tax_record_dto_i_read_only_list_envelope_t;

#include "applied_item_tax_record_dto.h"



typedef struct applied_item_tax_record_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} applied_item_tax_record_dto_i_read_only_list_envelope_t;

applied_item_tax_record_dto_i_read_only_list_envelope_t *applied_item_tax_record_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void applied_item_tax_record_dto_i_read_only_list_envelope_free(applied_item_tax_record_dto_i_read_only_list_envelope_t *applied_item_tax_record_dto_i_read_only_list_envelope);

applied_item_tax_record_dto_i_read_only_list_envelope_t *applied_item_tax_record_dto_i_read_only_list_envelope_parseFromJSON(cJSON *applied_item_tax_record_dto_i_read_only_list_envelopeJSON);

cJSON *applied_item_tax_record_dto_i_read_only_list_envelope_convertToJSON(applied_item_tax_record_dto_i_read_only_list_envelope_t *applied_item_tax_record_dto_i_read_only_list_envelope);

#endif /* _applied_item_tax_record_dto_i_read_only_list_envelope_H_ */

