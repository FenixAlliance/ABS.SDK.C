/*
 * application_principal_provisioning_result_dto.h
 *
 * 
 */

#ifndef _application_principal_provisioning_result_dto_H_
#define _application_principal_provisioning_result_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct application_principal_provisioning_result_dto_t application_principal_provisioning_result_dto_t;




typedef struct application_principal_provisioning_result_dto_t {
    char *principal_id; // string
    char *enrollment_id; // string
    char *tenant_id; // string
    int principal_created; //boolean
    int enrollment_created; //boolean

} application_principal_provisioning_result_dto_t;

application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto_create(
    char *principal_id,
    char *enrollment_id,
    char *tenant_id,
    int principal_created,
    int enrollment_created
);

void application_principal_provisioning_result_dto_free(application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto);

application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto_parseFromJSON(cJSON *application_principal_provisioning_result_dtoJSON);

cJSON *application_principal_provisioning_result_dto_convertToJSON(application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto);

#endif /* _application_principal_provisioning_result_dto_H_ */

