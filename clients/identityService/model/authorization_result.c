#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authorization_result.h"



authorization_result_t *authorization_result_create(
    object_t *user_id,
    object_t *tenant_id,
    object_t *portal_id,
    object_t *application_id,
    object_t *enrollment_id,
    char *correlation_id,
    list_t *scopes,
    char *error
    ) {
    authorization_result_t *authorization_result_local_var = malloc(sizeof(authorization_result_t));
    if (!authorization_result_local_var) {
        return NULL;
    }
    authorization_result_local_var->user_id = user_id;
    authorization_result_local_var->tenant_id = tenant_id;
    authorization_result_local_var->portal_id = portal_id;
    authorization_result_local_var->application_id = application_id;
    authorization_result_local_var->enrollment_id = enrollment_id;
    authorization_result_local_var->correlation_id = correlation_id;
    authorization_result_local_var->scopes = scopes;
    authorization_result_local_var->error = error;

    return authorization_result_local_var;
}


void authorization_result_free(authorization_result_t *authorization_result) {
    if(NULL == authorization_result){
        return ;
    }
    listEntry_t *listEntry;
    if (authorization_result->user_id) {
        object_free(authorization_result->user_id);
        authorization_result->user_id = NULL;
    }
    if (authorization_result->tenant_id) {
        object_free(authorization_result->tenant_id);
        authorization_result->tenant_id = NULL;
    }
    if (authorization_result->portal_id) {
        object_free(authorization_result->portal_id);
        authorization_result->portal_id = NULL;
    }
    if (authorization_result->application_id) {
        object_free(authorization_result->application_id);
        authorization_result->application_id = NULL;
    }
    if (authorization_result->enrollment_id) {
        object_free(authorization_result->enrollment_id);
        authorization_result->enrollment_id = NULL;
    }
    if (authorization_result->correlation_id) {
        free(authorization_result->correlation_id);
        authorization_result->correlation_id = NULL;
    }
    if (authorization_result->scopes) {
        list_ForEach(listEntry, authorization_result->scopes) {
            free(listEntry->data);
        }
        list_freeList(authorization_result->scopes);
        authorization_result->scopes = NULL;
    }
    if (authorization_result->error) {
        free(authorization_result->error);
        authorization_result->error = NULL;
    }
    free(authorization_result);
}

cJSON *authorization_result_convertToJSON(authorization_result_t *authorization_result) {
    cJSON *item = cJSON_CreateObject();

    // authorization_result->user_id
    if(authorization_result->user_id) {
    cJSON *user_id_object = object_convertToJSON(authorization_result->user_id);
    if(user_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "userId", user_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization_result->tenant_id
    if(authorization_result->tenant_id) {
    cJSON *tenant_id_object = object_convertToJSON(authorization_result->tenant_id);
    if(tenant_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenantId", tenant_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization_result->portal_id
    if(authorization_result->portal_id) {
    cJSON *portal_id_object = object_convertToJSON(authorization_result->portal_id);
    if(portal_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portalId", portal_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization_result->application_id
    if(authorization_result->application_id) {
    cJSON *application_id_object = object_convertToJSON(authorization_result->application_id);
    if(application_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "applicationId", application_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization_result->enrollment_id
    if(authorization_result->enrollment_id) {
    cJSON *enrollment_id_object = object_convertToJSON(authorization_result->enrollment_id);
    if(enrollment_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enrollmentId", enrollment_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization_result->correlation_id
    if(authorization_result->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", authorization_result->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // authorization_result->scopes
    if(authorization_result->scopes) {
    cJSON *scopes = cJSON_AddArrayToObject(item, "scopes");
    if(scopes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *scopesListEntry;
    list_ForEach(scopesListEntry, authorization_result->scopes) {
    if(cJSON_AddStringToObject(scopes, "", (char*)scopesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // authorization_result->error
    if(authorization_result->error) {
    if(cJSON_AddStringToObject(item, "error", authorization_result->error) == NULL) {
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

authorization_result_t *authorization_result_parseFromJSON(cJSON *authorization_resultJSON){

    authorization_result_t *authorization_result_local_var = NULL;

    // define the local list for authorization_result->scopes
    list_t *scopesList = NULL;

    // authorization_result->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "userId");
    object_t *user_id_local_object = NULL;
    if (user_id) { 
    user_id_local_object = object_parseFromJSON(user_id); //object
    }

    // authorization_result->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "tenantId");
    object_t *tenant_id_local_object = NULL;
    if (tenant_id) { 
    tenant_id_local_object = object_parseFromJSON(tenant_id); //object
    }

    // authorization_result->portal_id
    cJSON *portal_id = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "portalId");
    object_t *portal_id_local_object = NULL;
    if (portal_id) { 
    portal_id_local_object = object_parseFromJSON(portal_id); //object
    }

    // authorization_result->application_id
    cJSON *application_id = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "applicationId");
    object_t *application_id_local_object = NULL;
    if (application_id) { 
    application_id_local_object = object_parseFromJSON(application_id); //object
    }

    // authorization_result->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "enrollmentId");
    object_t *enrollment_id_local_object = NULL;
    if (enrollment_id) { 
    enrollment_id_local_object = object_parseFromJSON(enrollment_id); //object
    }

    // authorization_result->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // authorization_result->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "scopes");
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

    // authorization_result->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(authorization_resultJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }


    authorization_result_local_var = authorization_result_create (
        user_id ? user_id_local_object : NULL,
        tenant_id ? tenant_id_local_object : NULL,
        portal_id ? portal_id_local_object : NULL,
        application_id ? application_id_local_object : NULL,
        enrollment_id ? enrollment_id_local_object : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        scopes ? scopesList : NULL,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL
        );

    return authorization_result_local_var;
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
