/*
 * proof_of_delivery_line_update_dto.h
 *
 * 
 */

#ifndef _proof_of_delivery_line_update_dto_H_
#define _proof_of_delivery_line_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct proof_of_delivery_line_update_dto_t proof_of_delivery_line_update_dto_t;




typedef struct proof_of_delivery_line_update_dto_t {
    char *description; // string
    int quantity_expected; //numeric
    int quantity_received; //numeric
    int quantity_rejected; //numeric
    char *condition; // string
    char *remarks; // string
    char *hs_code; // string

} proof_of_delivery_line_update_dto_t;

proof_of_delivery_line_update_dto_t *proof_of_delivery_line_update_dto_create(
    char *description,
    int quantity_expected,
    int quantity_received,
    int quantity_rejected,
    char *condition,
    char *remarks,
    char *hs_code
);

void proof_of_delivery_line_update_dto_free(proof_of_delivery_line_update_dto_t *proof_of_delivery_line_update_dto);

proof_of_delivery_line_update_dto_t *proof_of_delivery_line_update_dto_parseFromJSON(cJSON *proof_of_delivery_line_update_dtoJSON);

cJSON *proof_of_delivery_line_update_dto_convertToJSON(proof_of_delivery_line_update_dto_t *proof_of_delivery_line_update_dto);

#endif /* _proof_of_delivery_line_update_dto_H_ */

