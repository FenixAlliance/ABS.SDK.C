/*
 * expense_claim_dto.h
 *
 * 
 */

#ifndef _expense_claim_dto_H_
#define _expense_claim_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct expense_claim_dto_t expense_claim_dto_t;




typedef struct expense_claim_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *expense_type_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} expense_claim_dto_t;

expense_claim_dto_t *expense_claim_dto_create(
    char *id,
    char *timestamp,
    char *expense_type_id,
    char *tenant_id,
    char *enrollment_id
);

void expense_claim_dto_free(expense_claim_dto_t *expense_claim_dto);

expense_claim_dto_t *expense_claim_dto_parseFromJSON(cJSON *expense_claim_dtoJSON);

cJSON *expense_claim_dto_convertToJSON(expense_claim_dto_t *expense_claim_dto);

#endif /* _expense_claim_dto_H_ */

