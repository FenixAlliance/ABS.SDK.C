/*
 * support_ticket_conversation_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _support_ticket_conversation_dto_collection_query_parameters_H_
#define _support_ticket_conversation_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_conversation_dto_collection_query_parameters_t support_ticket_conversation_dto_collection_query_parameters_t;




typedef struct support_ticket_conversation_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} support_ticket_conversation_dto_collection_query_parameters_t;

support_ticket_conversation_dto_collection_query_parameters_t *support_ticket_conversation_dto_collection_query_parameters_create(
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

void support_ticket_conversation_dto_collection_query_parameters_free(support_ticket_conversation_dto_collection_query_parameters_t *support_ticket_conversation_dto_collection_query_parameters);

support_ticket_conversation_dto_collection_query_parameters_t *support_ticket_conversation_dto_collection_query_parameters_parseFromJSON(cJSON *support_ticket_conversation_dto_collection_query_parametersJSON);

cJSON *support_ticket_conversation_dto_collection_query_parameters_convertToJSON(support_ticket_conversation_dto_collection_query_parameters_t *support_ticket_conversation_dto_collection_query_parameters);

#endif /* _support_ticket_conversation_dto_collection_query_parameters_H_ */

