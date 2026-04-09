/*
 * wish_list_update_dto.h
 *
 * 
 */

#ifndef _wish_list_update_dto_H_
#define _wish_list_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wish_list_update_dto_t wish_list_update_dto_t;




typedef struct wish_list_update_dto_t {
    char *title; // string
    char *description; // string
    int _public; //boolean

} wish_list_update_dto_t;

wish_list_update_dto_t *wish_list_update_dto_create(
    char *title,
    char *description,
    int _public
);

void wish_list_update_dto_free(wish_list_update_dto_t *wish_list_update_dto);

wish_list_update_dto_t *wish_list_update_dto_parseFromJSON(cJSON *wish_list_update_dtoJSON);

cJSON *wish_list_update_dto_convertToJSON(wish_list_update_dto_t *wish_list_update_dto);

#endif /* _wish_list_update_dto_H_ */

