/*
 * coupons_options.h
 *
 * 
 */

#ifndef _coupons_options_H_
#define _coupons_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupons_options_t coupons_options_t;




typedef struct coupons_options_t {
    int enable_coupons; //boolean
    int calculate_coupons_secuentially; //boolean

} coupons_options_t;

coupons_options_t *coupons_options_create(
    int enable_coupons,
    int calculate_coupons_secuentially
);

void coupons_options_free(coupons_options_t *coupons_options);

coupons_options_t *coupons_options_parseFromJSON(cJSON *coupons_optionsJSON);

cJSON *coupons_options_convertToJSON(coupons_options_t *coupons_options);

#endif /* _coupons_options_H_ */

