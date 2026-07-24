/*
 * resend_confirmation_email_request.h
 *
 * 
 */

#ifndef _resend_confirmation_email_request_H_
#define _resend_confirmation_email_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resend_confirmation_email_request_t resend_confirmation_email_request_t;




typedef struct resend_confirmation_email_request_t {
    char *email; // string

} resend_confirmation_email_request_t;

resend_confirmation_email_request_t *resend_confirmation_email_request_create(
    char *email
);

void resend_confirmation_email_request_free(resend_confirmation_email_request_t *resend_confirmation_email_request);

resend_confirmation_email_request_t *resend_confirmation_email_request_parseFromJSON(cJSON *resend_confirmation_email_requestJSON);

cJSON *resend_confirmation_email_request_convertToJSON(resend_confirmation_email_request_t *resend_confirmation_email_request);

#endif /* _resend_confirmation_email_request_H_ */

