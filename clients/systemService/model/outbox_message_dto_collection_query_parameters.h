/*
 * outbox_message_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _outbox_message_dto_collection_query_parameters_H_
#define _outbox_message_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct outbox_message_dto_collection_query_parameters_t outbox_message_dto_collection_query_parameters_t;




typedef struct outbox_message_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} outbox_message_dto_collection_query_parameters_t;

outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters_create(
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

void outbox_message_dto_collection_query_parameters_free(outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters);

outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters_parseFromJSON(cJSON *outbox_message_dto_collection_query_parametersJSON);

cJSON *outbox_message_dto_collection_query_parameters_convertToJSON(outbox_message_dto_collection_query_parameters_t *outbox_message_dto_collection_query_parameters);

#endif /* _outbox_message_dto_collection_query_parameters_H_ */

