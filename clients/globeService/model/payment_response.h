/*
 * payment_response.h
 *
 * 
 */

#ifndef _payment_response_H_
#define _payment_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_response_t payment_response_t;

#include "any_type.h"

// Enum PAYMENTSTATUS for payment_response

typedef enum  { globeservice_payment_response_PAYMENTSTATUS_NULL = 0, globeservice_payment_response_PAYMENTSTATUS_Unset, globeservice_payment_response_PAYMENTSTATUS_Accepted, globeservice_payment_response_PAYMENTSTATUS_Rejected, globeservice_payment_response_PAYMENTSTATUS_OnHold, globeservice_payment_response_PAYMENTSTATUS_Failed, globeservice_payment_response_PAYMENTSTATUS_Reversed, globeservice_payment_response_PAYMENTSTATUS_Retained, globeservice_payment_response_PAYMENTSTATUS_Initialized, globeservice_payment_response_PAYMENTSTATUS_Expired, globeservice_payment_response_PAYMENTSTATUS_Abandoned, globeservice_payment_response_PAYMENTSTATUS_Cancelled, globeservice_payment_response_PAYMENTSTATUS_AcceptedRetained } globeservice_payment_response_PAYMENTSTATUS_e;

char* payment_response_payment_status_ToString(globeservice_payment_response_PAYMENTSTATUS_e payment_status);

globeservice_payment_response_PAYMENTSTATUS_e payment_response_payment_status_FromString(char* payment_status);



typedef struct payment_response_t {
    int test; //boolean
    char *ip; // string
    char *bank; // string
    char *status; // string
    any_type_t *errors; // custom
    char *response; // string
    char *auth_code; // string
    char *payment_id; // string
    char *franchise; // string
    char *signature; // string
    globeservice_payment_response_PAYMENTSTATUS_e payment_status; //enum

} payment_response_t;

payment_response_t *payment_response_create(
    int test,
    char *ip,
    char *bank,
    char *status,
    any_type_t *errors,
    char *response,
    char *auth_code,
    char *payment_id,
    char *franchise,
    char *signature,
    globeservice_payment_response_PAYMENTSTATUS_e payment_status
);

void payment_response_free(payment_response_t *payment_response);

payment_response_t *payment_response_parseFromJSON(cJSON *payment_responseJSON);

cJSON *payment_response_convertToJSON(payment_response_t *payment_response);

#endif /* _payment_response_H_ */

