#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "application_principal_dto.h"


char* application_principal_dto_principal_kind_ToString(securityservice_application_principal_dto_PRINCIPALKIND_e principal_kind) {
    char* principal_kindArray[] =  { "NULL", "Human", "Agent", "Application", "Service", "System" };
    return principal_kindArray[principal_kind];
}

securityservice_application_principal_dto_PRINCIPALKIND_e application_principal_dto_principal_kind_FromString(char* principal_kind){
    int stringToReturn = 0;
    char *principal_kindArray[] =  { "NULL", "Human", "Agent", "Application", "Service", "System" };
    size_t sizeofArray = sizeof(principal_kindArray) / sizeof(principal_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(principal_kind, principal_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* application_principal_dto_principal_status_ToString(securityservice_application_principal_dto_PRINCIPALSTATUS_e principal_status) {
    char* principal_statusArray[] =  { "NULL", "Active", "Suspended", "Disabled" };
    return principal_statusArray[principal_status];
}

securityservice_application_principal_dto_PRINCIPALSTATUS_e application_principal_dto_principal_status_FromString(char* principal_status){
    int stringToReturn = 0;
    char *principal_statusArray[] =  { "NULL", "Active", "Suspended", "Disabled" };
    size_t sizeofArray = sizeof(principal_statusArray) / sizeof(principal_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(principal_status, principal_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

application_principal_dto_t *application_principal_dto_create(
    char *id,
    char *timestamp,
    char *display_name,
    securityservice_application_principal_dto_PRINCIPALKIND_e principal_kind,
    securityservice_application_principal_dto_PRINCIPALSTATUS_e principal_status,
    char *business_application_id,
    char *business_application_name,
    int system_locked,
    char *tenant_id,
    char *enrollment_id,
    int enrollment_disabled,
    int granted_permissions_count
    ) {
    application_principal_dto_t *application_principal_dto_local_var = malloc(sizeof(application_principal_dto_t));
    if (!application_principal_dto_local_var) {
        return NULL;
    }
    application_principal_dto_local_var->id = id;
    application_principal_dto_local_var->timestamp = timestamp;
    application_principal_dto_local_var->display_name = display_name;
    application_principal_dto_local_var->principal_kind = principal_kind;
    application_principal_dto_local_var->principal_status = principal_status;
    application_principal_dto_local_var->business_application_id = business_application_id;
    application_principal_dto_local_var->business_application_name = business_application_name;
    application_principal_dto_local_var->system_locked = system_locked;
    application_principal_dto_local_var->tenant_id = tenant_id;
    application_principal_dto_local_var->enrollment_id = enrollment_id;
    application_principal_dto_local_var->enrollment_disabled = enrollment_disabled;
    application_principal_dto_local_var->granted_permissions_count = granted_permissions_count;

    return application_principal_dto_local_var;
}


void application_principal_dto_free(application_principal_dto_t *application_principal_dto) {
    if(NULL == application_principal_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (application_principal_dto->id) {
        free(application_principal_dto->id);
        application_principal_dto->id = NULL;
    }
    if (application_principal_dto->timestamp) {
        free(application_principal_dto->timestamp);
        application_principal_dto->timestamp = NULL;
    }
    if (application_principal_dto->display_name) {
        free(application_principal_dto->display_name);
        application_principal_dto->display_name = NULL;
    }
    if (application_principal_dto->business_application_id) {
        free(application_principal_dto->business_application_id);
        application_principal_dto->business_application_id = NULL;
    }
    if (application_principal_dto->business_application_name) {
        free(application_principal_dto->business_application_name);
        application_principal_dto->business_application_name = NULL;
    }
    if (application_principal_dto->tenant_id) {
        free(application_principal_dto->tenant_id);
        application_principal_dto->tenant_id = NULL;
    }
    if (application_principal_dto->enrollment_id) {
        free(application_principal_dto->enrollment_id);
        application_principal_dto->enrollment_id = NULL;
    }
    free(application_principal_dto);
}

cJSON *application_principal_dto_convertToJSON(application_principal_dto_t *application_principal_dto) {
    cJSON *item = cJSON_CreateObject();

    // application_principal_dto->id
    if(application_principal_dto->id) {
    if(cJSON_AddStringToObject(item, "id", application_principal_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto->timestamp
    if(application_principal_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", application_principal_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // application_principal_dto->display_name
    if(application_principal_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", application_principal_dto->display_name) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto->principal_kind
    if(application_principal_dto->principal_kind != securityservice_application_principal_dto_PRINCIPALKIND_NULL) {
    if(cJSON_AddStringToObject(item, "principalKind", principal_kindapplication_principal_dto_ToString(application_principal_dto->principal_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // application_principal_dto->principal_status
    if(application_principal_dto->principal_status != securityservice_application_principal_dto_PRINCIPALSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "principalStatus", principal_statusapplication_principal_dto_ToString(application_principal_dto->principal_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // application_principal_dto->business_application_id
    if(application_principal_dto->business_application_id) {
    if(cJSON_AddStringToObject(item, "businessApplicationId", application_principal_dto->business_application_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto->business_application_name
    if(application_principal_dto->business_application_name) {
    if(cJSON_AddStringToObject(item, "businessApplicationName", application_principal_dto->business_application_name) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto->system_locked
    if(application_principal_dto->system_locked) {
    if(cJSON_AddBoolToObject(item, "systemLocked", application_principal_dto->system_locked) == NULL) {
    goto fail; //Bool
    }
    }


    // application_principal_dto->tenant_id
    if(application_principal_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", application_principal_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto->enrollment_id
    if(application_principal_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", application_principal_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_dto->enrollment_disabled
    if(application_principal_dto->enrollment_disabled) {
    if(cJSON_AddBoolToObject(item, "enrollmentDisabled", application_principal_dto->enrollment_disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // application_principal_dto->granted_permissions_count
    if(application_principal_dto->granted_permissions_count) {
    if(cJSON_AddNumberToObject(item, "grantedPermissionsCount", application_principal_dto->granted_permissions_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

application_principal_dto_t *application_principal_dto_parseFromJSON(cJSON *application_principal_dtoJSON){

    application_principal_dto_t *application_principal_dto_local_var = NULL;

    // application_principal_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // application_principal_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // application_principal_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // application_principal_dto->principal_kind
    cJSON *principal_kind = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "principalKind");
    securityservice_application_principal_dto_PRINCIPALKIND_e principal_kindVariable;
    if (principal_kind) { 
    if(!cJSON_IsString(principal_kind))
    {
    goto end; //Enum
    }
    principal_kindVariable = application_principal_dto_principal_kind_FromString(principal_kind->valuestring);
    }

    // application_principal_dto->principal_status
    cJSON *principal_status = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "principalStatus");
    securityservice_application_principal_dto_PRINCIPALSTATUS_e principal_statusVariable;
    if (principal_status) { 
    if(!cJSON_IsString(principal_status))
    {
    goto end; //Enum
    }
    principal_statusVariable = application_principal_dto_principal_status_FromString(principal_status->valuestring);
    }

    // application_principal_dto->business_application_id
    cJSON *business_application_id = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "businessApplicationId");
    if (business_application_id) { 
    if(!cJSON_IsString(business_application_id) && !cJSON_IsNull(business_application_id))
    {
    goto end; //String
    }
    }

    // application_principal_dto->business_application_name
    cJSON *business_application_name = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "businessApplicationName");
    if (business_application_name) { 
    if(!cJSON_IsString(business_application_name) && !cJSON_IsNull(business_application_name))
    {
    goto end; //String
    }
    }

    // application_principal_dto->system_locked
    cJSON *system_locked = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "systemLocked");
    if (system_locked) { 
    if(!cJSON_IsBool(system_locked))
    {
    goto end; //Bool
    }
    }

    // application_principal_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // application_principal_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // application_principal_dto->enrollment_disabled
    cJSON *enrollment_disabled = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "enrollmentDisabled");
    if (enrollment_disabled) { 
    if(!cJSON_IsBool(enrollment_disabled))
    {
    goto end; //Bool
    }
    }

    // application_principal_dto->granted_permissions_count
    cJSON *granted_permissions_count = cJSON_GetObjectItemCaseSensitive(application_principal_dtoJSON, "grantedPermissionsCount");
    if (granted_permissions_count) { 
    if(!cJSON_IsNumber(granted_permissions_count))
    {
    goto end; //Numeric
    }
    }


    application_principal_dto_local_var = application_principal_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL,
        principal_kind ? principal_kindVariable : securityservice_application_principal_dto_PRINCIPALKIND_NULL,
        principal_status ? principal_statusVariable : securityservice_application_principal_dto_PRINCIPALSTATUS_NULL,
        business_application_id && !cJSON_IsNull(business_application_id) ? strdup(business_application_id->valuestring) : NULL,
        business_application_name && !cJSON_IsNull(business_application_name) ? strdup(business_application_name->valuestring) : NULL,
        system_locked ? system_locked->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        enrollment_disabled ? enrollment_disabled->valueint : 0,
        granted_permissions_count ? granted_permissions_count->valuedouble : 0
        );

    return application_principal_dto_local_var;
end:
    return NULL;

}
