#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "claims_principal.h"



claims_principal_t *claims_principal_create(
    list_t *claims,
    list_t *identities,
    i_identity_t *identity
    ) {
    claims_principal_t *claims_principal_local_var = malloc(sizeof(claims_principal_t));
    if (!claims_principal_local_var) {
        return NULL;
    }
    claims_principal_local_var->claims = claims;
    claims_principal_local_var->identities = identities;
    claims_principal_local_var->identity = identity;

    return claims_principal_local_var;
}


void claims_principal_free(claims_principal_t *claims_principal) {
    if(NULL == claims_principal){
        return ;
    }
    listEntry_t *listEntry;
    if (claims_principal->claims) {
        list_ForEach(listEntry, claims_principal->claims) {
            claim_free(listEntry->data);
        }
        list_freeList(claims_principal->claims);
        claims_principal->claims = NULL;
    }
    if (claims_principal->identities) {
        list_ForEach(listEntry, claims_principal->identities) {
            claims_identity_free(listEntry->data);
        }
        list_freeList(claims_principal->identities);
        claims_principal->identities = NULL;
    }
    if (claims_principal->identity) {
        i_identity_free(claims_principal->identity);
        claims_principal->identity = NULL;
    }
    free(claims_principal);
}

cJSON *claims_principal_convertToJSON(claims_principal_t *claims_principal) {
    cJSON *item = cJSON_CreateObject();

    // claims_principal->claims
    if(claims_principal->claims) {
    cJSON *claims = cJSON_AddArrayToObject(item, "claims");
    if(claims == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *claimsListEntry;
    if (claims_principal->claims) {
    list_ForEach(claimsListEntry, claims_principal->claims) {
    cJSON *itemLocal = claim_convertToJSON(claimsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(claims, itemLocal);
    }
    }
    }


    // claims_principal->identities
    if(claims_principal->identities) {
    cJSON *identities = cJSON_AddArrayToObject(item, "identities");
    if(identities == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *identitiesListEntry;
    if (claims_principal->identities) {
    list_ForEach(identitiesListEntry, claims_principal->identities) {
    cJSON *itemLocal = claims_identity_convertToJSON(identitiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(identities, itemLocal);
    }
    }
    }


    // claims_principal->identity
    if(claims_principal->identity) {
    cJSON *identity_local_JSON = i_identity_convertToJSON(claims_principal->identity);
    if(identity_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "identity", identity_local_JSON);
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

claims_principal_t *claims_principal_parseFromJSON(cJSON *claims_principalJSON){

    claims_principal_t *claims_principal_local_var = NULL;

    // define the local list for claims_principal->claims
    list_t *claimsList = NULL;

    // define the local list for claims_principal->identities
    list_t *identitiesList = NULL;

    // define the local variable for claims_principal->identity
    i_identity_t *identity_local_nonprim = NULL;

    // claims_principal->claims
    cJSON *claims = cJSON_GetObjectItemCaseSensitive(claims_principalJSON, "claims");
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

    // claims_principal->identities
    cJSON *identities = cJSON_GetObjectItemCaseSensitive(claims_principalJSON, "identities");
    if (identities) { 
    cJSON *identities_local_nonprimitive = NULL;
    if(!cJSON_IsArray(identities)){
        goto end; //nonprimitive container
    }

    identitiesList = list_createList();

    cJSON_ArrayForEach(identities_local_nonprimitive,identities )
    {
        if(!cJSON_IsObject(identities_local_nonprimitive)){
            goto end;
        }
        claims_identity_t *identitiesItem = claims_identity_parseFromJSON(identities_local_nonprimitive);

        list_addElement(identitiesList, identitiesItem);
    }
    }

    // claims_principal->identity
    cJSON *identity = cJSON_GetObjectItemCaseSensitive(claims_principalJSON, "identity");
    if (identity) { 
    identity_local_nonprim = i_identity_parseFromJSON(identity); //nonprimitive
    }


    claims_principal_local_var = claims_principal_create (
        claims ? claimsList : NULL,
        identities ? identitiesList : NULL,
        identity ? identity_local_nonprim : NULL
        );

    return claims_principal_local_var;
end:
    if (claimsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, claimsList) {
            claim_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(claimsList);
        claimsList = NULL;
    }
    if (identitiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, identitiesList) {
            claims_identity_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(identitiesList);
        identitiesList = NULL;
    }
    if (identity_local_nonprim) {
        i_identity_free(identity_local_nonprim);
        identity_local_nonprim = NULL;
    }
    return NULL;

}
