/*
 * application_principal_permission_request_dto.h
 *
 * 
 */

#ifndef _application_principal_permission_request_dto_H_
#define _application_principal_permission_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct application_principal_permission_request_dto_t application_principal_permission_request_dto_t;




typedef struct application_principal_permission_request_dto_t {
    char *permission; // string

} application_principal_permission_request_dto_t;

application_principal_permission_request_dto_t *application_principal_permission_request_dto_create(
    char *permission
);

void application_principal_permission_request_dto_free(application_principal_permission_request_dto_t *application_principal_permission_request_dto);

application_principal_permission_request_dto_t *application_principal_permission_request_dto_parseFromJSON(cJSON *application_principal_permission_request_dtoJSON);

cJSON *application_principal_permission_request_dto_convertToJSON(application_principal_permission_request_dto_t *application_principal_permission_request_dto);

#endif /* _application_principal_permission_request_dto_H_ */

