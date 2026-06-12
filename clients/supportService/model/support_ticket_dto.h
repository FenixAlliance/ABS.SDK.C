/*
 * support_ticket_dto.h
 *
 * 
 */

#ifndef _support_ticket_dto_H_
#define _support_ticket_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_dto_t support_ticket_dto_t;


// Enum SUPPORTTICKETSTATUS for support_ticket_dto

typedef enum  { supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_NULL = 0, supportservice_support_ticket_dto_SUPPORTTICKETSTATUS__New, supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_OpenAndWaitingForAgent, supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_OpenAndWaitingForCustomer, supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_Closed } supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e;

char* support_ticket_dto_support_ticket_status_ToString(supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_status);

supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_dto_support_ticket_status_FromString(char* support_ticket_status);



typedef struct support_ticket_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_status; //enum
    char *user_id; // string
    char *contact_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *support_ticket_type_id; // string
    char *support_entitlement_id; // string
    char *support_priority_id; // string

} support_ticket_dto_t;

support_ticket_dto_t *support_ticket_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    supportservice_support_ticket_dto_SUPPORTTICKETSTATUS_e support_ticket_status,
    char *user_id,
    char *contact_id,
    char *tenant_id,
    char *enrollment_id,
    char *support_ticket_type_id,
    char *support_entitlement_id,
    char *support_priority_id
);

void support_ticket_dto_free(support_ticket_dto_t *support_ticket_dto);

support_ticket_dto_t *support_ticket_dto_parseFromJSON(cJSON *support_ticket_dtoJSON);

cJSON *support_ticket_dto_convertToJSON(support_ticket_dto_t *support_ticket_dto);

#endif /* _support_ticket_dto_H_ */

