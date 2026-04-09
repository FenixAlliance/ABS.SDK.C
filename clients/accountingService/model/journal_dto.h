/*
 * journal_dto.h
 *
 * 
 */

#ifndef _journal_dto_H_
#define _journal_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_dto_t journal_dto_t;




typedef struct journal_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *ledger_id; // string
    char *enrollment_id; // string
    char *fiscal_year_id; // string
    char *journal_type_id; // string
    char *parent_journal_id; // string

} journal_dto_t;

journal_dto_t *journal_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *ledger_id,
    char *enrollment_id,
    char *fiscal_year_id,
    char *journal_type_id,
    char *parent_journal_id
);

void journal_dto_free(journal_dto_t *journal_dto);

journal_dto_t *journal_dto_parseFromJSON(cJSON *journal_dtoJSON);

cJSON *journal_dto_convertToJSON(journal_dto_t *journal_dto);

#endif /* _journal_dto_H_ */

