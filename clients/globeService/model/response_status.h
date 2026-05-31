/*
 * response_status.h
 *
 * 
 */

#ifndef _response_status_H_
#define _response_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_status_t response_status_t;

#include "error.h"



typedef struct response_status_t {
    int success; //boolean
    struct error_t *error; //model
    char *correlation_id; // string
    char *utc_timestamp; //date time

} response_status_t;

response_status_t *response_status_create(
    int success,
    error_t *error,
    char *correlation_id,
    char *utc_timestamp
);

void response_status_free(response_status_t *response_status);

response_status_t *response_status_parseFromJSON(cJSON *response_statusJSON);

cJSON *response_status_convertToJSON(response_status_t *response_status);

#endif /* _response_status_H_ */

