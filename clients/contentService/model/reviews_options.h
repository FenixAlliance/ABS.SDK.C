/*
 * reviews_options.h
 *
 * 
 */

#ifndef _reviews_options_H_
#define _reviews_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reviews_options_t reviews_options_t;




typedef struct reviews_options_t {
    int enable_reviews; //boolean
    int enable_star_ratings; //boolean
    int force_star_ratings; //boolean
    int display_verified_owner_badge; //boolean
    int force_verified_owner_verification; //boolean

} reviews_options_t;

reviews_options_t *reviews_options_create(
    int enable_reviews,
    int enable_star_ratings,
    int force_star_ratings,
    int display_verified_owner_badge,
    int force_verified_owner_verification
);

void reviews_options_free(reviews_options_t *reviews_options);

reviews_options_t *reviews_options_parseFromJSON(cJSON *reviews_optionsJSON);

cJSON *reviews_options_convertToJSON(reviews_options_t *reviews_options);

#endif /* _reviews_options_H_ */

