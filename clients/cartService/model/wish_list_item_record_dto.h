/*
 * wish_list_item_record_dto.h
 *
 * 
 */

#ifndef _wish_list_item_record_dto_H_
#define _wish_list_item_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wish_list_item_record_dto_t wish_list_item_record_dto_t;




typedef struct wish_list_item_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *wish_list_id; // string
    char *product_id; // string

} wish_list_item_record_dto_t;

wish_list_item_record_dto_t *wish_list_item_record_dto_create(
    char *id,
    char *timestamp,
    char *wish_list_id,
    char *product_id
);

void wish_list_item_record_dto_free(wish_list_item_record_dto_t *wish_list_item_record_dto);

wish_list_item_record_dto_t *wish_list_item_record_dto_parseFromJSON(cJSON *wish_list_item_record_dtoJSON);

cJSON *wish_list_item_record_dto_convertToJSON(wish_list_item_record_dto_t *wish_list_item_record_dto);

#endif /* _wish_list_item_record_dto_H_ */

