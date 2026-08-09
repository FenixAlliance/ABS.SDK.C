#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "crm_context.h"



crm_context_t *crm_context_create(
    object_t *owner_tenant_id,
    tenant_dto_t *owner_tenant,
    object_t *user_contact_id,
    object_t *tenant_contact_id,
    contact_dto_t *user_contact,
    contact_dto_t *tenant_contact
    ) {
    crm_context_t *crm_context_local_var = malloc(sizeof(crm_context_t));
    if (!crm_context_local_var) {
        return NULL;
    }
    crm_context_local_var->owner_tenant_id = owner_tenant_id;
    crm_context_local_var->owner_tenant = owner_tenant;
    crm_context_local_var->user_contact_id = user_contact_id;
    crm_context_local_var->tenant_contact_id = tenant_contact_id;
    crm_context_local_var->user_contact = user_contact;
    crm_context_local_var->tenant_contact = tenant_contact;

    return crm_context_local_var;
}


void crm_context_free(crm_context_t *crm_context) {
    if(NULL == crm_context){
        return ;
    }
    listEntry_t *listEntry;
    if (crm_context->owner_tenant_id) {
        object_free(crm_context->owner_tenant_id);
        crm_context->owner_tenant_id = NULL;
    }
    if (crm_context->owner_tenant) {
        tenant_dto_free(crm_context->owner_tenant);
        crm_context->owner_tenant = NULL;
    }
    if (crm_context->user_contact_id) {
        object_free(crm_context->user_contact_id);
        crm_context->user_contact_id = NULL;
    }
    if (crm_context->tenant_contact_id) {
        object_free(crm_context->tenant_contact_id);
        crm_context->tenant_contact_id = NULL;
    }
    if (crm_context->user_contact) {
        contact_dto_free(crm_context->user_contact);
        crm_context->user_contact = NULL;
    }
    if (crm_context->tenant_contact) {
        contact_dto_free(crm_context->tenant_contact);
        crm_context->tenant_contact = NULL;
    }
    free(crm_context);
}

cJSON *crm_context_convertToJSON(crm_context_t *crm_context) {
    cJSON *item = cJSON_CreateObject();

    // crm_context->owner_tenant_id
    if(crm_context->owner_tenant_id) {
    cJSON *owner_tenant_id_object = object_convertToJSON(crm_context->owner_tenant_id);
    if(owner_tenant_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ownerTenantId", owner_tenant_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // crm_context->owner_tenant
    if(crm_context->owner_tenant) {
    cJSON *owner_tenant_local_JSON = tenant_dto_convertToJSON(crm_context->owner_tenant);
    if(owner_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ownerTenant", owner_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // crm_context->user_contact_id
    if(crm_context->user_contact_id) {
    cJSON *user_contact_id_object = object_convertToJSON(crm_context->user_contact_id);
    if(user_contact_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "userContactId", user_contact_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // crm_context->tenant_contact_id
    if(crm_context->tenant_contact_id) {
    cJSON *tenant_contact_id_object = object_convertToJSON(crm_context->tenant_contact_id);
    if(tenant_contact_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenantContactId", tenant_contact_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // crm_context->user_contact
    if(crm_context->user_contact) {
    cJSON *user_contact_local_JSON = contact_dto_convertToJSON(crm_context->user_contact);
    if(user_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "userContact", user_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // crm_context->tenant_contact
    if(crm_context->tenant_contact) {
    cJSON *tenant_contact_local_JSON = contact_dto_convertToJSON(crm_context->tenant_contact);
    if(tenant_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenantContact", tenant_contact_local_JSON);
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

crm_context_t *crm_context_parseFromJSON(cJSON *crm_contextJSON){

    crm_context_t *crm_context_local_var = NULL;

    // define the local variable for crm_context->owner_tenant
    tenant_dto_t *owner_tenant_local_nonprim = NULL;

    // define the local variable for crm_context->user_contact
    contact_dto_t *user_contact_local_nonprim = NULL;

    // define the local variable for crm_context->tenant_contact
    contact_dto_t *tenant_contact_local_nonprim = NULL;

    // crm_context->owner_tenant_id
    cJSON *owner_tenant_id = cJSON_GetObjectItemCaseSensitive(crm_contextJSON, "ownerTenantId");
    object_t *owner_tenant_id_local_object = NULL;
    if (owner_tenant_id) { 
    owner_tenant_id_local_object = object_parseFromJSON(owner_tenant_id); //object
    }

    // crm_context->owner_tenant
    cJSON *owner_tenant = cJSON_GetObjectItemCaseSensitive(crm_contextJSON, "ownerTenant");
    if (owner_tenant) { 
    owner_tenant_local_nonprim = tenant_dto_parseFromJSON(owner_tenant); //nonprimitive
    }

    // crm_context->user_contact_id
    cJSON *user_contact_id = cJSON_GetObjectItemCaseSensitive(crm_contextJSON, "userContactId");
    object_t *user_contact_id_local_object = NULL;
    if (user_contact_id) { 
    user_contact_id_local_object = object_parseFromJSON(user_contact_id); //object
    }

    // crm_context->tenant_contact_id
    cJSON *tenant_contact_id = cJSON_GetObjectItemCaseSensitive(crm_contextJSON, "tenantContactId");
    object_t *tenant_contact_id_local_object = NULL;
    if (tenant_contact_id) { 
    tenant_contact_id_local_object = object_parseFromJSON(tenant_contact_id); //object
    }

    // crm_context->user_contact
    cJSON *user_contact = cJSON_GetObjectItemCaseSensitive(crm_contextJSON, "userContact");
    if (user_contact) { 
    user_contact_local_nonprim = contact_dto_parseFromJSON(user_contact); //nonprimitive
    }

    // crm_context->tenant_contact
    cJSON *tenant_contact = cJSON_GetObjectItemCaseSensitive(crm_contextJSON, "tenantContact");
    if (tenant_contact) { 
    tenant_contact_local_nonprim = contact_dto_parseFromJSON(tenant_contact); //nonprimitive
    }


    crm_context_local_var = crm_context_create (
        owner_tenant_id ? owner_tenant_id_local_object : NULL,
        owner_tenant ? owner_tenant_local_nonprim : NULL,
        user_contact_id ? user_contact_id_local_object : NULL,
        tenant_contact_id ? tenant_contact_id_local_object : NULL,
        user_contact ? user_contact_local_nonprim : NULL,
        tenant_contact ? tenant_contact_local_nonprim : NULL
        );

    return crm_context_local_var;
end:
    if (owner_tenant_local_nonprim) {
        tenant_dto_free(owner_tenant_local_nonprim);
        owner_tenant_local_nonprim = NULL;
    }
    if (user_contact_local_nonprim) {
        contact_dto_free(user_contact_local_nonprim);
        user_contact_local_nonprim = NULL;
    }
    if (tenant_contact_local_nonprim) {
        contact_dto_free(tenant_contact_local_nonprim);
        tenant_contact_local_nonprim = NULL;
    }
    return NULL;

}
