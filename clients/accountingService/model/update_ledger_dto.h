/*
 * update_ledger_dto.h
 *
 * 
 */

#ifndef _update_ledger_dto_H_
#define _update_ledger_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_ledger_dto_t update_ledger_dto_t;




typedef struct update_ledger_dto_t {
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *ledger_type_id; // string

} update_ledger_dto_t;

update_ledger_dto_t *update_ledger_dto_create(
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id,
    char *ledger_type_id
);

void update_ledger_dto_free(update_ledger_dto_t *update_ledger_dto);

update_ledger_dto_t *update_ledger_dto_parseFromJSON(cJSON *update_ledger_dtoJSON);

cJSON *update_ledger_dto_convertToJSON(update_ledger_dto_t *update_ledger_dto);

#endif /* _update_ledger_dto_H_ */

