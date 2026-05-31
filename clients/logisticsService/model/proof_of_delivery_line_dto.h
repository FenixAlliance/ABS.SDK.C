/*
 * proof_of_delivery_line_dto.h
 *
 * 
 */

#ifndef _proof_of_delivery_line_dto_H_
#define _proof_of_delivery_line_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct proof_of_delivery_line_dto_t proof_of_delivery_line_dto_t;




typedef struct proof_of_delivery_line_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *proof_of_delivery_id; // string
    int line_number; //numeric
    char *description; // string
    int quantity_expected; //numeric
    int quantity_received; //numeric
    int quantity_rejected; //numeric
    char *condition; // string
    char *remarks; // string
    char *hs_code; // string
    char *tenant_id; // string

} proof_of_delivery_line_dto_t;

proof_of_delivery_line_dto_t *proof_of_delivery_line_dto_create(
    char *id,
    char *timestamp,
    char *proof_of_delivery_id,
    int line_number,
    char *description,
    int quantity_expected,
    int quantity_received,
    int quantity_rejected,
    char *condition,
    char *remarks,
    char *hs_code,
    char *tenant_id
);

void proof_of_delivery_line_dto_free(proof_of_delivery_line_dto_t *proof_of_delivery_line_dto);

proof_of_delivery_line_dto_t *proof_of_delivery_line_dto_parseFromJSON(cJSON *proof_of_delivery_line_dtoJSON);

cJSON *proof_of_delivery_line_dto_convertToJSON(proof_of_delivery_line_dto_t *proof_of_delivery_line_dto);

#endif /* _proof_of_delivery_line_dto_H_ */

