/*
 * address_dto.h
 *
 * 
 */

#ifndef _address_dto_H_
#define _address_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_dto_t address_dto_t;




typedef struct address_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *business; // string
    char *email; // string
    char *phone; // string
    char *fax; // string
    char *address1; // string
    char *address2; // string
    char *address3; // string
    char *unit; // string
    char *city_id; // string
    char *state_id; // string
    char *postal_code; // string
    char *country_id; // string
    double longitude; //numeric
    double latitude; //numeric
    int is_routable; //boolean
    int is_global_primary; //boolean
    int is_country_primary; //boolean
    int can_generate_labels; //boolean
    int is_default_sender_address; //boolean
    int is_default_return_address; //boolean
    int is_default_supping_location; //boolean

} address_dto_t;

address_dto_t *address_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *business,
    char *email,
    char *phone,
    char *fax,
    char *address1,
    char *address2,
    char *address3,
    char *unit,
    char *city_id,
    char *state_id,
    char *postal_code,
    char *country_id,
    double longitude,
    double latitude,
    int is_routable,
    int is_global_primary,
    int is_country_primary,
    int can_generate_labels,
    int is_default_sender_address,
    int is_default_return_address,
    int is_default_supping_location
);

void address_dto_free(address_dto_t *address_dto);

address_dto_t *address_dto_parseFromJSON(cJSON *address_dtoJSON);

cJSON *address_dto_convertToJSON(address_dto_t *address_dto);

#endif /* _address_dto_H_ */

