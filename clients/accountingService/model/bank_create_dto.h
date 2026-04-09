/*
 * bank_create_dto.h
 *
 * 
 */

#ifndef _bank_create_dto_H_
#define _bank_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_create_dto_t bank_create_dto_t;




typedef struct bank_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *image; // string
    char *country_id; // string

} bank_create_dto_t;

bank_create_dto_t *bank_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image,
    char *country_id
);

void bank_create_dto_free(bank_create_dto_t *bank_create_dto);

bank_create_dto_t *bank_create_dto_parseFromJSON(cJSON *bank_create_dtoJSON);

cJSON *bank_create_dto_convertToJSON(bank_create_dto_t *bank_create_dto);

#endif /* _bank_create_dto_H_ */

