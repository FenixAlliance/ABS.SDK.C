/*
 * ledger_type_create_dto.h
 *
 * 
 */

#ifndef _ledger_type_create_dto_H_
#define _ledger_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ledger_type_create_dto_t ledger_type_create_dto_t;


// Enum LEDGERCLASS for ledger_type_create_dto

typedef enum  { accountingservice_ledger_type_create_dto_LEDGERCLASS_NULL = 0, accountingservice_ledger_type_create_dto_LEDGERCLASS_Assets, accountingservice_ledger_type_create_dto_LEDGERCLASS_Equity, accountingservice_ledger_type_create_dto_LEDGERCLASS_Gains, accountingservice_ledger_type_create_dto_LEDGERCLASS_Losses, accountingservice_ledger_type_create_dto_LEDGERCLASS_Revenue, accountingservice_ledger_type_create_dto_LEDGERCLASS_Expenses, accountingservice_ledger_type_create_dto_LEDGERCLASS_Liabilities } accountingservice_ledger_type_create_dto_LEDGERCLASS_e;

char* ledger_type_create_dto_ledger_class_ToString(accountingservice_ledger_type_create_dto_LEDGERCLASS_e ledger_class);

accountingservice_ledger_type_create_dto_LEDGERCLASS_e ledger_type_create_dto_ledger_class_FromString(char* ledger_class);



typedef struct ledger_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    accountingservice_ledger_type_create_dto_LEDGERCLASS_e ledger_class; //enum

} ledger_type_create_dto_t;

ledger_type_create_dto_t *ledger_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    accountingservice_ledger_type_create_dto_LEDGERCLASS_e ledger_class
);

void ledger_type_create_dto_free(ledger_type_create_dto_t *ledger_type_create_dto);

ledger_type_create_dto_t *ledger_type_create_dto_parseFromJSON(cJSON *ledger_type_create_dtoJSON);

cJSON *ledger_type_create_dto_convertToJSON(ledger_type_create_dto_t *ledger_type_create_dto);

#endif /* _ledger_type_create_dto_H_ */

