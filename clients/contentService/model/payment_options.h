/*
 * payment_options.h
 *
 * 
 */

#ifndef _payment_options_H_
#define _payment_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_options_t payment_options_t;

#include "payment_method.h"



typedef struct payment_options_t {
    list_t *payment_methods; //nonprimitive container

} payment_options_t;

payment_options_t *payment_options_create(
    list_t *payment_methods
);

void payment_options_free(payment_options_t *payment_options);

payment_options_t *payment_options_parseFromJSON(cJSON *payment_optionsJSON);

cJSON *payment_options_convertToJSON(payment_options_t *payment_options);

#endif /* _payment_options_H_ */

