/*
 * application_principal_detail_dto.h
 *
 * 
 */

#ifndef _application_principal_detail_dto_H_
#define _application_principal_detail_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct application_principal_detail_dto_t application_principal_detail_dto_t;


// Enum PRINCIPALKIND for application_principal_detail_dto

typedef enum  { systemservice_application_principal_detail_dto_PRINCIPALKIND_NULL = 0, systemservice_application_principal_detail_dto_PRINCIPALKIND_Human, systemservice_application_principal_detail_dto_PRINCIPALKIND_Agent, systemservice_application_principal_detail_dto_PRINCIPALKIND_Application, systemservice_application_principal_detail_dto_PRINCIPALKIND_Service, systemservice_application_principal_detail_dto_PRINCIPALKIND_System } systemservice_application_principal_detail_dto_PRINCIPALKIND_e;

char* application_principal_detail_dto_principal_kind_ToString(systemservice_application_principal_detail_dto_PRINCIPALKIND_e principal_kind);

systemservice_application_principal_detail_dto_PRINCIPALKIND_e application_principal_detail_dto_principal_kind_FromString(char* principal_kind);

// Enum PRINCIPALSTATUS for application_principal_detail_dto

typedef enum  { systemservice_application_principal_detail_dto_PRINCIPALSTATUS_NULL = 0, systemservice_application_principal_detail_dto_PRINCIPALSTATUS_Active, systemservice_application_principal_detail_dto_PRINCIPALSTATUS_Suspended, systemservice_application_principal_detail_dto_PRINCIPALSTATUS_Disabled } systemservice_application_principal_detail_dto_PRINCIPALSTATUS_e;

char* application_principal_detail_dto_principal_status_ToString(systemservice_application_principal_detail_dto_PRINCIPALSTATUS_e principal_status);

systemservice_application_principal_detail_dto_PRINCIPALSTATUS_e application_principal_detail_dto_principal_status_FromString(char* principal_status);



typedef struct application_principal_detail_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *display_name; // string
    systemservice_application_principal_detail_dto_PRINCIPALKIND_e principal_kind; //enum
    systemservice_application_principal_detail_dto_PRINCIPALSTATUS_e principal_status; //enum
    char *business_application_id; // string
    char *business_application_name; // string
    char *business_application_namespace; // string
    int business_application_disabled; //boolean
    int system_locked; //boolean
    char *tenant_id; // string
    char *enrollment_id; // string
    int enrollment_disabled; //boolean
    list_t *granted_permissions; //primitive container

} application_principal_detail_dto_t;

application_principal_detail_dto_t *application_principal_detail_dto_create(
    char *id,
    char *timestamp,
    char *display_name,
    systemservice_application_principal_detail_dto_PRINCIPALKIND_e principal_kind,
    systemservice_application_principal_detail_dto_PRINCIPALSTATUS_e principal_status,
    char *business_application_id,
    char *business_application_name,
    char *business_application_namespace,
    int business_application_disabled,
    int system_locked,
    char *tenant_id,
    char *enrollment_id,
    int enrollment_disabled,
    list_t *granted_permissions
);

void application_principal_detail_dto_free(application_principal_detail_dto_t *application_principal_detail_dto);

application_principal_detail_dto_t *application_principal_detail_dto_parseFromJSON(cJSON *application_principal_detail_dtoJSON);

cJSON *application_principal_detail_dto_convertToJSON(application_principal_detail_dto_t *application_principal_detail_dto);

#endif /* _application_principal_detail_dto_H_ */

