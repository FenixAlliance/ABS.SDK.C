/*
 * ledger_dto.h
 *
 * 
 */

#ifndef _ledger_dto_H_
#define _ledger_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ledger_dto_t ledger_dto_t;




typedef struct ledger_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *date_time; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *ledger_type_id; // string

} ledger_dto_t;

ledger_dto_t *ledger_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *date_time,
    char *tenant_id,
    char *enrollment_id,
    char *ledger_type_id
);

void ledger_dto_free(ledger_dto_t *ledger_dto);

ledger_dto_t *ledger_dto_parseFromJSON(cJSON *ledger_dtoJSON);

cJSON *ledger_dto_convertToJSON(ledger_dto_t *ledger_dto);

#endif /* _ledger_dto_H_ */

