/*
 * journal_type_dto.h
 *
 * 
 */

#ifndef _journal_type_dto_H_
#define _journal_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_type_dto_t journal_type_dto_t;




typedef struct journal_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} journal_type_dto_t;

journal_type_dto_t *journal_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id
);

void journal_type_dto_free(journal_type_dto_t *journal_type_dto);

journal_type_dto_t *journal_type_dto_parseFromJSON(cJSON *journal_type_dtoJSON);

cJSON *journal_type_dto_convertToJSON(journal_type_dto_t *journal_type_dto);

#endif /* _journal_type_dto_H_ */

