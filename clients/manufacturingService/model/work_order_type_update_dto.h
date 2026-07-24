/*
 * work_order_type_update_dto.h
 *
 * 
 */

#ifndef _work_order_type_update_dto_H_
#define _work_order_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct work_order_type_update_dto_t work_order_type_update_dto_t;




typedef struct work_order_type_update_dto_t {
    char *name; // string
    char *description; // string

} work_order_type_update_dto_t;

work_order_type_update_dto_t *work_order_type_update_dto_create(
    char *name,
    char *description
);

void work_order_type_update_dto_free(work_order_type_update_dto_t *work_order_type_update_dto);

work_order_type_update_dto_t *work_order_type_update_dto_parseFromJSON(cJSON *work_order_type_update_dtoJSON);

cJSON *work_order_type_update_dto_convertToJSON(work_order_type_update_dto_t *work_order_type_update_dto);

#endif /* _work_order_type_update_dto_H_ */

