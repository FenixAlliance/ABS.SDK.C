#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_calculation_options.h"



tax_calculation_options_t *tax_calculation_options_create(
    int enable_taxes,
    int round_taxes_at_subtotal_level,
    char *display_price_suffix,
    char *display_price_prefix,
    list_t *standard_rates,
    list_t *zero_rate_rates,
    list_t *reduced_rate_rates,
    list_t* additional_tax_classes
    ) {
    tax_calculation_options_t *tax_calculation_options_local_var = malloc(sizeof(tax_calculation_options_t));
    if (!tax_calculation_options_local_var) {
        return NULL;
    }
    tax_calculation_options_local_var->enable_taxes = enable_taxes;
    tax_calculation_options_local_var->round_taxes_at_subtotal_level = round_taxes_at_subtotal_level;
    tax_calculation_options_local_var->display_price_suffix = display_price_suffix;
    tax_calculation_options_local_var->display_price_prefix = display_price_prefix;
    tax_calculation_options_local_var->standard_rates = standard_rates;
    tax_calculation_options_local_var->zero_rate_rates = zero_rate_rates;
    tax_calculation_options_local_var->reduced_rate_rates = reduced_rate_rates;
    tax_calculation_options_local_var->additional_tax_classes = additional_tax_classes;

    return tax_calculation_options_local_var;
}


void tax_calculation_options_free(tax_calculation_options_t *tax_calculation_options) {
    if(NULL == tax_calculation_options){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_calculation_options->display_price_suffix) {
        free(tax_calculation_options->display_price_suffix);
        tax_calculation_options->display_price_suffix = NULL;
    }
    if (tax_calculation_options->display_price_prefix) {
        free(tax_calculation_options->display_price_prefix);
        tax_calculation_options->display_price_prefix = NULL;
    }
    if (tax_calculation_options->standard_rates) {
        list_ForEach(listEntry, tax_calculation_options->standard_rates) {
            free(listEntry->data);
        }
        list_freeList(tax_calculation_options->standard_rates);
        tax_calculation_options->standard_rates = NULL;
    }
    if (tax_calculation_options->zero_rate_rates) {
        list_ForEach(listEntry, tax_calculation_options->zero_rate_rates) {
            free(listEntry->data);
        }
        list_freeList(tax_calculation_options->zero_rate_rates);
        tax_calculation_options->zero_rate_rates = NULL;
    }
    if (tax_calculation_options->reduced_rate_rates) {
        list_ForEach(listEntry, tax_calculation_options->reduced_rate_rates) {
            free(listEntry->data);
        }
        list_freeList(tax_calculation_options->reduced_rate_rates);
        tax_calculation_options->reduced_rate_rates = NULL;
    }
    if (tax_calculation_options->additional_tax_classes) {
        list_ForEach(listEntry, tax_calculation_options->additional_tax_classes) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(tax_calculation_options->additional_tax_classes);
        tax_calculation_options->additional_tax_classes = NULL;
    }
    free(tax_calculation_options);
}

