#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "price_calculation_options.h"



price_calculation_options_t *price_calculation_options_create(
    char *pricing_list_id
    ) {
    price_calculation_options_t *price_calculation_options_local_var = malloc(sizeof(price_calculation_options_t));
    if (!price_calculation_options_local_var) {
        return NULL;
    }
    price_calculation_options_local_var->pricing_list_id = pricing_list_id;

    return price_calculation_options_local_var;
}


void price_calculation_options_free(price_calculation_options_t *price_calculation_options) {
    if(NULL == price_calculation_options){
        return ;
    }
    listEntry_t *listEntry;
    if (price_calculation_options->pricing_list_id) {
        free(price_calculation_options->pricing_list_id);
        price_calculation_options->pricing_list_id = NULL;
    }
    free(price_calculation_options);
}

cJSON *price_calculation_options_convertToJSON(price_calculation_options_t *price_calculation_options) {
    cJSON *item = cJSON_CreateObject();

    // price_calculation_options->pricing_list_id
    if(price_calculation_options->pricing_list_id) {
    if(cJSON_AddStringToObject(item, "pricingListID", price_calculation_options->pricing_list_id) == NULL) {
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

price_calculation_options_t *price_calculation_options_parseFromJSON(cJSON *price_calculation_optionsJSON){

    price_calculation_options_t *price_calculation_options_local_var = NULL;

    // price_calculation_options->pricing_list_id
    cJSON *pricing_list_id = cJSON_GetObjectItemCaseSensitive(price_calculation_optionsJSON, "pricingListID");
    if (pricing_list_id) { 
    if(!cJSON_IsString(pricing_list_id) && !cJSON_IsNull(pricing_list_id))
    {
    goto end; //String
    }
    }


    price_calculation_options_local_var = price_calculation_options_create (
        pricing_list_id && !cJSON_IsNull(pricing_list_id) ? strdup(pricing_list_id->valuestring) : NULL
        );

    return price_calculation_options_local_var;
end:
    return NULL;

}
