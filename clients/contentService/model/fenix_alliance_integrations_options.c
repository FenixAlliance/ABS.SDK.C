#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fenix_alliance_integrations_options.h"



fenix_alliance_integrations_options_t *fenix_alliance_integrations_options_create(
    int enable,
    infinity_comex_integration_options_t *icx,
    alliance_business_suite_integration_options_t *abs
    ) {
    fenix_alliance_integrations_options_t *fenix_alliance_integrations_options_local_var = malloc(sizeof(fenix_alliance_integrations_options_t));
    if (!fenix_alliance_integrations_options_local_var) {
        return NULL;
    }
    fenix_alliance_integrations_options_local_var->enable = enable;
    fenix_alliance_integrations_options_local_var->icx = icx;
    fenix_alliance_integrations_options_local_var->abs = abs;

    return fenix_alliance_integrations_options_local_var;
}


void fenix_alliance_integrations_options_free(fenix_alliance_integrations_options_t *fenix_alliance_integrations_options) {
    if(NULL == fenix_alliance_integrations_options){
        return ;
    }
    listEntry_t *listEntry;
    if (fenix_alliance_integrations_options->icx) {
        infinity_comex_integration_options_free(fenix_alliance_integrations_options->icx);
        fenix_alliance_integrations_options->icx = NULL;
    }
    if (fenix_alliance_integrations_options->abs) {
        alliance_business_suite_integration_options_free(fenix_alliance_integrations_options->abs);
        fenix_alliance_integrations_options->abs = NULL;
    }
    free(fenix_alliance_integrations_options);
}

cJSON *fenix_alliance_integrations_options_convertToJSON(fenix_alliance_integrations_options_t *fenix_alliance_integrations_options) {
    cJSON *item = cJSON_CreateObject();

    // fenix_alliance_integrations_options->enable
    if(fenix_alliance_integrations_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", fenix_alliance_integrations_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // fenix_alliance_integrations_options->icx
    if(fenix_alliance_integrations_options->icx) {
    cJSON *icx_local_JSON = infinity_comex_integration_options_convertToJSON(fenix_alliance_integrations_options->icx);
    if(icx_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "icx", icx_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // fenix_alliance_integrations_options->abs
    if(fenix_alliance_integrations_options->abs) {
    cJSON *abs_local_JSON = alliance_business_suite_integration_options_convertToJSON(fenix_alliance_integrations_options->abs);
    if(abs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "abs", abs_local_JSON);
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

fenix_alliance_integrations_options_t *fenix_alliance_integrations_options_parseFromJSON(cJSON *fenix_alliance_integrations_optionsJSON){

    fenix_alliance_integrations_options_t *fenix_alliance_integrations_options_local_var = NULL;

    // define the local variable for fenix_alliance_integrations_options->icx
    infinity_comex_integration_options_t *icx_local_nonprim = NULL;

    // define the local variable for fenix_alliance_integrations_options->abs
    alliance_business_suite_integration_options_t *abs_local_nonprim = NULL;

    // fenix_alliance_integrations_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(fenix_alliance_integrations_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // fenix_alliance_integrations_options->icx
    cJSON *icx = cJSON_GetObjectItemCaseSensitive(fenix_alliance_integrations_optionsJSON, "icx");
    if (icx) { 
    icx_local_nonprim = infinity_comex_integration_options_parseFromJSON(icx); //nonprimitive
    }

    // fenix_alliance_integrations_options->abs
    cJSON *abs = cJSON_GetObjectItemCaseSensitive(fenix_alliance_integrations_optionsJSON, "abs");
    if (abs) { 
    abs_local_nonprim = alliance_business_suite_integration_options_parseFromJSON(abs); //nonprimitive
    }


    fenix_alliance_integrations_options_local_var = fenix_alliance_integrations_options_create (
        enable ? enable->valueint : 0,
        icx ? icx_local_nonprim : NULL,
        abs ? abs_local_nonprim : NULL
        );

    return fenix_alliance_integrations_options_local_var;
end:
    if (icx_local_nonprim) {
        infinity_comex_integration_options_free(icx_local_nonprim);
        icx_local_nonprim = NULL;
    }
    if (abs_local_nonprim) {
        alliance_business_suite_integration_options_free(abs_local_nonprim);
        abs_local_nonprim = NULL;
    }
    return NULL;

}
