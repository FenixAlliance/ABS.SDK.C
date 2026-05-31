/*
 * seed_chart_of_accounts_request.h
 *
 * 
 */

#ifndef _seed_chart_of_accounts_request_H_
#define _seed_chart_of_accounts_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct seed_chart_of_accounts_request_t seed_chart_of_accounts_request_t;




typedef struct seed_chart_of_accounts_request_t {
    char *file_url; // string

} seed_chart_of_accounts_request_t;

seed_chart_of_accounts_request_t *seed_chart_of_accounts_request_create(
    char *file_url
);

void seed_chart_of_accounts_request_free(seed_chart_of_accounts_request_t *seed_chart_of_accounts_request);

seed_chart_of_accounts_request_t *seed_chart_of_accounts_request_parseFromJSON(cJSON *seed_chart_of_accounts_requestJSON);

cJSON *seed_chart_of_accounts_request_convertToJSON(seed_chart_of_accounts_request_t *seed_chart_of_accounts_request);

#endif /* _seed_chart_of_accounts_request_H_ */

