/*
 * expense_claim_update_dto.h
 *
 * 
 */

#ifndef _expense_claim_update_dto_H_
#define _expense_claim_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct expense_claim_update_dto_t expense_claim_update_dto_t;




typedef struct expense_claim_update_dto_t {
    char *expense_type_id; // string

} expense_claim_update_dto_t;

expense_claim_update_dto_t *expense_claim_update_dto_create(
    char *expense_type_id
);

void expense_claim_update_dto_free(expense_claim_update_dto_t *expense_claim_update_dto);

expense_claim_update_dto_t *expense_claim_update_dto_parseFromJSON(cJSON *expense_claim_update_dtoJSON);

cJSON *expense_claim_update_dto_convertToJSON(expense_claim_update_dto_t *expense_claim_update_dto);

#endif /* _expense_claim_update_dto_H_ */

