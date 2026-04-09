#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "two_factor_response.h"



two_factor_response_t *two_factor_response_create(
    char *shared_key,
    int recovery_codes_left,
    list_t *recovery_codes,
    int is_two_factor_enabled,
    int is_machine_remembered
    ) {
    two_factor_response_t *two_factor_response_local_var = malloc(sizeof(two_factor_response_t));
    if (!two_factor_response_local_var) {
        return NULL;
    }
    two_factor_response_local_var->shared_key = shared_key;
    two_factor_response_local_var->recovery_codes_left = recovery_codes_left;
    two_factor_response_local_var->recovery_codes = recovery_codes;
    two_factor_response_local_var->is_two_factor_enabled = is_two_factor_enabled;
    two_factor_response_local_var->is_machine_remembered = is_machine_remembered;

    return two_factor_response_local_var;
}


void two_factor_response_free(two_factor_response_t *two_factor_response) {
    if(NULL == two_factor_response){
        return ;
    }
    listEntry_t *listEntry;
    if (two_factor_response->shared_key) {
        free(two_factor_response->shared_key);
        two_factor_response->shared_key = NULL;
    }
    if (two_factor_response->recovery_codes) {
        list_ForEach(listEntry, two_factor_response->recovery_codes) {
            free(listEntry->data);
        }
        list_freeList(two_factor_response->recovery_codes);
        two_factor_response->recovery_codes = NULL;
    }
    free(two_factor_response);
}

cJSON *two_factor_response_convertToJSON(two_factor_response_t *two_factor_response) {
    cJSON *item = cJSON_CreateObject();

    // two_factor_response->shared_key
    if (!two_factor_response->shared_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sharedKey", two_factor_response->shared_key) == NULL) {
    goto fail; //String
    }


    // two_factor_response->recovery_codes_left
    if (!two_factor_response->recovery_codes_left) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "recoveryCodesLeft", two_factor_response->recovery_codes_left) == NULL) {
    goto fail; //Numeric
    }


    // two_factor_response->recovery_codes
    if(two_factor_response->recovery_codes) {
    cJSON *recovery_codes = cJSON_AddArrayToObject(item, "recoveryCodes");
    if(recovery_codes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *recovery_codesListEntry;
    list_ForEach(recovery_codesListEntry, two_factor_response->recovery_codes) {
    if(cJSON_AddStringToObject(recovery_codes, "", (char*)recovery_codesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // two_factor_response->is_two_factor_enabled
    if (!two_factor_response->is_two_factor_enabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "isTwoFactorEnabled", two_factor_response->is_two_factor_enabled) == NULL) {
    goto fail; //Bool
    }


    // two_factor_response->is_machine_remembered
    if (!two_factor_response->is_machine_remembered) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "isMachineRemembered", two_factor_response->is_machine_remembered) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

two_factor_response_t *two_factor_response_parseFromJSON(cJSON *two_factor_responseJSON){

    two_factor_response_t *two_factor_response_local_var = NULL;

    // define the local list for two_factor_response->recovery_codes
    list_t *recovery_codesList = NULL;

    // two_factor_response->shared_key
    cJSON *shared_key = cJSON_GetObjectItemCaseSensitive(two_factor_responseJSON, "sharedKey");
    if (!shared_key) {
        goto end;
    }

    
    if(!cJSON_IsString(shared_key))
    {
    goto end; //String
    }

    // two_factor_response->recovery_codes_left
    cJSON *recovery_codes_left = cJSON_GetObjectItemCaseSensitive(two_factor_responseJSON, "recoveryCodesLeft");
    if (!recovery_codes_left) {
        goto end;
    }

    
    if(!cJSON_IsNumber(recovery_codes_left))
    {
    goto end; //Numeric
    }

    // two_factor_response->recovery_codes
    cJSON *recovery_codes = cJSON_GetObjectItemCaseSensitive(two_factor_responseJSON, "recoveryCodes");
    if (recovery_codes) { 
    cJSON *recovery_codes_local = NULL;
    if(!cJSON_IsArray(recovery_codes)) {
        goto end;//primitive container
    }
    recovery_codesList = list_createList();

    cJSON_ArrayForEach(recovery_codes_local, recovery_codes)
    {
        if(!cJSON_IsString(recovery_codes_local))
        {
            goto end;
        }
        list_addElement(recovery_codesList , strdup(recovery_codes_local->valuestring));
    }
    }

    // two_factor_response->is_two_factor_enabled
    cJSON *is_two_factor_enabled = cJSON_GetObjectItemCaseSensitive(two_factor_responseJSON, "isTwoFactorEnabled");
    if (!is_two_factor_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_two_factor_enabled))
    {
    goto end; //Bool
    }

    // two_factor_response->is_machine_remembered
    cJSON *is_machine_remembered = cJSON_GetObjectItemCaseSensitive(two_factor_responseJSON, "isMachineRemembered");
    if (!is_machine_remembered) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_machine_remembered))
    {
    goto end; //Bool
    }


    two_factor_response_local_var = two_factor_response_create (
        strdup(shared_key->valuestring),
        recovery_codes_left->valuedouble,
        recovery_codes ? recovery_codesList : NULL,
        is_two_factor_enabled->valueint,
        is_machine_remembered->valueint
        );

    return two_factor_response_local_var;
end:
    if (recovery_codesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, recovery_codesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(recovery_codesList);
        recovery_codesList = NULL;
    }
    return NULL;

}
