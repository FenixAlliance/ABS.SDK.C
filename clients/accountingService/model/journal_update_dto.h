/*
 * journal_update_dto.h
 *
 * 
 */

#ifndef _journal_update_dto_H_
#define _journal_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_update_dto_t journal_update_dto_t;




typedef struct journal_update_dto_t {
    char *name; // string
    char *description; // string
    char *date_time; //date time
    char *parent_journal_id; // string
    char *journal_type_id; // string
    char *ledger_id; // string

} journal_update_dto_t;

journal_update_dto_t *journal_update_dto_create(
    char *name,
    char *description,
    char *date_time,
    char *parent_journal_id,
    char *journal_type_id,
    char *ledger_id
);

void journal_update_dto_free(journal_update_dto_t *journal_update_dto);

journal_update_dto_t *journal_update_dto_parseFromJSON(cJSON *journal_update_dtoJSON);

cJSON *journal_update_dto_convertToJSON(journal_update_dto_t *journal_update_dto);

#endif /* _journal_update_dto_H_ */

