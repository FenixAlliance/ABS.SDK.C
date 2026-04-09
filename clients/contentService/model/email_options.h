/*
 * email_options.h
 *
 * 
 */

#ifndef _email_options_H_
#define _email_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_options_t email_options_t;




typedef struct email_options_t {
    char *from_name; // string
    char *from_email_address; // string
    char *header_image; // string
    char *footer_text; // string
    char *base_color; // string
    char *background_color; // string
    char *body_background_color; // string
    char *body_text_color; // string
    char *new_order_email_id; // string
    char *cancelled_order_email_id; // string
    char *failed_order_email_id; // string
    char *on_hold_order_email_id; // string
    char *processing_order_email_id; // string
    char *completed_order_email_id; // string
    char *refunded_order_email_id; // string
    char *order_details_email_id; // string
    char *customer_invoice_email_id; // string
    char *customer_note_email_id; // string
    char *password_reset_email_id; // string
    char *new_renewal_order_email_id; // string
    char *new_subscription_email_id; // string
    char *subscription_welcome_email_id; // string
    char *suspended_subscription_email_id; // string
    char *overdue_subscription_email_id; // string
    char *expired_subscription_email_id; // string
    char *switched_subscription_email_id; // string
    char *new_account_email_id; // string

} email_options_t;

email_options_t *email_options_create(
    char *from_name,
    char *from_email_address,
    char *header_image,
    char *footer_text,
    char *base_color,
    char *background_color,
    char *body_background_color,
    char *body_text_color,
    char *new_order_email_id,
    char *cancelled_order_email_id,
    char *failed_order_email_id,
    char *on_hold_order_email_id,
    char *processing_order_email_id,
    char *completed_order_email_id,
    char *refunded_order_email_id,
    char *order_details_email_id,
    char *customer_invoice_email_id,
    char *customer_note_email_id,
    char *password_reset_email_id,
    char *new_renewal_order_email_id,
    char *new_subscription_email_id,
    char *subscription_welcome_email_id,
    char *suspended_subscription_email_id,
    char *overdue_subscription_email_id,
    char *expired_subscription_email_id,
    char *switched_subscription_email_id,
    char *new_account_email_id
);

void email_options_free(email_options_t *email_options);

email_options_t *email_options_parseFromJSON(cJSON *email_optionsJSON);

cJSON *email_options_convertToJSON(email_options_t *email_options);

#endif /* _email_options_H_ */

