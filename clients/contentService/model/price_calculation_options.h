/*
 * price_calculation_options.h
 *
 * 
 */

#ifndef _price_calculation_options_H_
#define _price_calculation_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_calculation_options_t price_calculation_options_t;




typedef struct price_calculation_options_t {
    char *pricing_list_id; // string

} price_calculation_options_t;

price_calculation_options_t *price_calculation_options_create(
    char *pricing_list_id
);

void price_calculation_options_free(price_calculation_options_t *price_calculation_options);

price_calculation_options_t *price_calculation_options_parseFromJSON(cJSON *price_calculation_optionsJSON);

cJSON *price_calculation_options_convertToJSON(price_calculation_options_t *price_calculation_options);

#endif /* _price_calculation_options_H_ */

