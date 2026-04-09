/*
 * bank_dto.h
 *
 * 
 */

#ifndef _bank_dto_H_
#define _bank_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_dto_t bank_dto_t;




typedef struct bank_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *image; // string
    char *country_id; // string

} bank_dto_t;

bank_dto_t *bank_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image,
    char *country_id
);

void bank_dto_free(bank_dto_t *bank_dto);

bank_dto_t *bank_dto_parseFromJSON(cJSON *bank_dtoJSON);

cJSON *bank_dto_convertToJSON(bank_dto_t *bank_dto);

#endif /* _bank_dto_H_ */

