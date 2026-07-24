/*
 * trial_balance_dto.h
 *
 * 
 */

#ifndef _trial_balance_dto_H_
#define _trial_balance_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_balance_dto_t trial_balance_dto_t;

#include "trial_balance_row_dto.h"



typedef struct trial_balance_dto_t {
    char *fiscal_period_id; // string
    char *financial_book_id; // string
    char *currency_id; // string
    list_t *rows; //nonprimitive container
    double total_debit; //numeric
    double total_credit; //numeric
    int is_balanced; //boolean

} trial_balance_dto_t;

trial_balance_dto_t *trial_balance_dto_create(
    char *fiscal_period_id,
    char *financial_book_id,
    char *currency_id,
    list_t *rows,
    double total_debit,
    double total_credit,
    int is_balanced
);

void trial_balance_dto_free(trial_balance_dto_t *trial_balance_dto);

trial_balance_dto_t *trial_balance_dto_parseFromJSON(cJSON *trial_balance_dtoJSON);

cJSON *trial_balance_dto_convertToJSON(trial_balance_dto_t *trial_balance_dto);

#endif /* _trial_balance_dto_H_ */

