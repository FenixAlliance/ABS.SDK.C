/*
 * service_case_type_update_dto.h
 *
 * 
 */

#ifndef _service_case_type_update_dto_H_
#define _service_case_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_case_type_update_dto_t service_case_type_update_dto_t;




typedef struct service_case_type_update_dto_t {
    char *title; // string
    char *description; // string

} service_case_type_update_dto_t;

service_case_type_update_dto_t *service_case_type_update_dto_create(
    char *title,
    char *description
);

void service_case_type_update_dto_free(service_case_type_update_dto_t *service_case_type_update_dto);

service_case_type_update_dto_t *service_case_type_update_dto_parseFromJSON(cJSON *service_case_type_update_dtoJSON);

cJSON *service_case_type_update_dto_convertToJSON(service_case_type_update_dto_t *service_case_type_update_dto);

#endif /* _service_case_type_update_dto_H_ */

