#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "claims_identity.h"



claims_identity_t *claims_identity_create(
    char *authentication_type,
    int is_authenticated,
    claims_identity_t *actor,
    any_type_t *bootstrap_context,
    list_t *claims,
    char *label,
    char *name,
    char *name_claim_type,
    char *role_claim_type
    ) {
    claims_identity_t *claims_identity_local_var = malloc(sizeof(claims_identity_t));
    if (!claims_identity_local_var) {
        return NULL;
    }
    claims_identity_local_var->authentication_type = authentication_type;
    claims_identity_local_var->is_authenticated = is_authenticated;
    claims_identity_local_var->actor = actor;
    claims_identity_local_var->bootstrap_context = bootstrap_context;
    claims_identity_local_var->claims = claims;
    claims_identity_local_var->label = label;
    claims_identity_local_var->name = name;
    claims_identity_local_var->name_claim_type = name_claim_type;
    claims_identity_local_var->role_claim_type = role_claim_type;

    return claims_identity_local_var;
}


void claims_identity_free(claims_identity_t *claims_identity) {
    if(NULL == claims_identity){
        return ;
    }
    listEntry_t *listEntry;
    if (claims_identity->authentication_type) {
        free(claims_identity->authentication_type);
        claims_identity->authentication_type = NULL;
    }
    if (claims_identity->actor) {
        claims_identity_free(claims_identity->actor);
        claims_identity->actor = NULL;
    }
    if (claims_identity->bootstrap_context) {
        _free(claims_identity->bootstrap_context);
        claims_identity->bootstrap_context = NULL;
    }
    if (claims_identity->claims) {
        list_ForEach(listEntry, claims_identity->claims) {
            claim_free(listEntry->data);
        }
        list_freeList(claims_identity->claims);
        claims_identity->claims = NULL;
    }
    if (claims_identity->label) {
        free(claims_identity->label);
        claims_identity->label = NULL;
    }
    if (claims_identity->name) {
        free(claims_identity->name);
        claims_identity->name = NULL;
    }
    if (claims_identity->name_claim_type) {
        free(claims_identity->name_claim_type);
        claims_identity->name_claim_type = NULL;
    }
    if (claims_identity->role_claim_type) {
        free(claims_identity->role_claim_type);
        claims_identity->role_claim_type = NULL;
    }
    free(claims_identity);
}

