/*
 * option_update_dto.h
 *
 * 
 */

#ifndef _option_update_dto_H_
#define _option_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct option_update_dto_t option_update_dto_t;




typedef struct option_update_dto_t {
    char *key; // string
    char *value; // string
    char *portal_id; // string
    int frozen; //boolean
    int autoload; //boolean
    int transient; //boolean
    int expiration; //numeric

} option_update_dto_t;

option_update_dto_t *option_update_dto_create(
    char *key,
    char *value,
    char *portal_id,
    int frozen,
    int autoload,
    int transient,
    int expiration
);

void option_update_dto_free(option_update_dto_t *option_update_dto);

option_update_dto_t *option_update_dto_parseFromJSON(cJSON *option_update_dtoJSON);

cJSON *option_update_dto_convertToJSON(option_update_dto_t *option_update_dto);

#endif /* _option_update_dto_H_ */

