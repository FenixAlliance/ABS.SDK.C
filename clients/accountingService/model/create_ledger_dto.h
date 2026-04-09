/*
 * create_ledger_dto.h
 *
 * 
 */

#ifndef _create_ledger_dto_H_
#define _create_ledger_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_ledger_dto_t create_ledger_dto_t;




typedef struct create_ledger_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *date_time; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *ledger_type_id; // string

} create_ledger_dto_t;

create_ledger_dto_t *create_ledger_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *date_time,
    char *tenant_id,
    char *enrollment_id,
    char *ledger_type_id
);

void create_ledger_dto_free(create_ledger_dto_t *create_ledger_dto);

create_ledger_dto_t *create_ledger_dto_parseFromJSON(cJSON *create_ledger_dtoJSON);

cJSON *create_ledger_dto_convertToJSON(create_ledger_dto_t *create_ledger_dto);

#endif /* _create_ledger_dto_H_ */

