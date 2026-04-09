#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_options.h"



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
    ) {
    email_options_t *email_options_local_var = malloc(sizeof(email_options_t));
    if (!email_options_local_var) {
        return NULL;
    }
    email_options_local_var->from_name = from_name;
    email_options_local_var->from_email_address = from_email_address;
    email_options_local_var->header_image = header_image;
    email_options_local_var->footer_text = footer_text;
    email_options_local_var->base_color = base_color;
    email_options_local_var->background_color = background_color;
    email_options_local_var->body_background_color = body_background_color;
    email_options_local_var->body_text_color = body_text_color;
    email_options_local_var->new_order_email_id = new_order_email_id;
    email_options_local_var->cancelled_order_email_id = cancelled_order_email_id;
    email_options_local_var->failed_order_email_id = failed_order_email_id;
    email_options_local_var->on_hold_order_email_id = on_hold_order_email_id;
    email_options_local_var->processing_order_email_id = processing_order_email_id;
    email_options_local_var->completed_order_email_id = completed_order_email_id;
    email_options_local_var->refunded_order_email_id = refunded_order_email_id;
    email_options_local_var->order_details_email_id = order_details_email_id;
    email_options_local_var->customer_invoice_email_id = customer_invoice_email_id;
    email_options_local_var->customer_note_email_id = customer_note_email_id;
    email_options_local_var->password_reset_email_id = password_reset_email_id;
    email_options_local_var->new_renewal_order_email_id = new_renewal_order_email_id;
    email_options_local_var->new_subscription_email_id = new_subscription_email_id;
    email_options_local_var->subscription_welcome_email_id = subscription_welcome_email_id;
    email_options_local_var->suspended_subscription_email_id = suspended_subscription_email_id;
    email_options_local_var->overdue_subscription_email_id = overdue_subscription_email_id;
    email_options_local_var->expired_subscription_email_id = expired_subscription_email_id;
    email_options_local_var->switched_subscription_email_id = switched_subscription_email_id;
    email_options_local_var->new_account_email_id = new_account_email_id;

    return email_options_local_var;
}


void email_options_free(email_options_t *email_options) {
    if(NULL == email_options){
        return ;
    }
    listEntry_t *listEntry;
    if (email_options->from_name) {
        free(email_options->from_name);
        email_options->from_name = NULL;
    }
    if (email_options->from_email_address) {
        free(email_options->from_email_address);
        email_options->from_email_address = NULL;
    }
    if (email_options->header_image) {
        free(email_options->header_image);
        email_options->header_image = NULL;
    }
    if (email_options->footer_text) {
        free(email_options->footer_text);
        email_options->footer_text = NULL;
    }
    if (email_options->base_color) {
        free(email_options->base_color);
        email_options->base_color = NULL;
    }
    if (email_options->background_color) {
        free(email_options->background_color);
        email_options->background_color = NULL;
    }
    if (email_options->body_background_color) {
        free(email_options->body_background_color);
        email_options->body_background_color = NULL;
    }
    if (email_options->body_text_color) {
        free(email_options->body_text_color);
        email_options->body_text_color = NULL;
    }
    if (email_options->new_order_email_id) {
        free(email_options->new_order_email_id);
        email_options->new_order_email_id = NULL;
    }
    if (email_options->cancelled_order_email_id) {
        free(email_options->cancelled_order_email_id);
        email_options->cancelled_order_email_id = NULL;
    }
    if (email_options->failed_order_email_id) {
        free(email_options->failed_order_email_id);
        email_options->failed_order_email_id = NULL;
    }
    if (email_options->on_hold_order_email_id) {
        free(email_options->on_hold_order_email_id);
        email_options->on_hold_order_email_id = NULL;
    }
    if (email_options->processing_order_email_id) {
        free(email_options->processing_order_email_id);
        email_options->processing_order_email_id = NULL;
    }
    if (email_options->completed_order_email_id) {
        free(email_options->completed_order_email_id);
        email_options->completed_order_email_id = NULL;
    }
    if (email_options->refunded_order_email_id) {
        free(email_options->refunded_order_email_id);
        email_options->refunded_order_email_id = NULL;
    }
    if (email_options->order_details_email_id) {
        free(email_options->order_details_email_id);
        email_options->order_details_email_id = NULL;
    }
    if (email_options->customer_invoice_email_id) {
        free(email_options->customer_invoice_email_id);
        email_options->customer_invoice_email_id = NULL;
    }
    if (email_options->customer_note_email_id) {
        free(email_options->customer_note_email_id);
        email_options->customer_note_email_id = NULL;
    }
    if (email_options->password_reset_email_id) {
        free(email_options->password_reset_email_id);
        email_options->password_reset_email_id = NULL;
    }
    if (email_options->new_renewal_order_email_id) {
        free(email_options->new_renewal_order_email_id);
        email_options->new_renewal_order_email_id = NULL;
    }
    if (email_options->new_subscription_email_id) {
        free(email_options->new_subscription_email_id);
        email_options->new_subscription_email_id = NULL;
    }
    if (email_options->subscription_welcome_email_id) {
        free(email_options->subscription_welcome_email_id);
        email_options->subscription_welcome_email_id = NULL;
    }
    if (email_options->suspended_subscription_email_id) {
        free(email_options->suspended_subscription_email_id);
        email_options->suspended_subscription_email_id = NULL;
    }
    if (email_options->overdue_subscription_email_id) {
        free(email_options->overdue_subscription_email_id);
        email_options->overdue_subscription_email_id = NULL;
    }
    if (email_options->expired_subscription_email_id) {
        free(email_options->expired_subscription_email_id);
        email_options->expired_subscription_email_id = NULL;
    }
    if (email_options->switched_subscription_email_id) {
        free(email_options->switched_subscription_email_id);
        email_options->switched_subscription_email_id = NULL;
    }
    if (email_options->new_account_email_id) {
        free(email_options->new_account_email_id);
        email_options->new_account_email_id = NULL;
    }
    free(email_options);
}

