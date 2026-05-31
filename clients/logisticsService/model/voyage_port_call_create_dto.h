/*
 * voyage_port_call_create_dto.h
 *
 * 
 */

#ifndef _voyage_port_call_create_dto_H_
#define _voyage_port_call_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_port_call_create_dto_t voyage_port_call_create_dto_t;




typedef struct voyage_port_call_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int sequence_number; //numeric
    char *port_call_status; // string
    char *eta; //date time
    char *etd; //date time
    char *berth_number; // string
    char *remarks; // string
    char *port_id; // string

} voyage_port_call_create_dto_t;

voyage_port_call_create_dto_t *voyage_port_call_create_dto_create(
    char *id,
    char *timestamp,
    int sequence_number,
    char *port_call_status,
    char *eta,
    char *etd,
    char *berth_number,
    char *remarks,
    char *port_id
);

void voyage_port_call_create_dto_free(voyage_port_call_create_dto_t *voyage_port_call_create_dto);

voyage_port_call_create_dto_t *voyage_port_call_create_dto_parseFromJSON(cJSON *voyage_port_call_create_dtoJSON);

cJSON *voyage_port_call_create_dto_convertToJSON(voyage_port_call_create_dto_t *voyage_port_call_create_dto);

#endif /* _voyage_port_call_create_dto_H_ */

