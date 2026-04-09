/*
 * support_ticket_priority_dto.h
 *
 * 
 */

#ifndef _support_ticket_priority_dto_H_
#define _support_ticket_priority_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_priority_dto_t support_ticket_priority_dto_t;




typedef struct support_ticket_priority_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *business_id; // string
    char *support_entitlement_id; // string

} support_ticket_priority_dto_t;

support_ticket_priority_dto_t *support_ticket_priority_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *business_id,
    char *support_entitlement_id
);

void support_ticket_priority_dto_free(support_ticket_priority_dto_t *support_ticket_priority_dto);

support_ticket_priority_dto_t *support_ticket_priority_dto_parseFromJSON(cJSON *support_ticket_priority_dtoJSON);

cJSON *support_ticket_priority_dto_convertToJSON(support_ticket_priority_dto_t *support_ticket_priority_dto);

#endif /* _support_ticket_priority_dto_H_ */

