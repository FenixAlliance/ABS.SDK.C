/*
 * http_validation_problem_details.h
 *
 * 
 */

#ifndef _http_validation_problem_details_H_
#define _http_validation_problem_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct http_validation_problem_details_t http_validation_problem_details_t;

#include "any_type.h"



typedef struct http_validation_problem_details_t {
    char *type; // string
    char *title; // string
    int status; //numeric
    char *detail; // string
    char *instance; // string
    list_t* errors; //map

} http_validation_problem_details_t;

http_validation_problem_details_t *http_validation_problem_details_create(
    char *type,
    char *title,
    int status,
    char *detail,
    char *instance,
    list_t* errors
);

void http_validation_problem_details_free(http_validation_problem_details_t *http_validation_problem_details);

http_validation_problem_details_t *http_validation_problem_details_parseFromJSON(cJSON *http_validation_problem_detailsJSON);

cJSON *http_validation_problem_details_convertToJSON(http_validation_problem_details_t *http_validation_problem_details);

#endif /* _http_validation_problem_details_H_ */

