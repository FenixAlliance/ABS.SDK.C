/*
 * job_title_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _job_title_dto_collection_query_parameters_H_
#define _job_title_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_title_dto_collection_query_parameters_t job_title_dto_collection_query_parameters_t;




typedef struct job_title_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} job_title_dto_collection_query_parameters_t;

job_title_dto_collection_query_parameters_t *job_title_dto_collection_query_parameters_create(
    int top,
    int skip,
    int count,
    char *filter,
    char *order_by,
    char *search,
    char *select,
    char *expand,
    int is_empty
);

void job_title_dto_collection_query_parameters_free(job_title_dto_collection_query_parameters_t *job_title_dto_collection_query_parameters);

job_title_dto_collection_query_parameters_t *job_title_dto_collection_query_parameters_parseFromJSON(cJSON *job_title_dto_collection_query_parametersJSON);

cJSON *job_title_dto_collection_query_parameters_convertToJSON(job_title_dto_collection_query_parameters_t *job_title_dto_collection_query_parameters);

#endif /* _job_title_dto_collection_query_parameters_H_ */