cJSON *tax_calculation_options_convertToJSON(tax_calculation_options_t *tax_calculation_options) {
    cJSON *item = cJSON_CreateObject();

    // tax_calculation_options->enable_taxes
    if(tax_calculation_options->enable_taxes) {
    if(cJSON_AddBoolToObject(item, "enableTaxes", tax_calculation_options->enable_taxes) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_calculation_options->round_taxes_at_subtotal_level
    if(tax_calculation_options->round_taxes_at_subtotal_level) {
    if(cJSON_AddBoolToObject(item, "roundTaxesAtSubtotalLevel", tax_calculation_options->round_taxes_at_subtotal_level) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_calculation_options->display_price_suffix
    if(tax_calculation_options->display_price_suffix) {
    if(cJSON_AddStringToObject(item, "displayPriceSuffix", tax_calculation_options->display_price_suffix) == NULL) {
    goto fail; //String
    }
    }


    // tax_calculation_options->display_price_prefix
    if(tax_calculation_options->display_price_prefix) {
    if(cJSON_AddStringToObject(item, "displayPricePrefix", tax_calculation_options->display_price_prefix) == NULL) {
    goto fail; //String
    }
    }


    // tax_calculation_options->standard_rates
    if(tax_calculation_options->standard_rates) {
    cJSON *standard_rates = cJSON_AddArrayToObject(item, "standardRates");
    if(standard_rates == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *standard_ratesListEntry;
    list_ForEach(standard_ratesListEntry, tax_calculation_options->standard_rates) {
    if(cJSON_AddStringToObject(standard_rates, "", (char*)standard_ratesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // tax_calculation_options->zero_rate_rates
    if(tax_calculation_options->zero_rate_rates) {
    cJSON *zero_rate_rates = cJSON_AddArrayToObject(item, "zeroRateRates");
    if(zero_rate_rates == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *zero_rate_ratesListEntry;
    list_ForEach(zero_rate_ratesListEntry, tax_calculation_options->zero_rate_rates) {
    if(cJSON_AddStringToObject(zero_rate_rates, "", (char*)zero_rate_ratesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // tax_calculation_options->reduced_rate_rates
    if(tax_calculation_options->reduced_rate_rates) {
    cJSON *reduced_rate_rates = cJSON_AddArrayToObject(item, "reducedRateRates");
    if(reduced_rate_rates == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *reduced_rate_ratesListEntry;
    list_ForEach(reduced_rate_ratesListEntry, tax_calculation_options->reduced_rate_rates) {
    if(cJSON_AddStringToObject(reduced_rate_rates, "", (char*)reduced_rate_ratesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // tax_calculation_options->additional_tax_classes
    if(tax_calculation_options->additional_tax_classes) {
    cJSON *additional_tax_classes = cJSON_AddObjectToObject(item, "additionalTaxClasses");
    if(additional_tax_classes == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = additional_tax_classes;
    listEntry_t *additional_tax_classesListEntry;
    if (tax_calculation_options->additional_tax_classes) {
    list_ForEach(additional_tax_classesListEntry, tax_calculation_options->additional_tax_classes) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)additional_tax_classesListEntry->data;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tax_calculation_options_t *tax_calculation_options_parseFromJSON(cJSON *tax_calculation_optionsJSON){

    tax_calculation_options_t *tax_calculation_options_local_var = NULL;

    // define the local list for tax_calculation_options->standard_rates
    list_t *standard_ratesList = NULL;

    // define the local list for tax_calculation_options->zero_rate_rates
    list_t *zero_rate_ratesList = NULL;

    // define the local list for tax_calculation_options->reduced_rate_rates
    list_t *reduced_rate_ratesList = NULL;

    // define the local map for tax_calculation_options->additional_tax_classes
    list_t *additional_tax_classesList = NULL;

    // tax_calculation_options->enable_taxes
    cJSON *enable_taxes = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "enableTaxes");
    if (enable_taxes) { 
    if(!cJSON_IsBool(enable_taxes))
    {
    goto end; //Bool
    }
    }

    // tax_calculation_options->round_taxes_at_subtotal_level
    cJSON *round_taxes_at_subtotal_level = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "roundTaxesAtSubtotalLevel");
    if (round_taxes_at_subtotal_level) { 
    if(!cJSON_IsBool(round_taxes_at_subtotal_level))
    {
    goto end; //Bool
    }
    }

    // tax_calculation_options->display_price_suffix
    cJSON *display_price_suffix = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "displayPriceSuffix");
    if (display_price_suffix) { 
    if(!cJSON_IsString(display_price_suffix) && !cJSON_IsNull(display_price_suffix))
    {
    goto end; //String
    }
    }

    // tax_calculation_options->display_price_prefix
    cJSON *display_price_prefix = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "displayPricePrefix");
    if (display_price_prefix) { 
    if(!cJSON_IsString(display_price_prefix) && !cJSON_IsNull(display_price_prefix))
    {
    goto end; //String
    }
    }

    // tax_calculation_options->standard_rates
    cJSON *standard_rates = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "standardRates");
    if (standard_rates) { 
    cJSON *standard_rates_local = NULL;
    if(!cJSON_IsArray(standard_rates)) {
        goto end;//primitive container
    }
    standard_ratesList = list_createList();

    cJSON_ArrayForEach(standard_rates_local, standard_rates)
    {
        if(!cJSON_IsString(standard_rates_local))
        {
            goto end;
        }
        list_addElement(standard_ratesList , strdup(standard_rates_local->valuestring));
    }
    }

    // tax_calculation_options->zero_rate_rates
    cJSON *zero_rate_rates = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "zeroRateRates");
    if (zero_rate_rates) { 
    cJSON *zero_rate_rates_local = NULL;
    if(!cJSON_IsArray(zero_rate_rates)) {
        goto end;//primitive container
    }
    zero_rate_ratesList = list_createList();

    cJSON_ArrayForEach(zero_rate_rates_local, zero_rate_rates)
    {
        if(!cJSON_IsString(zero_rate_rates_local))
        {
            goto end;
        }
        list_addElement(zero_rate_ratesList , strdup(zero_rate_rates_local->valuestring));
    }
    }

    // tax_calculation_options->reduced_rate_rates
    cJSON *reduced_rate_rates = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "reducedRateRates");
    if (reduced_rate_rates) { 
    cJSON *reduced_rate_rates_local = NULL;
    if(!cJSON_IsArray(reduced_rate_rates)) {
        goto end;//primitive container
    }
    reduced_rate_ratesList = list_createList();

    cJSON_ArrayForEach(reduced_rate_rates_local, reduced_rate_rates)
    {
        if(!cJSON_IsString(reduced_rate_rates_local))
        {
            goto end;
        }
        list_addElement(reduced_rate_ratesList , strdup(reduced_rate_rates_local->valuestring));
    }
    }

    // tax_calculation_options->additional_tax_classes
    cJSON *additional_tax_classes = cJSON_GetObjectItemCaseSensitive(tax_calculation_optionsJSON, "additionalTaxClasses");
    if (additional_tax_classes) { 
    cJSON *additional_tax_classes_local_map = NULL;
    if(!cJSON_IsObject(additional_tax_classes) && !cJSON_IsNull(additional_tax_classes))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(additional_tax_classes))
    {
        additional_tax_classesList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(additional_tax_classes_local_map, additional_tax_classes)
        {
            cJSON *localMapObject = additional_tax_classes_local_map;
            list_addElement(additional_tax_classesList , localMapKeyPair);
        }
    }
    }


    tax_calculation_options_local_var = tax_calculation_options_create (
        enable_taxes ? enable_taxes->valueint : 0,
        round_taxes_at_subtotal_level ? round_taxes_at_subtotal_level->valueint : 0,
        display_price_suffix && !cJSON_IsNull(display_price_suffix) ? strdup(display_price_suffix->valuestring) : NULL,
        display_price_prefix && !cJSON_IsNull(display_price_prefix) ? strdup(display_price_prefix->valuestring) : NULL,
        standard_rates ? standard_ratesList : NULL,
        zero_rate_rates ? zero_rate_ratesList : NULL,
        reduced_rate_rates ? reduced_rate_ratesList : NULL,
        additional_tax_classes ? additional_tax_classesList : NULL
        );

    return tax_calculation_options_local_var;
end:
    if (standard_ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, standard_ratesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(standard_ratesList);
        standard_ratesList = NULL;
    }
    if (zero_rate_ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, zero_rate_ratesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(zero_rate_ratesList);
        zero_rate_ratesList = NULL;
    }
    if (reduced_rate_ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, reduced_rate_ratesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(reduced_rate_ratesList);
        reduced_rate_ratesList = NULL;
    }
    if (additional_tax_classesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, additional_tax_classesList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(additional_tax_classesList);
        additional_tax_classesList = NULL;
    }
    return NULL;

}
