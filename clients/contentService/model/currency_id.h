/*
 * currency_id.h
 *
 * 
 */

#ifndef _currency_id_H_
#define _currency_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_id_t currency_id_t;




typedef struct currency_id_t {
    char *value; // string
    char *code; // string
    char *country; // string

} currency_id_t;

currency_id_t *currency_id_create(
    char *value,
    char *code,
    char *country
);

void currency_id_free(currency_id_t *currency_id);

currency_id_t *currency_id_parseFromJSON(cJSON *currency_idJSON);

cJSON *currency_id_convertToJSON(currency_id_t *currency_id);

#endif /* _currency_id_H_ */

