/*
 * cart_options.h
 *
 * 
 */

#ifndef _cart_options_H_
#define _cart_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_options_t cart_options_t;




typedef struct cart_options_t {
    int enable_guest_cart; //boolean
    char *product_placeholder_image; // string
    int redirect_to_cart_page_after_adding_products; //boolean

} cart_options_t;

cart_options_t *cart_options_create(
    int enable_guest_cart,
    char *product_placeholder_image,
    int redirect_to_cart_page_after_adding_products
);

void cart_options_free(cart_options_t *cart_options);

cart_options_t *cart_options_parseFromJSON(cJSON *cart_optionsJSON);

cJSON *cart_options_convertToJSON(cart_options_t *cart_options);

#endif /* _cart_options_H_ */

