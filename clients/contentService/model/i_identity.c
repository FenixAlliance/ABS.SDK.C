#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_identity.h"



i_identity_t *i_identity_create(
    char *name,
    char *authentication_type,
    int is_authenticated
    ) {
    i_identity_t *i_identity_local_var = malloc(sizeof(i_identity_t));
    if (!i_identity_local_var) {
        return NULL;
    }
    i_identity_local_var->name = name;
    i_identity_local_var->authentication_type = authentication_type;
    i_identity_local_var->is_authenticated = is_authenticated;

    return i_identity_local_var;
}


void i_identity_free(i_identity_t *i_identity) {
    if(NULL == i_identity){
        return ;
    }
    listEntry_t *listEntry;
    if (i_identity->name) {
        free(i_identity->name);
        i_identity->name = NULL;
    }
    if (i_identity->authentication_type) {
        free(i_identity->authentication_type);
        i_identity->authentication_type = NULL;
    }
    free(i_identity);
}

cJSON *i_identity_convertToJSON(i_identity_t *i_identity) {
    cJSON *item = cJSON_CreateObject();

    // i_identity->name
    if(i_identity->name) {
    if(cJSON_AddStringToObject(item, "name", i_identity->name) == NULL) {
    goto fail; //String
    }
    }


    // i_identity->authentication_type
    if(i_identity->authentication_type) {
    if(cJSON_AddStringToObject(item, "authenticationType", i_identity->authentication_type) == NULL) {
    goto fail; //String
    }
    }


    // i_identity->is_authenticated
    if(i_identity->is_authenticated) {
    if(cJSON_AddBoolToObject(item, "isAuthenticated", i_identity->is_authenticated) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_identity_t *i_identity_parseFromJSON(cJSON *i_identityJSON){

    i_identity_t *i_identity_local_var = NULL;

    // i_identity->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_identityJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_identity->authentication_type
    cJSON *authentication_type = cJSON_GetObjectItemCaseSensitive(i_identityJSON, "authenticationType");
    if (authentication_type) { 
    if(!cJSON_IsString(authentication_type) && !cJSON_IsNull(authentication_type))
    {
    goto end; //String
    }
    }

    // i_identity->is_authenticated
    cJSON *is_authenticated = cJSON_GetObjectItemCaseSensitive(i_identityJSON, "isAuthenticated");
    if (is_authenticated) { 
    if(!cJSON_IsBool(is_authenticated))
    {
    goto end; //Bool
    }
    }


    i_identity_local_var = i_identity_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        authentication_type && !cJSON_IsNull(authentication_type) ? strdup(authentication_type->valuestring) : NULL,
        is_authenticated ? is_authenticated->valueint : 0
        );

    return i_identity_local_var;
end:
    return NULL;

}
