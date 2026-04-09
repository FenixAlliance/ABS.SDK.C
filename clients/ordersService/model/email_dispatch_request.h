/*
 * email_dispatch_request.h
 *
 * 
 */

#ifndef _email_dispatch_request_H_
#define _email_dispatch_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_dispatch_request_t email_dispatch_request_t;


// Enum ALERTTYPE for email_dispatch_request

typedef enum  { ordersservice_email_dispatch_request_ALERTTYPE_NULL = 0, ordersservice_email_dispatch_request_ALERTTYPE_None, ordersservice_email_dispatch_request_ALERTTYPE_Info, ordersservice_email_dispatch_request_ALERTTYPE_Error, ordersservice_email_dispatch_request_ALERTTYPE_Warning, ordersservice_email_dispatch_request_ALERTTYPE_Success, ordersservice_email_dispatch_request_ALERTTYPE_Action, ordersservice_email_dispatch_request_ALERTTYPE_Alert } ordersservice_email_dispatch_request_ALERTTYPE_e;

char* email_dispatch_request_alert_type_ToString(ordersservice_email_dispatch_request_ALERTTYPE_e alert_type);

ordersservice_email_dispatch_request_ALERTTYPE_e email_dispatch_request_alert_type_FromString(char* alert_type);



typedef struct email_dispatch_request_t {
    char *title; // string
    char *message; // string
    char *button_link; // string
    char *button_text; // string
    char *alert_message; // string
    ordersservice_email_dispatch_request_ALERTTYPE_e alert_type; //enum
    char *culture; // string
    char *ui_culture; // string
    list_t *recipients; //primitive container
    list_t *contact_ids; //primitive container
    list_t *tenant_ids; //primitive container
    list_t *user_ids; //primitive container
    char *template_url; // string
    char *email_template_id; // string

} email_dispatch_request_t;

email_dispatch_request_t *email_dispatch_request_create(
    char *title,
    char *message,
    char *button_link,
    char *button_text,
    char *alert_message,
    ordersservice_email_dispatch_request_ALERTTYPE_e alert_type,
    char *culture,
    char *ui_culture,
    list_t *recipients,
    list_t *contact_ids,
    list_t *tenant_ids,
    list_t *user_ids,
    char *template_url,
    char *email_template_id
);

void email_dispatch_request_free(email_dispatch_request_t *email_dispatch_request);

email_dispatch_request_t *email_dispatch_request_parseFromJSON(cJSON *email_dispatch_requestJSON);

cJSON *email_dispatch_request_convertToJSON(email_dispatch_request_t *email_dispatch_request);

#endif /* _email_dispatch_request_H_ */

