#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "auth_result.h"


char* auth_result_run_as_ToString(identityservice_auth_result_RUNAS_e run_as) {
    char* run_asArray[] =  { "NULL", "Invoker", "Application", "System", "Service" };
    return run_asArray[run_as];
}

identityservice_auth_result_RUNAS_e auth_result_run_as_FromString(char* run_as){
    int stringToReturn = 0;
    char *run_asArray[] =  { "NULL", "Invoker", "Application", "System", "Service" };
    size_t sizeofArray = sizeof(run_asArray) / sizeof(run_asArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(run_as, run_asArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* auth_result_principal_kind_ToString(identityservice_auth_result_PRINCIPALKIND_e principal_kind) {
    char* principal_kindArray[] =  { "NULL", "Human", "Agent", "Application", "Service", "System" };
    return principal_kindArray[principal_kind];
}

identityservice_auth_result_PRINCIPALKIND_e auth_result_principal_kind_FromString(char* principal_kind){
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

auth_result_t *auth_result_create(
    object_t *user_id,
    object_t *tenant_id,
    object_t *portal_id,
    object_t *application_id,
    object_t *enrollment_id,
    char *correlation_id,
    list_t *scopes,
    char *error,
    identityservice_auth_result_RUNAS_e run_as,
    identityservice_auth_result_PRINCIPALKIND_e principal_kind,
    execution_provenance_t *provenance
    ) {
    auth_result_t *auth_result_local_var = malloc(sizeof(auth_result_t));
    if (!auth_result_local_var) {
        return NULL;
    }
    auth_result_local_var->user_id = user_id;
    auth_result_local_var->tenant_id = tenant_id;
    auth_result_local_var->portal_id = portal_id;
    auth_result_local_var->application_id = application_id;
    auth_result_local_var->enrollment_id = enrollment_id;
    auth_result_local_var->correlation_id = correlation_id;
    auth_result_local_var->scopes = scopes;
    auth_result_local_var->error = error;
    auth_result_local_var->run_as = run_as;
    auth_result_local_var->principal_kind = principal_kind;
    auth_result_local_var->provenance = provenance;

    return auth_result_local_var;
}


void auth_result_free(auth_result_t *auth_result) {
    if(NULL == auth_result){
        return ;
    }
    listEntry_t *listEntry;
    if (auth_result->user_id) {
        object_free(auth_result->user_id);
        auth_result->user_id = NULL;
    }
    if (auth_result->tenant_id) {
        object_free(auth_result->tenant_id);
        auth_result->tenant_id = NULL;
    }
    if (auth_result->portal_id) {
        object_free(auth_result->portal_id);
        auth_result->portal_id = NULL;
    }
    if (auth_result->application_id) {
        object_free(auth_result->application_id);
        auth_result->application_id = NULL;
    }
    if (auth_result->enrollment_id) {
        object_free(auth_result->enrollment_id);
        auth_result->enrollment_id = NULL;
    }
    if (auth_result->correlation_id) {
        free(auth_result->correlation_id);
        auth_result->correlation_id = NULL;
    }
    if (auth_result->scopes) {
        list_ForEach(listEntry, auth_result->scopes) {
            free(listEntry->data);
        }
        list_freeList(auth_result->scopes);
        auth_result->scopes = NULL;
    }
    if (auth_result->error) {
        free(auth_result->error);
        auth_result->error = NULL;
    }
    if (auth_result->provenance) {
        execution_provenance_free(auth_result->provenance);
        auth_result->provenance = NULL;
    }
    free(auth_result);
}

cJSON *auth_result_convertToJSON(auth_result_t *auth_result) {
    cJSON *item = cJSON_CreateObject();

    // auth_result->user_id
    if(auth_result->user_id) {
    cJSON *user_id_object = object_convertToJSON(auth_result->user_id);
    if(user_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "userId", user_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // auth_result->tenant_id
    if(auth_result->tenant_id) {
    cJSON *tenant_id_object = object_convertToJSON(auth_result->tenant_id);
    if(tenant_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenantId", tenant_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // auth_result->portal_id
    if(auth_result->portal_id) {
    cJSON *portal_id_object = object_convertToJSON(auth_result->portal_id);
    if(portal_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portalId", portal_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // auth_result->application_id
    if(auth_result->application_id) {
    cJSON *application_id_object = object_convertToJSON(auth_result->application_id);
    if(application_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "applicationId", application_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // auth_result->enrollment_id
    if(auth_result->enrollment_id) {
    cJSON *enrollment_id_object = object_convertToJSON(auth_result->enrollment_id);
    if(enrollment_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enrollmentId", enrollment_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // auth_result->correlation_id
    if(auth_result->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", auth_result->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // auth_result->scopes
    if(auth_result->scopes) {
    cJSON *scopes = cJSON_AddArrayToObject(item, "scopes");
    if(scopes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *scopesListEntry;
    list_ForEach(scopesListEntry, auth_result->scopes) {
    if(cJSON_AddStringToObject(scopes, "", (char*)scopesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // auth_result->error
    if(auth_result->error) {
    if(cJSON_AddStringToObject(item, "error", auth_result->error) == NULL) {
    goto fail; //String
    }
    }


    // auth_result->run_as
    if(auth_result->run_as != identityservice_auth_result_RUNAS_NULL) {
    if(cJSON_AddStringToObject(item, "runAs", run_asauth_result_ToString(auth_result->run_as)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // auth_result->principal_kind
    if(auth_result->principal_kind != identityservice_auth_result_PRINCIPALKIND_NULL) {
    if(cJSON_AddStringToObject(item, "principalKind", principal_kindauth_result_ToString(auth_result->principal_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // auth_result->provenance
    if(auth_result->provenance) {
    cJSON *provenance_local_JSON = execution_provenance_convertToJSON(auth_result->provenance);
    if(provenance_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "provenance", provenance_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

auth_result_t *auth_result_parseFromJSON(cJSON *auth_resultJSON){

    auth_result_t *auth_result_local_var = NULL;

    // define the local list for auth_result->scopes
    list_t *scopesList = NULL;

    // define the local variable for auth_result->provenance
    execution_provenance_t *provenance_local_nonprim = NULL;

    // auth_result->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "userId");
    object_t *user_id_local_object = NULL;
    if (user_id) { 
    user_id_local_object = object_parseFromJSON(user_id); //object
    }

    // auth_result->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "tenantId");
    object_t *tenant_id_local_object = NULL;
    if (tenant_id) { 
    tenant_id_local_object = object_parseFromJSON(tenant_id); //object
    }

    // auth_result->portal_id
    cJSON *portal_id = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "portalId");
    object_t *portal_id_local_object = NULL;
    if (portal_id) { 
    portal_id_local_object = object_parseFromJSON(portal_id); //object
    }

    // auth_result->application_id
    cJSON *application_id = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "applicationId");
    object_t *application_id_local_object = NULL;
    if (application_id) { 
    application_id_local_object = object_parseFromJSON(application_id); //object
    }

    // auth_result->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "enrollmentId");
    object_t *enrollment_id_local_object = NULL;
    if (enrollment_id) { 
    enrollment_id_local_object = object_parseFromJSON(enrollment_id); //object
    }

    // auth_result->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // auth_result->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "scopes");
    if (scopes) { 
    cJSON *scopes_local = NULL;
    if(!cJSON_IsArray(scopes)) {
        goto end;//primitive container
    }
    scopesList = list_createList();

    cJSON_ArrayForEach(scopes_local, scopes)
    {
        if(!cJSON_IsString(scopes_local))
        {
            goto end;
        }
        list_addElement(scopesList , strdup(scopes_local->valuestring));
    }
    }

    // auth_result->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // auth_result->run_as
    cJSON *run_as = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "runAs");
    identityservice_auth_result_RUNAS_e run_asVariable;
    if (run_as) { 
    if(!cJSON_IsString(run_as))
    {
    goto end; //Enum
    }
    run_asVariable = auth_result_run_as_FromString(run_as->valuestring);
    }

    // auth_result->principal_kind
    cJSON *principal_kind = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "principalKind");
    identityservice_auth_result_PRINCIPALKIND_e principal_kindVariable;
    if (principal_kind) { 
    if(!cJSON_IsString(principal_kind))
    {
    goto end; //Enum
    }
    principal_kindVariable = auth_result_principal_kind_FromString(principal_kind->valuestring);
    }

    // auth_result->provenance
    cJSON *provenance = cJSON_GetObjectItemCaseSensitive(auth_resultJSON, "provenance");
    if (provenance) { 
    provenance_local_nonprim = execution_provenance_parseFromJSON(provenance); //nonprimitive
    }


    auth_result_local_var = auth_result_create (
        user_id ? user_id_local_object : NULL,
        tenant_id ? tenant_id_local_object : NULL,
        portal_id ? portal_id_local_object : NULL,
        application_id ? application_id_local_object : NULL,
        enrollment_id ? enrollment_id_local_object : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        scopes ? scopesList : NULL,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        run_as ? run_asVariable : identityservice_auth_result_RUNAS_NULL,
        principal_kind ? principal_kindVariable : identityservice_auth_result_PRINCIPALKIND_NULL,
        provenance ? provenance_local_nonprim : NULL
        );

    return auth_result_local_var;
end:
    if (scopesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, scopesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(scopesList);
        scopesList = NULL;
    }
    if (provenance_local_nonprim) {
        execution_provenance_free(provenance_local_nonprim);
        provenance_local_nonprim = NULL;
    }
    return NULL;

}
