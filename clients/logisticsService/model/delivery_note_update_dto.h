/*
 * delivery_note_update_dto.h
 *
 * 
 */

#ifndef _delivery_note_update_dto_H_
#define _delivery_note_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct delivery_note_update_dto_t delivery_note_update_dto_t;




typedef struct delivery_note_update_dto_t {
    char *title; // string
    char *description; // string
    char *shipment_id; // string
    char *proof_of_delivery_id; // string

} delivery_note_update_dto_t;

delivery_note_update_dto_t *delivery_note_update_dto_create(
    char *title,
    char *description,
    char *shipment_id,
    char *proof_of_delivery_id
);

void delivery_note_update_dto_free(delivery_note_update_dto_t *delivery_note_update_dto);

delivery_note_update_dto_t *delivery_note_update_dto_parseFromJSON(cJSON *delivery_note_update_dtoJSON);

cJSON *delivery_note_update_dto_convertToJSON(delivery_note_update_dto_t *delivery_note_update_dto);

#endif /* _delivery_note_update_dto_H_ */

