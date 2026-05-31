/*
 * voyage_port_call_dto.h
 *
 * 
 */

#ifndef _voyage_port_call_dto_H_
#define _voyage_port_call_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_port_call_dto_t voyage_port_call_dto_t;




typedef struct voyage_port_call_dto_t {
    char *id; // string
    char *timestamp; //date time
    int sequence_number; //numeric
    char *port_call_status; // string
    char *eta; //date time
    char *ata; //date time
    char *etd; //date time
    char *atd; //date time
    char *berth_number; // string
    char *remarks; // string
    char *voyage_id; // string
    char *port_id; // string
    char *tenant_id; // string

} voyage_port_call_dto_t;

voyage_port_call_dto_t *voyage_port_call_dto_create(
    char *id,
    char *timestamp,
    int sequence_number,
    char *port_call_status,
    char *eta,
    char *ata,
    char *etd,
    char *atd,
    char *berth_number,
    char *remarks,
    char *voyage_id,
    char *port_id,
    char *tenant_id
);

void voyage_port_call_dto_free(voyage_port_call_dto_t *voyage_port_call_dto);

voyage_port_call_dto_t *voyage_port_call_dto_parseFromJSON(cJSON *voyage_port_call_dtoJSON);

cJSON *voyage_port_call_dto_convertToJSON(voyage_port_call_dto_t *voyage_port_call_dto);

#endif /* _voyage_port_call_dto_H_ */

