/*
 * shipping_class_update_dto.h
 *
 * 
 */

#ifndef _shipping_class_update_dto_H_
#define _shipping_class_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_class_update_dto_t shipping_class_update_dto_t;




typedef struct shipping_class_update_dto_t {
    char *name; // string
    char *slug; // string

} shipping_class_update_dto_t;

shipping_class_update_dto_t *shipping_class_update_dto_create(
    char *name,
    char *slug
);

void shipping_class_update_dto_free(shipping_class_update_dto_t *shipping_class_update_dto);

shipping_class_update_dto_t *shipping_class_update_dto_parseFromJSON(cJSON *shipping_class_update_dtoJSON);

cJSON *shipping_class_update_dto_convertToJSON(shipping_class_update_dto_t *shipping_class_update_dto);

#endif /* _shipping_class_update_dto_H_ */

