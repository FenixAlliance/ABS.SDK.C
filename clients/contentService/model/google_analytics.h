/*
 * google_analytics.h
 *
 * 
 */

#ifndef _google_analytics_H_
#define _google_analytics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_analytics_t google_analytics_t;




typedef struct google_analytics_t {
    int enable; //boolean
    char *tracking_code; // string

} google_analytics_t;

google_analytics_t *google_analytics_create(
    int enable,
    char *tracking_code
);

void google_analytics_free(google_analytics_t *google_analytics);

google_analytics_t *google_analytics_parseFromJSON(cJSON *google_analyticsJSON);

cJSON *google_analytics_convertToJSON(google_analytics_t *google_analytics);

#endif /* _google_analytics_H_ */

