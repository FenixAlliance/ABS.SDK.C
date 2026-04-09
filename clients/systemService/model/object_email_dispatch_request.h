/*
 * object_email_dispatch_request.h
 *
 * 
 */

#ifndef _object_email_dispatch_request_H_
#define _object_email_dispatch_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct object_email_dispatch_request_t object_email_dispatch_request_t;

#include "any_type.h"

// Enum ALERTTYPE for object_email_dispatch_request

typedef enum  { systemservice_object_email_dispatch_request_ALERTTYPE_NULL = 0, systemservice_object_email_dispatch_request_ALERTTYPE_None, systemservice_object_email_dispatch_request_ALERTTYPE_Info, systemservice_object_email_dispatch_request_ALERTTYPE_Error, systemservice_object_email_dispatch_request_ALERTTYPE_Warning, systemservice_object_email_dispatch_request_ALERTTYPE_Success, systemservice_object_email_dispatch_request_ALERTTYPE_Action, systemservice_object_email_dispatch_request_ALERTTYPE_Alert } systemservice_object_email_dispatch_request_ALERTTYPE_e;

char* object_email_dispatch_request_alert_type_ToString(systemservice_object_email_dispatch_request_ALERTTYPE_e alert_type);

systemservice_object_email_dispatch_request_ALERTTYPE_e object_email_dispatch_request_alert_type_FromString(char* alert_type);



typedef struct object_email_dispatch_request_t {
    char *title; // string
    char *message; // string
    char *button_link; // string
    char *button_text; // string
    char *alert_message; // string
    systemservice_object_email_dispatch_request_ALERTTYPE_e alert_type; //enum
    char *culture; // string
    char *ui_culture; // string
    list_t *recipients; //primitive container
    list_t *contact_ids; //primitive container
    list_t *tenant_ids; //primitive container
    list_t *user_ids; //primitive container
    char *template_url; // string
    char *email_template_id; // string
    any_type_t *payload; // custom

} object_email_dispatch_request_t;

object_email_dispatch_request_t *object_email_dispatch_request_create(
    char *title,
    char *message,
    char *button_link,
    char *button_text,
    char *alert_message,
    systemservice_object_email_dispatch_request_ALERTTYPE_e alert_type,
    char *culture,
    char *ui_culture,
    list_t *recipients,
    list_t *contact_ids,
    list_t *tenant_ids,
    list_t *user_ids,
    char *template_url,
    char *email_template_id,
    any_type_t *payload
);

void object_email_dispatch_request_free(object_email_dispatch_request_t *object_email_dispatch_request);

object_email_dispatch_request_t *object_email_dispatch_request_parseFromJSON(cJSON *object_email_dispatch_requestJSON);

cJSON *object_email_dispatch_request_convertToJSON(object_email_dispatch_request_t *object_email_dispatch_request);

#endif /* _object_email_dispatch_request_H_ */

