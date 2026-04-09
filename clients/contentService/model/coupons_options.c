#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupons_options.h"



coupons_options_t *coupons_options_create(
    int enable_coupons,
    int calculate_coupons_secuentially
    ) {
    coupons_options_t *coupons_options_local_var = malloc(sizeof(coupons_options_t));
    if (!coupons_options_local_var) {
        return NULL;
    }
    coupons_options_local_var->enable_coupons = enable_coupons;
    coupons_options_local_var->calculate_coupons_secuentially = calculate_coupons_secuentially;

    return coupons_options_local_var;
}


void coupons_options_free(coupons_options_t *coupons_options) {
    if(NULL == coupons_options){
        return ;
    }
    listEntry_t *listEntry;
    free(coupons_options);
}

cJSON *coupons_options_convertToJSON(coupons_options_t *coupons_options) {
    cJSON *item = cJSON_CreateObject();

    // coupons_options->enable_coupons
    if(coupons_options->enable_coupons) {
    if(cJSON_AddBoolToObject(item, "enableCoupons", coupons_options->enable_coupons) == NULL) {
    goto fail; //Bool
    }
    }


    // coupons_options->calculate_coupons_secuentially
    if(coupons_options->calculate_coupons_secuentially) {
    if(cJSON_AddBoolToObject(item, "calculateCouponsSecuentially", coupons_options->calculate_coupons_secuentially) == NULL) {
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

coupons_options_t *coupons_options_parseFromJSON(cJSON *coupons_optionsJSON){

    coupons_options_t *coupons_options_local_var = NULL;

    // coupons_options->enable_coupons
    cJSON *enable_coupons = cJSON_GetObjectItemCaseSensitive(coupons_optionsJSON, "enableCoupons");
    if (enable_coupons) { 
    if(!cJSON_IsBool(enable_coupons))
    {
    goto end; //Bool
    }
    }

    // coupons_options->calculate_coupons_secuentially
    cJSON *calculate_coupons_secuentially = cJSON_GetObjectItemCaseSensitive(coupons_optionsJSON, "calculateCouponsSecuentially");
    if (calculate_coupons_secuentially) { 
    if(!cJSON_IsBool(calculate_coupons_secuentially))
    {
    goto end; //Bool
    }
    }


    coupons_options_local_var = coupons_options_create (
        enable_coupons ? enable_coupons->valueint : 0,
        calculate_coupons_secuentially ? calculate_coupons_secuentially->valueint : 0
        );

    return coupons_options_local_var;
end:
    return NULL;

}
