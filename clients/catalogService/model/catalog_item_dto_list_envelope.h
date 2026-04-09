/*
 * catalog_item_dto_list_envelope.h
 *
 * 
 */

#ifndef _catalog_item_dto_list_envelope_H_
#define _catalog_item_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct catalog_item_dto_list_envelope_t catalog_item_dto_list_envelope_t;

#include "catalog_item_dto.h"



typedef struct catalog_item_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} catalog_item_dto_list_envelope_t;

catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void catalog_item_dto_list_envelope_free(catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope);

catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope_parseFromJSON(cJSON *catalog_item_dto_list_envelopeJSON);

cJSON *catalog_item_dto_list_envelope_convertToJSON(catalog_item_dto_list_envelope_t *catalog_item_dto_list_envelope);

#endif /* _catalog_item_dto_list_envelope_H_ */

