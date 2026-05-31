/*
 * ip_lookup_dto.h
 *
 * 
 */

#ifndef _ip_lookup_dto_H_
#define _ip_lookup_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ip_lookup_dto_t ip_lookup_dto_t;




typedef struct ip_lookup_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *ip; // string
    char *ua; // string
    char *city; // string

} ip_lookup_dto_t;

ip_lookup_dto_t *ip_lookup_dto_create(
    char *id,
    char *timestamp,
    char *ip,
    char *ua,
    char *city
);

void ip_lookup_dto_free(ip_lookup_dto_t *ip_lookup_dto);

ip_lookup_dto_t *ip_lookup_dto_parseFromJSON(cJSON *ip_lookup_dtoJSON);

cJSON *ip_lookup_dto_convertToJSON(ip_lookup_dto_t *ip_lookup_dto);

#endif /* _ip_lookup_dto_H_ */

