/*
 * recommendation_options.h
 *
 * 
 */

#ifndef _recommendation_options_H_
#define _recommendation_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct recommendation_options_t recommendation_options_t;




typedef struct recommendation_options_t {
    double view_weight; //numeric
    double add_to_cart_weight; //numeric
    double removed_from_cart_weight; //numeric
    double added_to_wishlist_weight; //numeric
    double already_purchased_weight; //numeric
    double removed_to_wishlist_weight; //numeric
    double added_to_compare_table_weight; //numeric
    double removed_to_compare_table_weight; //numeric
    int enable_cross_selling; //boolean
    int enable_bundled_products; //boolean
    int enable_recently_viewed_products; //boolean

} recommendation_options_t;

recommendation_options_t *recommendation_options_create(
    double view_weight,
    double add_to_cart_weight,
    double removed_from_cart_weight,
    double added_to_wishlist_weight,
    double already_purchased_weight,
    double removed_to_wishlist_weight,
    double added_to_compare_table_weight,
    double removed_to_compare_table_weight,
    int enable_cross_selling,
    int enable_bundled_products,
    int enable_recently_viewed_products
);

void recommendation_options_free(recommendation_options_t *recommendation_options);

recommendation_options_t *recommendation_options_parseFromJSON(cJSON *recommendation_optionsJSON);

cJSON *recommendation_options_convertToJSON(recommendation_options_t *recommendation_options);

#endif /* _recommendation_options_H_ */

