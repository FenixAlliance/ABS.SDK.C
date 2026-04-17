/*
 * journal_create_dto.h
 *
 * 
 */

#ifndef _journal_create_dto_H_
#define _journal_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_create_dto_t journal_create_dto_t;




typedef struct journal_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *date_time; //date time
    char *parent_journal_id; // string
    char *journal_type_id; // string
    char *ledger_id; // string

} journal_create_dto_t;

journal_create_dto_t *journal_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *date_time,
    char *parent_journal_id,
    char *journal_type_id,
    char *ledger_id
);

void journal_create_dto_free(journal_create_dto_t *journal_create_dto);

journal_create_dto_t *journal_create_dto_parseFromJSON(cJSON *journal_create_dtoJSON);

cJSON *journal_create_dto_convertToJSON(journal_create_dto_t *journal_create_dto);

#endif /* _journal_create_dto_H_ */

