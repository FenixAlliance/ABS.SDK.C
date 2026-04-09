/*
 * tax_calculation_options.h
 *
 * 
 */

#ifndef _tax_calculation_options_H_
#define _tax_calculation_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_calculation_options_t tax_calculation_options_t;




typedef struct tax_calculation_options_t {
    int enable_taxes; //boolean
    int round_taxes_at_subtotal_level; //boolean
    char *display_price_suffix; // string
    char *display_price_prefix; // string
    list_t *standard_rates; //primitive container
    list_t *zero_rate_rates; //primitive container
    list_t *reduced_rate_rates; //primitive container
    list_t* additional_tax_classes; //map

} tax_calculation_options_t;

tax_calculation_options_t *tax_calculation_options_create(
    int enable_taxes,
    int round_taxes_at_subtotal_level,
    char *display_price_suffix,
    char *display_price_prefix,
    list_t *standard_rates,
    list_t *zero_rate_rates,
    list_t *reduced_rate_rates,
    list_t* additional_tax_classes
);

void tax_calculation_options_free(tax_calculation_options_t *tax_calculation_options);

tax_calculation_options_t *tax_calculation_options_parseFromJSON(cJSON *tax_calculation_optionsJSON);

cJSON *tax_calculation_options_convertToJSON(tax_calculation_options_t *tax_calculation_options);

#endif /* _tax_calculation_options_H_ */

