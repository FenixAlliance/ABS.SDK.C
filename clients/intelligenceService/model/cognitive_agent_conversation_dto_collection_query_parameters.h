/*
 * cognitive_agent_conversation_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _cognitive_agent_conversation_dto_collection_query_parameters_H_
#define _cognitive_agent_conversation_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_conversation_dto_collection_query_parameters_t cognitive_agent_conversation_dto_collection_query_parameters_t;




typedef struct cognitive_agent_conversation_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} cognitive_agent_conversation_dto_collection_query_parameters_t;

cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters_create(
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

void cognitive_agent_conversation_dto_collection_query_parameters_free(cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters);

cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters_parseFromJSON(cJSON *cognitive_agent_conversation_dto_collection_query_parametersJSON);

cJSON *cognitive_agent_conversation_dto_collection_query_parameters_convertToJSON(cognitive_agent_conversation_dto_collection_query_parameters_t *cognitive_agent_conversation_dto_collection_query_parameters);

#endif /* _cognitive_agent_conversation_dto_collection_query_parameters_H_ */

