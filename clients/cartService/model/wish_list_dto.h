/*
 * wish_list_dto.h
 *
 * 
 */

#ifndef _wish_list_dto_H_
#define _wish_list_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wish_list_dto_t wish_list_dto_t;




typedef struct wish_list_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *cart_id; // string
    int _public; //boolean

} wish_list_dto_t;

wish_list_dto_t *wish_list_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *cart_id,
    int _public
);

void wish_list_dto_free(wish_list_dto_t *wish_list_dto);

wish_list_dto_t *wish_list_dto_parseFromJSON(cJSON *wish_list_dtoJSON);

cJSON *wish_list_dto_convertToJSON(wish_list_dto_t *wish_list_dto);

#endif /* _wish_list_dto_H_ */

