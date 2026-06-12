/*
 * shipping_class_dto.h
 *
 * 
 */

#ifndef _shipping_class_dto_H_
#define _shipping_class_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_class_dto_t shipping_class_dto_t;




typedef struct shipping_class_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *slug; // string
    char *tenant_id; // string

} shipping_class_dto_t;

shipping_class_dto_t *shipping_class_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *slug,
    char *tenant_id
);

void shipping_class_dto_free(shipping_class_dto_t *shipping_class_dto);

shipping_class_dto_t *shipping_class_dto_parseFromJSON(cJSON *shipping_class_dtoJSON);

cJSON *shipping_class_dto_convertToJSON(shipping_class_dto_t *shipping_class_dto);

#endif /* _shipping_class_dto_H_ */

