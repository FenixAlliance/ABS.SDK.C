/*
 * support_ticket_type_create_dto.h
 *
 * 
 */

#ifndef _support_ticket_type_create_dto_H_
#define _support_ticket_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_type_create_dto_t support_ticket_type_create_dto_t;




typedef struct support_ticket_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string

} support_ticket_type_create_dto_t;

support_ticket_type_create_dto_t *support_ticket_type_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
);

void support_ticket_type_create_dto_free(support_ticket_type_create_dto_t *support_ticket_type_create_dto);

support_ticket_type_create_dto_t *support_ticket_type_create_dto_parseFromJSON(cJSON *support_ticket_type_create_dtoJSON);

cJSON *support_ticket_type_create_dto_convertToJSON(support_ticket_type_create_dto_t *support_ticket_type_create_dto);

#endif /* _support_ticket_type_create_dto_H_ */