cJSON *claims_identity_convertToJSON(claims_identity_t *claims_identity) {
    cJSON *item = cJSON_CreateObject();

    // claims_identity->authentication_type
    if(claims_identity->authentication_type) {
    if(cJSON_AddStringToObject(item, "authenticationType", claims_identity->authentication_type) == NULL) {
    goto fail; //String
    }
    }


    // claims_identity->is_authenticated
    if(claims_identity->is_authenticated) {
    if(cJSON_AddBoolToObject(item, "isAuthenticated", claims_identity->is_authenticated) == NULL) {
    goto fail; //Bool
    }
    }


    // claims_identity->actor
    if(claims_identity->actor) {
    cJSON *actor_local_JSON = claims_identity_convertToJSON(claims_identity->actor);
    if(actor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "actor", actor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // claims_identity->bootstrap_context
    if(claims_identity->bootstrap_context) {
    cJSON *bootstrap_context_local_JSON = _convertToJSON(claims_identity->bootstrap_context);
    if(bootstrap_context_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "bootstrapContext", bootstrap_context_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // claims_identity->claims
    if(claims_identity->claims) {
    cJSON *claims = cJSON_AddArrayToObject(item, "claims");
    if(claims == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *claimsListEntry;
    if (claims_identity->claims) {
    list_ForEach(claimsListEntry, claims_identity->claims) {
    cJSON *itemLocal = claim_convertToJSON(claimsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(claims, itemLocal);
    }
    }
    }


    // claims_identity->label
    if(claims_identity->label) {
    if(cJSON_AddStringToObject(item, "label", claims_identity->label) == NULL) {
    goto fail; //String
    }
    }


    // claims_identity->name
    if(claims_identity->name) {
    if(cJSON_AddStringToObject(item, "name", claims_identity->name) == NULL) {
    goto fail; //String
    }
    }


    // claims_identity->name_claim_type
    if(claims_identity->name_claim_type) {
    if(cJSON_AddStringToObject(item, "nameClaimType", claims_identity->name_claim_type) == NULL) {
    goto fail; //String
    }
    }


    // claims_identity->role_claim_type
    if(claims_identity->role_claim_type) {
    if(cJSON_AddStringToObject(item, "roleClaimType", claims_identity->role_claim_type) == NULL) {
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

claims_identity_t *claims_identity_parseFromJSON(cJSON *claims_identityJSON){

    claims_identity_t *claims_identity_local_var = NULL;

    // define the local variable for claims_identity->actor
    claims_identity_t *actor_local_nonprim = NULL;

    // define the local variable for claims_identity->bootstrap_context
    _t *bootstrap_context_local_nonprim = NULL;

    // define the local list for claims_identity->claims
    list_t *claimsList = NULL;

    // claims_identity->authentication_type
    cJSON *authentication_type = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "authenticationType");
    if (authentication_type) { 
    if(!cJSON_IsString(authentication_type) && !cJSON_IsNull(authentication_type))
    {
    goto end; //String
    }
    }

    // claims_identity->is_authenticated
    cJSON *is_authenticated = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "isAuthenticated");
    if (is_authenticated) { 
    if(!cJSON_IsBool(is_authenticated))
    {
    goto end; //Bool
    }
    }

    // claims_identity->actor
    cJSON *actor = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "actor");
    if (actor) { 
    actor_local_nonprim = claims_identity_parseFromJSON(actor); //nonprimitive
    }

    // claims_identity->bootstrap_context
    cJSON *bootstrap_context = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "bootstrapContext");
    if (bootstrap_context) { 
    bootstrap_context_local_nonprim = _parseFromJSON(bootstrap_context); //custom
    }

    // claims_identity->claims
    cJSON *claims = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "claims");
    if (claims) { 
    cJSON *claims_local_nonprimitive = NULL;
    if(!cJSON_IsArray(claims)){
        goto end; //nonprimitive container
    }

    claimsList = list_createList();

    cJSON_ArrayForEach(claims_local_nonprimitive,claims )
    {
        if(!cJSON_IsObject(claims_local_nonprimitive)){
            goto end;
        }
        claim_t *claimsItem = claim_parseFromJSON(claims_local_nonprimitive);

        list_addElement(claimsList, claimsItem);
    }
    }

    // claims_identity->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "label");
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // claims_identity->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // claims_identity->name_claim_type
    cJSON *name_claim_type = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "nameClaimType");
    if (name_claim_type) { 
    if(!cJSON_IsString(name_claim_type) && !cJSON_IsNull(name_claim_type))
    {
    goto end; //String
    }
    }

    // claims_identity->role_claim_type
    cJSON *role_claim_type = cJSON_GetObjectItemCaseSensitive(claims_identityJSON, "roleClaimType");
    if (role_claim_type) { 
    if(!cJSON_IsString(role_claim_type) && !cJSON_IsNull(role_claim_type))
    {
    goto end; //String
    }
    }


    claims_identity_local_var = claims_identity_create (
        authentication_type && !cJSON_IsNull(authentication_type) ? strdup(authentication_type->valuestring) : NULL,
        is_authenticated ? is_authenticated->valueint : 0,
        actor ? actor_local_nonprim : NULL,
        bootstrap_context ? bootstrap_context_local_nonprim : NULL,
        claims ? claimsList : NULL,
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        name_claim_type && !cJSON_IsNull(name_claim_type) ? strdup(name_claim_type->valuestring) : NULL,
        role_claim_type && !cJSON_IsNull(role_claim_type) ? strdup(role_claim_type->valuestring) : NULL
        );

    return claims_identity_local_var;
end:
    if (actor_local_nonprim) {
        claims_identity_free(actor_local_nonprim);
        actor_local_nonprim = NULL;
    }
    if (bootstrap_context_local_nonprim) {
        _free(bootstrap_context_local_nonprim);
        bootstrap_context_local_nonprim = NULL;
    }
    if (claimsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, claimsList) {
            claim_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(claimsList);
        claimsList = NULL;
    }
    return NULL;

}
