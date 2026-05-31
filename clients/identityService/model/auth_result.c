#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "auth_result.h"



auth_result_t *auth_result_create(
    object_t *user_id,
    object_t *tenant_id,
    object_t *portal_id,
    object_t *application_id,
    object_t *enrollment_id,
    char *correlation_id,
    list_t *scopes,
    char *error
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


    auth_result_local_var = auth_result_create (
        user_id ? user_id_local_object : NULL,
        tenant_id ? tenant_id_local_object : NULL,
        portal_id ? portal_id_local_object : NULL,
        application_id ? application_id_local_object : NULL,
        enrollment_id ? enrollment_id_local_object : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        scopes ? scopesList : NULL,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL
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
    return NULL;

}