cJSON *email_options_convertToJSON(email_options_t *email_options) {
    cJSON *item = cJSON_CreateObject();

    // email_options->from_name
    if(email_options->from_name) {
    if(cJSON_AddStringToObject(item, "fromName", email_options->from_name) == NULL) {
    goto fail; //String
    }
    }


    // email_options->from_email_address
    if(email_options->from_email_address) {
    if(cJSON_AddStringToObject(item, "fromEmailAddress", email_options->from_email_address) == NULL) {
    goto fail; //String
    }
    }


    // email_options->header_image
    if(email_options->header_image) {
    if(cJSON_AddStringToObject(item, "headerImage", email_options->header_image) == NULL) {
    goto fail; //String
    }
    }


    // email_options->footer_text
    if(email_options->footer_text) {
    if(cJSON_AddStringToObject(item, "footerText", email_options->footer_text) == NULL) {
    goto fail; //String
    }
    }


    // email_options->base_color
    if(email_options->base_color) {
    if(cJSON_AddStringToObject(item, "baseColor", email_options->base_color) == NULL) {
    goto fail; //String
    }
    }


    // email_options->background_color
    if(email_options->background_color) {
    if(cJSON_AddStringToObject(item, "backgroundColor", email_options->background_color) == NULL) {
    goto fail; //String
    }
    }


    // email_options->body_background_color
    if(email_options->body_background_color) {
    if(cJSON_AddStringToObject(item, "bodyBackgroundColor", email_options->body_background_color) == NULL) {
    goto fail; //String
    }
    }


    // email_options->body_text_color
    if(email_options->body_text_color) {
    if(cJSON_AddStringToObject(item, "bodyTextColor", email_options->body_text_color) == NULL) {
    goto fail; //String
    }
    }


    // email_options->new_order_email_id
    if(email_options->new_order_email_id) {
    if(cJSON_AddStringToObject(item, "newOrderEmailID", email_options->new_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->cancelled_order_email_id
    if(email_options->cancelled_order_email_id) {
    if(cJSON_AddStringToObject(item, "cancelledOrderEmailID", email_options->cancelled_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->failed_order_email_id
    if(email_options->failed_order_email_id) {
    if(cJSON_AddStringToObject(item, "failedOrderEmailID", email_options->failed_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->on_hold_order_email_id
    if(email_options->on_hold_order_email_id) {
    if(cJSON_AddStringToObject(item, "onHoldOrderEmailID", email_options->on_hold_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->processing_order_email_id
    if(email_options->processing_order_email_id) {
    if(cJSON_AddStringToObject(item, "processingOrderEmailID", email_options->processing_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->completed_order_email_id
    if(email_options->completed_order_email_id) {
    if(cJSON_AddStringToObject(item, "completedOrderEmailID", email_options->completed_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->refunded_order_email_id
    if(email_options->refunded_order_email_id) {
    if(cJSON_AddStringToObject(item, "refundedOrderEmailID", email_options->refunded_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->order_details_email_id
    if(email_options->order_details_email_id) {
    if(cJSON_AddStringToObject(item, "orderDetailsEmailID", email_options->order_details_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->customer_invoice_email_id
    if(email_options->customer_invoice_email_id) {
    if(cJSON_AddStringToObject(item, "customerInvoiceEmailID", email_options->customer_invoice_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->customer_note_email_id
    if(email_options->customer_note_email_id) {
    if(cJSON_AddStringToObject(item, "customerNoteEmailID", email_options->customer_note_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->password_reset_email_id
    if(email_options->password_reset_email_id) {
    if(cJSON_AddStringToObject(item, "passwordResetEmailID", email_options->password_reset_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->new_renewal_order_email_id
    if(email_options->new_renewal_order_email_id) {
    if(cJSON_AddStringToObject(item, "newRenewalOrderEmailID", email_options->new_renewal_order_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->new_subscription_email_id
    if(email_options->new_subscription_email_id) {
    if(cJSON_AddStringToObject(item, "newSubscriptionEmailID", email_options->new_subscription_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->subscription_welcome_email_id
    if(email_options->subscription_welcome_email_id) {
    if(cJSON_AddStringToObject(item, "subscriptionWelcomeEmailID", email_options->subscription_welcome_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->suspended_subscription_email_id
    if(email_options->suspended_subscription_email_id) {
    if(cJSON_AddStringToObject(item, "suspendedSubscriptionEmailID", email_options->suspended_subscription_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->overdue_subscription_email_id
    if(email_options->overdue_subscription_email_id) {
    if(cJSON_AddStringToObject(item, "overdueSubscriptionEmailID", email_options->overdue_subscription_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->expired_subscription_email_id
    if(email_options->expired_subscription_email_id) {
    if(cJSON_AddStringToObject(item, "expiredSubscriptionEmailID", email_options->expired_subscription_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->switched_subscription_email_id
    if(email_options->switched_subscription_email_id) {
    if(cJSON_AddStringToObject(item, "switchedSubscriptionEmailID", email_options->switched_subscription_email_id) == NULL) {
    goto fail; //String
    }
    }


    // email_options->new_account_email_id
    if(email_options->new_account_email_id) {
    if(cJSON_AddStringToObject(item, "newAccountEmailID", email_options->new_account_email_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

email_options_t *email_options_parseFromJSON(cJSON *email_optionsJSON){

    email_options_t *email_options_local_var = NULL;

    // email_options->from_name
    cJSON *from_name = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "fromName");
    if (from_name) { 
    if(!cJSON_IsString(from_name) && !cJSON_IsNull(from_name))
    {
    goto end; //String
    }
    }

    // email_options->from_email_address
    cJSON *from_email_address = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "fromEmailAddress");
    if (from_email_address) { 
    if(!cJSON_IsString(from_email_address) && !cJSON_IsNull(from_email_address))
    {
    goto end; //String
    }
    }

    // email_options->header_image
    cJSON *header_image = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "headerImage");
    if (header_image) { 
    if(!cJSON_IsString(header_image) && !cJSON_IsNull(header_image))
    {
    goto end; //String
    }
    }

    // email_options->footer_text
    cJSON *footer_text = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "footerText");
    if (footer_text) { 
    if(!cJSON_IsString(footer_text) && !cJSON_IsNull(footer_text))
    {
    goto end; //String
    }
    }

    // email_options->base_color
    cJSON *base_color = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "baseColor");
    if (base_color) { 
    if(!cJSON_IsString(base_color) && !cJSON_IsNull(base_color))
    {
    goto end; //String
    }
    }

    // email_options->background_color
    cJSON *background_color = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "backgroundColor");
    if (background_color) { 
    if(!cJSON_IsString(background_color) && !cJSON_IsNull(background_color))
    {
    goto end; //String
    }
    }

    // email_options->body_background_color
    cJSON *body_background_color = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "bodyBackgroundColor");
    if (body_background_color) { 
    if(!cJSON_IsString(body_background_color) && !cJSON_IsNull(body_background_color))
    {
    goto end; //String
    }
    }

    // email_options->body_text_color
    cJSON *body_text_color = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "bodyTextColor");
    if (body_text_color) { 
    if(!cJSON_IsString(body_text_color) && !cJSON_IsNull(body_text_color))
    {
    goto end; //String
    }
    }

    // email_options->new_order_email_id
    cJSON *new_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "newOrderEmailID");
    if (new_order_email_id) { 
    if(!cJSON_IsString(new_order_email_id) && !cJSON_IsNull(new_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->cancelled_order_email_id
    cJSON *cancelled_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "cancelledOrderEmailID");
    if (cancelled_order_email_id) { 
    if(!cJSON_IsString(cancelled_order_email_id) && !cJSON_IsNull(cancelled_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->failed_order_email_id
    cJSON *failed_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "failedOrderEmailID");
    if (failed_order_email_id) { 
    if(!cJSON_IsString(failed_order_email_id) && !cJSON_IsNull(failed_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->on_hold_order_email_id
    cJSON *on_hold_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "onHoldOrderEmailID");
    if (on_hold_order_email_id) { 
    if(!cJSON_IsString(on_hold_order_email_id) && !cJSON_IsNull(on_hold_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->processing_order_email_id
    cJSON *processing_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "processingOrderEmailID");
    if (processing_order_email_id) { 
    if(!cJSON_IsString(processing_order_email_id) && !cJSON_IsNull(processing_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->completed_order_email_id
    cJSON *completed_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "completedOrderEmailID");
    if (completed_order_email_id) { 
    if(!cJSON_IsString(completed_order_email_id) && !cJSON_IsNull(completed_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->refunded_order_email_id
    cJSON *refunded_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "refundedOrderEmailID");
    if (refunded_order_email_id) { 
    if(!cJSON_IsString(refunded_order_email_id) && !cJSON_IsNull(refunded_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->order_details_email_id
    cJSON *order_details_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "orderDetailsEmailID");
    if (order_details_email_id) { 
    if(!cJSON_IsString(order_details_email_id) && !cJSON_IsNull(order_details_email_id))
    {
    goto end; //String
    }
    }

    // email_options->customer_invoice_email_id
    cJSON *customer_invoice_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "customerInvoiceEmailID");
    if (customer_invoice_email_id) { 
    if(!cJSON_IsString(customer_invoice_email_id) && !cJSON_IsNull(customer_invoice_email_id))
    {
    goto end; //String
    }
    }

    // email_options->customer_note_email_id
    cJSON *customer_note_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "customerNoteEmailID");
    if (customer_note_email_id) { 
    if(!cJSON_IsString(customer_note_email_id) && !cJSON_IsNull(customer_note_email_id))
    {
    goto end; //String
    }
    }

    // email_options->password_reset_email_id
    cJSON *password_reset_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "passwordResetEmailID");
    if (password_reset_email_id) { 
    if(!cJSON_IsString(password_reset_email_id) && !cJSON_IsNull(password_reset_email_id))
    {
    goto end; //String
    }
    }

    // email_options->new_renewal_order_email_id
    cJSON *new_renewal_order_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "newRenewalOrderEmailID");
    if (new_renewal_order_email_id) { 
    if(!cJSON_IsString(new_renewal_order_email_id) && !cJSON_IsNull(new_renewal_order_email_id))
    {
    goto end; //String
    }
    }

    // email_options->new_subscription_email_id
    cJSON *new_subscription_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "newSubscriptionEmailID");
    if (new_subscription_email_id) { 
    if(!cJSON_IsString(new_subscription_email_id) && !cJSON_IsNull(new_subscription_email_id))
    {
    goto end; //String
    }
    }

    // email_options->subscription_welcome_email_id
    cJSON *subscription_welcome_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "subscriptionWelcomeEmailID");
    if (subscription_welcome_email_id) { 
    if(!cJSON_IsString(subscription_welcome_email_id) && !cJSON_IsNull(subscription_welcome_email_id))
    {
    goto end; //String
    }
    }

    // email_options->suspended_subscription_email_id
    cJSON *suspended_subscription_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "suspendedSubscriptionEmailID");
    if (suspended_subscription_email_id) { 
    if(!cJSON_IsString(suspended_subscription_email_id) && !cJSON_IsNull(suspended_subscription_email_id))
    {
    goto end; //String
    }
    }

    // email_options->overdue_subscription_email_id
    cJSON *overdue_subscription_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "overdueSubscriptionEmailID");
    if (overdue_subscription_email_id) { 
    if(!cJSON_IsString(overdue_subscription_email_id) && !cJSON_IsNull(overdue_subscription_email_id))
    {
    goto end; //String
    }
    }

    // email_options->expired_subscription_email_id
    cJSON *expired_subscription_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "expiredSubscriptionEmailID");
    if (expired_subscription_email_id) { 
    if(!cJSON_IsString(expired_subscription_email_id) && !cJSON_IsNull(expired_subscription_email_id))
    {
    goto end; //String
    }
    }

    // email_options->switched_subscription_email_id
    cJSON *switched_subscription_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "switchedSubscriptionEmailID");
    if (switched_subscription_email_id) { 
    if(!cJSON_IsString(switched_subscription_email_id) && !cJSON_IsNull(switched_subscription_email_id))
    {
    goto end; //String
    }
    }

    // email_options->new_account_email_id
    cJSON *new_account_email_id = cJSON_GetObjectItemCaseSensitive(email_optionsJSON, "newAccountEmailID");
    if (new_account_email_id) { 
    if(!cJSON_IsString(new_account_email_id) && !cJSON_IsNull(new_account_email_id))
    {
    goto end; //String
    }
    }


    email_options_local_var = email_options_create (
        from_name && !cJSON_IsNull(from_name) ? strdup(from_name->valuestring) : NULL,
        from_email_address && !cJSON_IsNull(from_email_address) ? strdup(from_email_address->valuestring) : NULL,
        header_image && !cJSON_IsNull(header_image) ? strdup(header_image->valuestring) : NULL,
        footer_text && !cJSON_IsNull(footer_text) ? strdup(footer_text->valuestring) : NULL,
        base_color && !cJSON_IsNull(base_color) ? strdup(base_color->valuestring) : NULL,
        background_color && !cJSON_IsNull(background_color) ? strdup(background_color->valuestring) : NULL,
        body_background_color && !cJSON_IsNull(body_background_color) ? strdup(body_background_color->valuestring) : NULL,
        body_text_color && !cJSON_IsNull(body_text_color) ? strdup(body_text_color->valuestring) : NULL,
        new_order_email_id && !cJSON_IsNull(new_order_email_id) ? strdup(new_order_email_id->valuestring) : NULL,
        cancelled_order_email_id && !cJSON_IsNull(cancelled_order_email_id) ? strdup(cancelled_order_email_id->valuestring) : NULL,
        failed_order_email_id && !cJSON_IsNull(failed_order_email_id) ? strdup(failed_order_email_id->valuestring) : NULL,
        on_hold_order_email_id && !cJSON_IsNull(on_hold_order_email_id) ? strdup(on_hold_order_email_id->valuestring) : NULL,
        processing_order_email_id && !cJSON_IsNull(processing_order_email_id) ? strdup(processing_order_email_id->valuestring) : NULL,
        completed_order_email_id && !cJSON_IsNull(completed_order_email_id) ? strdup(completed_order_email_id->valuestring) : NULL,
        refunded_order_email_id && !cJSON_IsNull(refunded_order_email_id) ? strdup(refunded_order_email_id->valuestring) : NULL,
        order_details_email_id && !cJSON_IsNull(order_details_email_id) ? strdup(order_details_email_id->valuestring) : NULL,
        customer_invoice_email_id && !cJSON_IsNull(customer_invoice_email_id) ? strdup(customer_invoice_email_id->valuestring) : NULL,
        customer_note_email_id && !cJSON_IsNull(customer_note_email_id) ? strdup(customer_note_email_id->valuestring) : NULL,
        password_reset_email_id && !cJSON_IsNull(password_reset_email_id) ? strdup(password_reset_email_id->valuestring) : NULL,
        new_renewal_order_email_id && !cJSON_IsNull(new_renewal_order_email_id) ? strdup(new_renewal_order_email_id->valuestring) : NULL,
        new_subscription_email_id && !cJSON_IsNull(new_subscription_email_id) ? strdup(new_subscription_email_id->valuestring) : NULL,
        subscription_welcome_email_id && !cJSON_IsNull(subscription_welcome_email_id) ? strdup(subscription_welcome_email_id->valuestring) : NULL,
        suspended_subscription_email_id && !cJSON_IsNull(suspended_subscription_email_id) ? strdup(suspended_subscription_email_id->valuestring) : NULL,
        overdue_subscription_email_id && !cJSON_IsNull(overdue_subscription_email_id) ? strdup(overdue_subscription_email_id->valuestring) : NULL,
        expired_subscription_email_id && !cJSON_IsNull(expired_subscription_email_id) ? strdup(expired_subscription_email_id->valuestring) : NULL,
        switched_subscription_email_id && !cJSON_IsNull(switched_subscription_email_id) ? strdup(switched_subscription_email_id->valuestring) : NULL,
        new_account_email_id && !cJSON_IsNull(new_account_email_id) ? strdup(new_account_email_id->valuestring) : NULL
        );

    return email_options_local_var;
end:
    return NULL;

}
