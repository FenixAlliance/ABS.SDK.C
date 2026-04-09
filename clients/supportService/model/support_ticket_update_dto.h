/*
 * support_ticket_update_dto.h
 *
 * 
 */

#ifndef _support_ticket_update_dto_H_
#define _support_ticket_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_update_dto_t support_ticket_update_dto_t;




typedef struct support_ticket_update_dto_t {
    char *description; // string
    char *account_holder_id; // string
    char *contact_id; // string
    char *business_profile_record_id; // string
    char *support_ticket_type_id; // string
    char *support_entitlement_id; // string
    char *support_priority_id; // string

} support_ticket_update_dto_t;

support_ticket_update_dto_t *support_ticket_update_dto_create(
    char *description,
    char *account_holder_id,
    char *contact_id,
    char *business_profile_record_id,
    char *support_ticket_type_id,
    char *support_entitlement_id,
    char *support_priority_id
);

void support_ticket_update_dto_free(support_ticket_update_dto_t *support_ticket_update_dto);

support_ticket_update_dto_t *support_ticket_update_dto_parseFromJSON(cJSON *support_ticket_update_dtoJSON);

cJSON *support_ticket_update_dto_convertToJSON(support_ticket_update_dto_t *support_ticket_update_dto);

#endif /* _support_ticket_update_dto_H_ */

