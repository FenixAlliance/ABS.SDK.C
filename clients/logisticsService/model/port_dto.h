/*
 * port_dto.h
 *
 * 
 */

#ifndef _port_dto_H_
#define _port_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct port_dto_t port_dto_t;




typedef struct port_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *company; // string
    char *email; // string
    char *address1; // string
    char *address2; // string
    char *address3; // string
    char *unit; // string
    char *custom_city; // string
    char *custom_state; // string
    char *postal_code; // string
    char *phone; // string
    char *fax; // string
    double longitude; //numeric
    double latitude; //numeric
    char *country_id; // string
    char *country_state_id; // string
    char *city_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *un_locode; // string
    char *iata_code; // string
    char *port_type; // string
    char *port_authority; // string
    int has_customs_facility; //boolean
    int is_free_tradezone; //boolean
    int is_active; //boolean
    char *parent_port_id; // string

} port_dto_t;

port_dto_t *port_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *company,
    char *email,
    char *address1,
    char *address2,
    char *address3,
    char *unit,
    char *custom_city,
    char *custom_state,
    char *postal_code,
    char *phone,
    char *fax,
    double longitude,
    double latitude,
    char *country_id,
    char *country_state_id,
    char *city_id,
    char *tenant_id,
    char *enrollment_id,
    char *un_locode,
    char *iata_code,
    char *port_type,
    char *port_authority,
    int has_customs_facility,
    int is_free_tradezone,
    int is_active,
    char *parent_port_id
);

void port_dto_free(port_dto_t *port_dto);

port_dto_t *port_dto_parseFromJSON(cJSON *port_dtoJSON);

cJSON *port_dto_convertToJSON(port_dto_t *port_dto);

#endif /* _port_dto_H_ */

