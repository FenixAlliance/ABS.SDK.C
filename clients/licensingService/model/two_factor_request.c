#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "two_factor_request.h"



two_factor_request_t *two_factor_request_create(
    int enable,
    char *two_factor_code,
    int reset_shared_key,
    int reset_recovery_codes,
    int forget_machine
    ) {
    two_factor_request_t *two_factor_request_local_var = malloc(sizeof(two_factor_request_t));
    if (!two_factor_request_local_var) {
        return NULL;
    }
    two_factor_request_local_var->enable = enable;
    two_factor_request_local_var->two_factor_code = two_factor_code;
    two_factor_request_local_var->reset_shared_key = reset_shared_key;
    two_factor_request_local_var->reset_recovery_codes = reset_recovery_codes;
    two_factor_request_local_var->forget_machine = forget_machine;

    return two_factor_request_local_var;
}


void two_factor_request_free(two_factor_request_t *two_factor_request) {
    if(NULL == two_factor_request){
        return ;
    }
    listEntry_t *listEntry;
    if (two_factor_request->two_factor_code) {
        free(two_factor_request->two_factor_code);
        two_factor_request->two_factor_code = NULL;
    }
    free(two_factor_request);
}

cJSON *two_factor_request_convertToJSON(two_factor_request_t *two_factor_request) {
    cJSON *item = cJSON_CreateObject();

    // two_factor_request->enable
    if(two_factor_request->enable) {
    if(cJSON_AddBoolToObject(item, "enable", two_factor_request->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // two_factor_request->two_factor_code
    if(two_factor_request->two_factor_code) {
    if(cJSON_AddStringToObject(item, "twoFactorCode", two_factor_request->two_factor_code) == NULL) {
    goto fail; //String
    }
    }


    // two_factor_request->reset_shared_key
    if(two_factor_request->reset_shared_key) {
    if(cJSON_AddBoolToObject(item, "resetSharedKey", two_factor_request->reset_shared_key) == NULL) {
    goto fail; //Bool
    }
    }


    // two_factor_request->reset_recovery_codes
    if(two_factor_request->reset_recovery_codes) {
    if(cJSON_AddBoolToObject(item, "resetRecoveryCodes", two_factor_request->reset_recovery_codes) == NULL) {
    goto fail; //Bool
    }
    }


    // two_factor_request->forget_machine
    if(two_factor_request->forget_machine) {
    if(cJSON_AddBoolToObject(item, "forgetMachine", two_factor_request->forget_machine) == NULL) {
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

two_factor_request_t *two_factor_request_parseFromJSON(cJSON *two_factor_requestJSON){

    two_factor_request_t *two_factor_request_local_var = NULL;

    // two_factor_request->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(two_factor_requestJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // two_factor_request->two_factor_code
    cJSON *two_factor_code = cJSON_GetObjectItemCaseSensitive(two_factor_requestJSON, "twoFactorCode");
    if (two_factor_code) { 
    if(!cJSON_IsString(two_factor_code) && !cJSON_IsNull(two_factor_code))
    {
    goto end; //String
    }
    }

    // two_factor_request->reset_shared_key
    cJSON *reset_shared_key = cJSON_GetObjectItemCaseSensitive(two_factor_requestJSON, "resetSharedKey");
    if (reset_shared_key) { 
    if(!cJSON_IsBool(reset_shared_key))
    {
    goto end; //Bool
    }
    }

    // two_factor_request->reset_recovery_codes
    cJSON *reset_recovery_codes = cJSON_GetObjectItemCaseSensitive(two_factor_requestJSON, "resetRecoveryCodes");
    if (reset_recovery_codes) { 
    if(!cJSON_IsBool(reset_recovery_codes))
    {
    goto end; //Bool
    }
    }

    // two_factor_request->forget_machine
    cJSON *forget_machine = cJSON_GetObjectItemCaseSensitive(two_factor_requestJSON, "forgetMachine");
    if (forget_machine) { 
    if(!cJSON_IsBool(forget_machine))
    {
    goto end; //Bool
    }
    }


    two_factor_request_local_var = two_factor_request_create (
        enable ? enable->valueint : 0,
        two_factor_code && !cJSON_IsNull(two_factor_code) ? strdup(two_factor_code->valuestring) : NULL,
        reset_shared_key ? reset_shared_key->valueint : 0,
        reset_recovery_codes ? reset_recovery_codes->valueint : 0,
        forget_machine ? forget_machine->valueint : 0
        );

    return two_factor_request_local_var;
end:
    return NULL;

}
