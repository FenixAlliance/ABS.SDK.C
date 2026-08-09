/*
 * email_signature_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _email_signature_dto_collection_query_parameters_H_
#define _email_signature_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_signature_dto_collection_query_parameters_t email_signature_dto_collection_query_parameters_t;




typedef struct email_signature_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} email_signature_dto_collection_query_parameters_t;

email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters_create(
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

void email_signature_dto_collection_query_parameters_free(email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters);

email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters_parseFromJSON(cJSON *email_signature_dto_collection_query_parametersJSON);

cJSON *email_signature_dto_collection_query_parameters_convertToJSON(email_signature_dto_collection_query_parameters_t *email_signature_dto_collection_query_parameters);

#endif /* _email_signature_dto_collection_query_parameters_H_ */

