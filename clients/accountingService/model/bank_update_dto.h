/*
 * bank_update_dto.h
 *
 * 
 */

#ifndef _bank_update_dto_H_
#define _bank_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_update_dto_t bank_update_dto_t;




typedef struct bank_update_dto_t {
    char *name; // string
    char *image; // string
    char *country_id; // string

} bank_update_dto_t;

bank_update_dto_t *bank_update_dto_create(
    char *name,
    char *image,
    char *country_id
);

void bank_update_dto_free(bank_update_dto_t *bank_update_dto);

bank_update_dto_t *bank_update_dto_parseFromJSON(cJSON *bank_update_dtoJSON);

cJSON *bank_update_dto_convertToJSON(bank_update_dto_t *bank_update_dto);

#endif /* _bank_update_dto_H_ */

