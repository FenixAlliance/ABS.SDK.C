/*
 * trial_balance_row_dto.h
 *
 * 
 */

#ifndef _trial_balance_row_dto_H_
#define _trial_balance_row_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_balance_row_dto_t trial_balance_row_dto_t;


// Enum NORMALBALANCE for trial_balance_row_dto

typedef enum  { accountingservice_trial_balance_row_dto_NORMALBALANCE_NULL = 0, accountingservice_trial_balance_row_dto_NORMALBALANCE_Debit, accountingservice_trial_balance_row_dto_NORMALBALANCE_Credit } accountingservice_trial_balance_row_dto_NORMALBALANCE_e;

char* trial_balance_row_dto_normal_balance_ToString(accountingservice_trial_balance_row_dto_NORMALBALANCE_e normal_balance);

accountingservice_trial_balance_row_dto_NORMALBALANCE_e trial_balance_row_dto_normal_balance_FromString(char* normal_balance);



typedef struct trial_balance_row_dto_t {
    char *account_id; // string
    char *code; // string
    char *name; // string
    accountingservice_trial_balance_row_dto_NORMALBALANCE_e normal_balance; //enum
    double debit; //numeric
    double credit; //numeric

} trial_balance_row_dto_t;

trial_balance_row_dto_t *trial_balance_row_dto_create(
    char *account_id,
    char *code,
    char *name,
    accountingservice_trial_balance_row_dto_NORMALBALANCE_e normal_balance,
    double debit,
    double credit
);

void trial_balance_row_dto_free(trial_balance_row_dto_t *trial_balance_row_dto);

trial_balance_row_dto_t *trial_balance_row_dto_parseFromJSON(cJSON *trial_balance_row_dtoJSON);

cJSON *trial_balance_row_dto_convertToJSON(trial_balance_row_dto_t *trial_balance_row_dto);

#endif /* _trial_balance_row_dto_H_ */

