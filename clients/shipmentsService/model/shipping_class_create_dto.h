/*
 * shipping_class_create_dto.h
 *
 * 
 */

#ifndef _shipping_class_create_dto_H_
#define _shipping_class_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_class_create_dto_t shipping_class_create_dto_t;




typedef struct shipping_class_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *slug; // string

} shipping_class_create_dto_t;

shipping_class_create_dto_t *shipping_class_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *slug
);

void shipping_class_create_dto_free(shipping_class_create_dto_t *shipping_class_create_dto);

shipping_class_create_dto_t *shipping_class_create_dto_parseFromJSON(cJSON *shipping_class_create_dtoJSON);

cJSON *shipping_class_create_dto_convertToJSON(shipping_class_create_dto_t *shipping_class_create_dto);

#endif /* _shipping_class_create_dto_H_ */

