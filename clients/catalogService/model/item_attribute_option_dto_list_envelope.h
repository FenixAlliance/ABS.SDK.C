/*
 * item_attribute_option_dto_list_envelope.h
 *
 * 
 */

#ifndef _item_attribute_option_dto_list_envelope_H_
#define _item_attribute_option_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attribute_option_dto_list_envelope_t item_attribute_option_dto_list_envelope_t;

#include "item_attribute_option_dto.h"



typedef struct item_attribute_option_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} item_attribute_option_dto_list_envelope_t;

item_attribute_option_dto_list_envelope_t *item_attribute_option_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void item_attribute_option_dto_list_envelope_free(item_attribute_option_dto_list_envelope_t *item_attribute_option_dto_list_envelope);

item_attribute_option_dto_list_envelope_t *item_attribute_option_dto_list_envelope_parseFromJSON(cJSON *item_attribute_option_dto_list_envelopeJSON);

cJSON *item_attribute_option_dto_list_envelope_convertToJSON(item_attribute_option_dto_list_envelope_t *item_attribute_option_dto_list_envelope);

#endif /* _item_attribute_option_dto_list_envelope_H_ */

