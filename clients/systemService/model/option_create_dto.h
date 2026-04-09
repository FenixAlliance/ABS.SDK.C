/*
 * option_create_dto.h
 *
 * 
 */

#ifndef _option_create_dto_H_
#define _option_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct option_create_dto_t option_create_dto_t;




typedef struct option_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *key; // string
    char *value; // string
    char *portal_id; // string
    int frozen; //boolean
    int autoload; //boolean
    int transient; //boolean
    int expiration; //numeric

} option_create_dto_t;

option_create_dto_t *option_create_dto_create(
    char *id,
    char *timestamp,
    char *key,
    char *value,
    char *portal_id,
    int frozen,
    int autoload,
    int transient,
    int expiration
);

void option_create_dto_free(option_create_dto_t *option_create_dto);

option_create_dto_t *option_create_dto_parseFromJSON(cJSON *option_create_dtoJSON);

cJSON *option_create_dto_convertToJSON(option_create_dto_t *option_create_dto);

#endif /* _option_create_dto_H_ */

