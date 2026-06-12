#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "claim.h"



claim_t *claim_create(
    char *issuer,
    char *original_issuer,
    list_t* properties,
    claims_identity_t *subject,
    char *type,
    char *value,
    char *value_type
    ) {
    claim_t *claim_local_var = malloc(sizeof(claim_t));
    if (!claim_local_var) {
        return NULL;
    }
    claim_local_var->issuer = issuer;
    claim_local_var->original_issuer = original_issuer;
    claim_local_var->properties = properties;
    claim_local_var->subject = subject;
    claim_local_var->type = type;
    claim_local_var->value = value;
    claim_local_var->value_type = value_type;

    return claim_local_var;
}


void claim_free(claim_t *claim) {
    if(NULL == claim){
        return ;
    }
    listEntry_t *listEntry;
    if (claim->issuer) {
        free(claim->issuer);
        claim->issuer = NULL;
    }
    if (claim->original_issuer) {
        free(claim->original_issuer);
        claim->original_issuer = NULL;
    }
    if (claim->properties) {
        list_ForEach(listEntry, claim->properties) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(claim->properties);
        claim->properties = NULL;
    }
    if (claim->subject) {
        claims_identity_free(claim->subject);
        claim->subject = NULL;
    }
    if (claim->type) {
        free(claim->type);
        claim->type = NULL;
    }
    if (claim->value) {
        free(claim->value);
        claim->value = NULL;
    }
    if (claim->value_type) {
        free(claim->value_type);
        claim->value_type = NULL;
    }
    free(claim);
}

cJSON *claim_convertToJSON(claim_t *claim) {
    cJSON *item = cJSON_CreateObject();

    // claim->issuer
    if(claim->issuer) {
    if(cJSON_AddStringToObject(item, "issuer", claim->issuer) == NULL) {
    goto fail; //String
    }
    }


    // claim->original_issuer
    if(claim->original_issuer) {
    if(cJSON_AddStringToObject(item, "originalIssuer", claim->original_issuer) == NULL) {
    goto fail; //String
    }
    }


    // claim->properties
    if(claim->properties) {
    cJSON *properties = cJSON_AddObjectToObject(item, "properties");
    if(properties == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = properties;
    listEntry_t *propertiesListEntry;
    if (claim->properties) {
    list_ForEach(propertiesListEntry, claim->properties) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)propertiesListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // claim->subject
    if(claim->subject) {
    cJSON *subject_local_JSON = claims_identity_convertToJSON(claim->subject);
    if(subject_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subject", subject_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // claim->type
    if(claim->type) {
    if(cJSON_AddStringToObject(item, "type", claim->type) == NULL) {
    goto fail; //String
    }
    }


    // claim->value
    if(claim->value) {
    if(cJSON_AddStringToObject(item, "value", claim->value) == NULL) {
    goto fail; //String
    }
    }


    // claim->value_type
    if(claim->value_type) {
    if(cJSON_AddStringToObject(item, "valueType", claim->value_type) == NULL) {
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

claim_t *claim_parseFromJSON(cJSON *claimJSON){

    claim_t *claim_local_var = NULL;

    // define the local map for claim->properties
    list_t *propertiesList = NULL;

    // define the local variable for claim->subject
    claims_identity_t *subject_local_nonprim = NULL;

    // claim->issuer
    cJSON *issuer = cJSON_GetObjectItemCaseSensitive(claimJSON, "issuer");
    if (issuer) { 
    if(!cJSON_IsString(issuer) && !cJSON_IsNull(issuer))
    {
    goto end; //String
    }
    }

    // claim->original_issuer
    cJSON *original_issuer = cJSON_GetObjectItemCaseSensitive(claimJSON, "originalIssuer");
    if (original_issuer) { 
    if(!cJSON_IsString(original_issuer) && !cJSON_IsNull(original_issuer))
    {
    goto end; //String
    }
    }

    // claim->properties
    cJSON *properties = cJSON_GetObjectItemCaseSensitive(claimJSON, "properties");
    if (properties) { 
    cJSON *properties_local_map = NULL;
    if(!cJSON_IsObject(properties) && !cJSON_IsNull(properties))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(properties))
    {
        propertiesList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(properties_local_map, properties)
        {
            cJSON *localMapObject = properties_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(propertiesList , localMapKeyPair);
        }
    }
    }

    // claim->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(claimJSON, "subject");
    if (subject) { 
    subject_local_nonprim = claims_identity_parseFromJSON(subject); //nonprimitive
    }

    // claim->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(claimJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // claim->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(claimJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // claim->value_type
    cJSON *value_type = cJSON_GetObjectItemCaseSensitive(claimJSON, "valueType");
    if (value_type) { 
    if(!cJSON_IsString(value_type) && !cJSON_IsNull(value_type))
    {
    goto end; //String
    }
    }


    claim_local_var = claim_create (
        issuer && !cJSON_IsNull(issuer) ? strdup(issuer->valuestring) : NULL,
        original_issuer && !cJSON_IsNull(original_issuer) ? strdup(original_issuer->valuestring) : NULL,
        properties ? propertiesList : NULL,
        subject ? subject_local_nonprim : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        value_type && !cJSON_IsNull(value_type) ? strdup(value_type->valuestring) : NULL
        );

    return claim_local_var;
end:
    if (propertiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, propertiesList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(propertiesList);
        propertiesList = NULL;
    }
    if (subject_local_nonprim) {
        claims_identity_free(subject_local_nonprim);
        subject_local_nonprim = NULL;
    }
    return NULL;

}
