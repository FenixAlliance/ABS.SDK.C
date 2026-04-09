#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "emails_options.h"



emails_options_t *emails_options_create(
    char *alert_template,
    char *action_template,
    char *receipt_template,
    char *welcome_template
    ) {
    emails_options_t *emails_options_local_var = malloc(sizeof(emails_options_t));
    if (!emails_options_local_var) {
        return NULL;
    }
    emails_options_local_var->alert_template = alert_template;
    emails_options_local_var->action_template = action_template;
    emails_options_local_var->receipt_template = receipt_template;
    emails_options_local_var->welcome_template = welcome_template;

    return emails_options_local_var;
}


void emails_options_free(emails_options_t *emails_options) {
    if(NULL == emails_options){
        return ;
    }
    listEntry_t *listEntry;
    if (emails_options->alert_template) {
        free(emails_options->alert_template);
        emails_options->alert_template = NULL;
    }
    if (emails_options->action_template) {
        free(emails_options->action_template);
        emails_options->action_template = NULL;
    }
    if (emails_options->receipt_template) {
        free(emails_options->receipt_template);
        emails_options->receipt_template = NULL;
    }
    if (emails_options->welcome_template) {
        free(emails_options->welcome_template);
        emails_options->welcome_template = NULL;
    }
    free(emails_options);
}

cJSON *emails_options_convertToJSON(emails_options_t *emails_options) {
    cJSON *item = cJSON_CreateObject();

    // emails_options->alert_template
    if(emails_options->alert_template) {
    if(cJSON_AddStringToObject(item, "alertTemplate", emails_options->alert_template) == NULL) {
    goto fail; //String
    }
    }


    // emails_options->action_template
    if(emails_options->action_template) {
    if(cJSON_AddStringToObject(item, "actionTemplate", emails_options->action_template) == NULL) {
    goto fail; //String
    }
    }


    // emails_options->receipt_template
    if(emails_options->receipt_template) {
    if(cJSON_AddStringToObject(item, "receiptTemplate", emails_options->receipt_template) == NULL) {
    goto fail; //String
    }
    }


    // emails_options->welcome_template
    if(emails_options->welcome_template) {
    if(cJSON_AddStringToObject(item, "welcomeTemplate", emails_options->welcome_template) == NULL) {
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

emails_options_t *emails_options_parseFromJSON(cJSON *emails_optionsJSON){

    emails_options_t *emails_options_local_var = NULL;

    // emails_options->alert_template
    cJSON *alert_template = cJSON_GetObjectItemCaseSensitive(emails_optionsJSON, "alertTemplate");
    if (alert_template) { 
    if(!cJSON_IsString(alert_template) && !cJSON_IsNull(alert_template))
    {
    goto end; //String
    }
    }

    // emails_options->action_template
    cJSON *action_template = cJSON_GetObjectItemCaseSensitive(emails_optionsJSON, "actionTemplate");
    if (action_template) { 
    if(!cJSON_IsString(action_template) && !cJSON_IsNull(action_template))
    {
    goto end; //String
    }
    }

    // emails_options->receipt_template
    cJSON *receipt_template = cJSON_GetObjectItemCaseSensitive(emails_optionsJSON, "receiptTemplate");
    if (receipt_template) { 
    if(!cJSON_IsString(receipt_template) && !cJSON_IsNull(receipt_template))
    {
    goto end; //String
    }
    }

    // emails_options->welcome_template
    cJSON *welcome_template = cJSON_GetObjectItemCaseSensitive(emails_optionsJSON, "welcomeTemplate");
    if (welcome_template) { 
    if(!cJSON_IsString(welcome_template) && !cJSON_IsNull(welcome_template))
    {
    goto end; //String
    }
    }


    emails_options_local_var = emails_options_create (
        alert_template && !cJSON_IsNull(alert_template) ? strdup(alert_template->valuestring) : NULL,
        action_template && !cJSON_IsNull(action_template) ? strdup(action_template->valuestring) : NULL,
        receipt_template && !cJSON_IsNull(receipt_template) ? strdup(receipt_template->valuestring) : NULL,
        welcome_template && !cJSON_IsNull(welcome_template) ? strdup(welcome_template->valuestring) : NULL
        );

    return emails_options_local_var;
end:
    return NULL;

}
