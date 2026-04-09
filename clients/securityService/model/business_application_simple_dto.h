/*
 * business_application_simple_dto.h
 *
 * 
 */

#ifndef _business_application_simple_dto_H_
#define _business_application_simple_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_application_simple_dto_t business_application_simple_dto_t;




typedef struct business_application_simple_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string

} business_application_simple_dto_t;

business_application_simple_dto_t *business_application_simple_dto_create(
    char *id,
    char *timestamp,
    char *name
);

void business_application_simple_dto_free(business_application_simple_dto_t *business_application_simple_dto);

business_application_simple_dto_t *business_application_simple_dto_parseFromJSON(cJSON *business_application_simple_dtoJSON);

cJSON *business_application_simple_dto_convertToJSON(business_application_simple_dto_t *business_application_simple_dto);

#endif /* _business_application_simple_dto_H_ */

