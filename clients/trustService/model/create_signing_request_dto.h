/*
 * create_signing_request_dto.h
 *
 * 
 */

#ifndef _create_signing_request_dto_H_
#define _create_signing_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_signing_request_dto_t create_signing_request_dto_t;


// Enum ROUTINGMODE for create_signing_request_dto

typedef enum  { trustservice_create_signing_request_dto_ROUTINGMODE_NULL = 0, trustservice_create_signing_request_dto_ROUTINGMODE_Parallel, trustservice_create_signing_request_dto_ROUTINGMODE_Sequential } trustservice_create_signing_request_dto_ROUTINGMODE_e;

char* create_signing_request_dto_routing_mode_ToString(trustservice_create_signing_request_dto_ROUTINGMODE_e routing_mode);

trustservice_create_signing_request_dto_ROUTINGMODE_e create_signing_request_dto_routing_mode_FromString(char* routing_mode);



typedef struct create_signing_request_dto_t {
    trustservice_create_signing_request_dto_ROUTINGMODE_e routing_mode; //enum
    char *expires_at_utc; //date time
    char *message; // string
    char *correlation_id; // string
    char *external_reference; // string

} create_signing_request_dto_t;

create_signing_request_dto_t *create_signing_request_dto_create(
    trustservice_create_signing_request_dto_ROUTINGMODE_e routing_mode,
    char *expires_at_utc,
    char *message,
    char *correlation_id,
    char *external_reference
);

void create_signing_request_dto_free(create_signing_request_dto_t *create_signing_request_dto);

create_signing_request_dto_t *create_signing_request_dto_parseFromJSON(cJSON *create_signing_request_dtoJSON);

cJSON *create_signing_request_dto_convertToJSON(create_signing_request_dto_t *create_signing_request_dto);

#endif /* _create_signing_request_dto_H_ */

