#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "object_email_dispatch_request.h"


char* object_email_dispatch_request_alert_type_ToString(systemservice_object_email_dispatch_request_ALERTTYPE_e alert_type) {
    char* alert_typeArray[] =  { "NULL", "None", "Info", "Error", "Warning", "Success", "Action", "Alert" };
    return alert_typeArray[alert_type];
}

systemservice_object_email_dispatch_request_ALERTTYPE_e object_email_dispatch_request_alert_type_FromString(char* alert_type){
    int stringToReturn = 0;
    char *alert_typeArray[] =  { "NULL", "None", "Info", "Error", "Warning", "Success", "Action", "Alert" };
    size_t sizeofArray = sizeof(alert_typeArray) / sizeof(alert_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(alert_type, alert_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    object_email_dispatch_request_t *object_email_dispatch_request_local_var = malloc(sizeof(object_email_dispatch_request_t));
    if (!object_email_dispatch_request_local_var) {
        return NULL;
    }
    object_email_dispatch_request_local_var->title = title;
    object_email_dispatch_request_local_var->message = message;
    object_email_dispatch_request_local_var->button_link = button_link;
    object_email_dispatch_request_local_var->button_text = button_text;
    object_email_dispatch_request_local_var->alert_message = alert_message;
    object_email_dispatch_request_local_var->alert_type = alert_type;
    object_email_dispatch_request_local_var->culture = culture;
    object_email_dispatch_request_local_var->ui_culture = ui_culture;
    object_email_dispatch_request_local_var->recipients = recipients;
    object_email_dispatch_request_local_var->contact_ids = contact_ids;
    object_email_dispatch_request_local_var->tenant_ids = tenant_ids;
    object_email_dispatch_request_local_var->user_ids = user_ids;
    object_email_dispatch_request_local_var->template_url = template_url;
    object_email_dispatch_request_local_var->email_template_id = email_template_id;
    object_email_dispatch_request_local_var->payload = payload;

    return object_email_dispatch_request_local_var;
}


void object_email_dispatch_request_free(object_email_dispatch_request_t *object_email_dispatch_request) {
    if(NULL == object_email_dispatch_request){
        return ;
    }
    listEntry_t *listEntry;
    if (object_email_dispatch_request->title) {
        free(object_email_dispatch_request->title);
        object_email_dispatch_request->title = NULL;
    }
    if (object_email_dispatch_request->message) {
        free(object_email_dispatch_request->message);
        object_email_dispatch_request->message = NULL;
    }
    if (object_email_dispatch_request->button_link) {
        free(object_email_dispatch_request->button_link);
        object_email_dispatch_request->button_link = NULL;
    }
    if (object_email_dispatch_request->button_text) {
        free(object_email_dispatch_request->button_text);
        object_email_dispatch_request->button_text = NULL;
    }
    if (object_email_dispatch_request->alert_message) {
        free(object_email_dispatch_request->alert_message);
        object_email_dispatch_request->alert_message = NULL;
    }
    if (object_email_dispatch_request->culture) {
        free(object_email_dispatch_request->culture);
        object_email_dispatch_request->culture = NULL;
    }
    if (object_email_dispatch_request->ui_culture) {
        free(object_email_dispatch_request->ui_culture);
        object_email_dispatch_request->ui_culture = NULL;
    }
    if (object_email_dispatch_request->recipients) {
        list_ForEach(listEntry, object_email_dispatch_request->recipients) {
            free(listEntry->data);
        }
        list_freeList(object_email_dispatch_request->recipients);
        object_email_dispatch_request->recipients = NULL;
    }
    if (object_email_dispatch_request->contact_ids) {
        list_ForEach(listEntry, object_email_dispatch_request->contact_ids) {
            free(listEntry->data);
        }
        list_freeList(object_email_dispatch_request->contact_ids);
        object_email_dispatch_request->contact_ids = NULL;
    }
    if (object_email_dispatch_request->tenant_ids) {
        list_ForEach(listEntry, object_email_dispatch_request->tenant_ids) {
            free(listEntry->data);
        }
        list_freeList(object_email_dispatch_request->tenant_ids);
        object_email_dispatch_request->tenant_ids = NULL;
    }
    if (object_email_dispatch_request->user_ids) {
        list_ForEach(listEntry, object_email_dispatch_request->user_ids) {
            free(listEntry->data);
        }
        list_freeList(object_email_dispatch_request->user_ids);
        object_email_dispatch_request->user_ids = NULL;
    }
    if (object_email_dispatch_request->template_url) {
        free(object_email_dispatch_request->template_url);
        object_email_dispatch_request->template_url = NULL;
    }
    if (object_email_dispatch_request->email_template_id) {
        free(object_email_dispatch_request->email_template_id);
        object_email_dispatch_request->email_template_id = NULL;
    }
    if (object_email_dispatch_request->payload) {
        _free(object_email_dispatch_request->payload);
        object_email_dispatch_request->payload = NULL;
    }
    free(object_email_dispatch_request);
}

cJSON *object_email_dispatch_request_convertToJSON(object_email_dispatch_request_t *object_email_dispatch_request) {
    cJSON *item = cJSON_CreateObject();

    // object_email_dispatch_request->title
    if (!object_email_dispatch_request->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", object_email_dispatch_request->title) == NULL) {
    goto fail; //String
    }


    // object_email_dispatch_request->message
    if (!object_email_dispatch_request->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", object_email_dispatch_request->message) == NULL) {
    goto fail; //String
    }


    // object_email_dispatch_request->button_link
    if(object_email_dispatch_request->button_link) {
    if(cJSON_AddStringToObject(item, "buttonLink", object_email_dispatch_request->button_link) == NULL) {
    goto fail; //String
    }
    }


    // object_email_dispatch_request->button_text
    if(object_email_dispatch_request->button_text) {
    if(cJSON_AddStringToObject(item, "buttonText", object_email_dispatch_request->button_text) == NULL) {
    goto fail; //String
    }
    }


    // object_email_dispatch_request->alert_message
    if(object_email_dispatch_request->alert_message) {
    if(cJSON_AddStringToObject(item, "alertMessage", object_email_dispatch_request->alert_message) == NULL) {
    goto fail; //String
    }
    }


    // object_email_dispatch_request->alert_type
    if(object_email_dispatch_request->alert_type != systemservice_object_email_dispatch_request_ALERTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "alertType", alert_typeobject_email_dispatch_request_ToString(object_email_dispatch_request->alert_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // object_email_dispatch_request->culture
    if (!object_email_dispatch_request->culture) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "culture", object_email_dispatch_request->culture) == NULL) {
    goto fail; //String
    }


    // object_email_dispatch_request->ui_culture
    if (!object_email_dispatch_request->ui_culture) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "uiCulture", object_email_dispatch_request->ui_culture) == NULL) {
    goto fail; //String
    }


    // object_email_dispatch_request->recipients
    if (!object_email_dispatch_request->recipients) {
        goto fail;
    }
    cJSON *recipients = cJSON_AddArrayToObject(item, "recipients");
    if(recipients == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *recipientsListEntry;
    list_ForEach(recipientsListEntry, object_email_dispatch_request->recipients) {
    if(cJSON_AddStringToObject(recipients, "", (char*)recipientsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // object_email_dispatch_request->contact_ids
    if(object_email_dispatch_request->contact_ids) {
    cJSON *contact_ids = cJSON_AddArrayToObject(item, "contactIds");
    if(contact_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *contact_idsListEntry;
    list_ForEach(contact_idsListEntry, object_email_dispatch_request->contact_ids) {
    if(cJSON_AddStringToObject(contact_ids, "", (char*)contact_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // object_email_dispatch_request->tenant_ids
    if(object_email_dispatch_request->tenant_ids) {
    cJSON *tenant_ids = cJSON_AddArrayToObject(item, "tenantIds");
    if(tenant_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tenant_idsListEntry;
    list_ForEach(tenant_idsListEntry, object_email_dispatch_request->tenant_ids) {
    if(cJSON_AddStringToObject(tenant_ids, "", (char*)tenant_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // object_email_dispatch_request->user_ids
    if(object_email_dispatch_request->user_ids) {
    cJSON *user_ids = cJSON_AddArrayToObject(item, "userIds");
    if(user_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *user_idsListEntry;
    list_ForEach(user_idsListEntry, object_email_dispatch_request->user_ids) {
    if(cJSON_AddStringToObject(user_ids, "", (char*)user_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // object_email_dispatch_request->template_url
    if(object_email_dispatch_request->template_url) {
    if(cJSON_AddStringToObject(item, "templateUrl", object_email_dispatch_request->template_url) == NULL) {
    goto fail; //String
    }
    }


    // object_email_dispatch_request->email_template_id
    if(object_email_dispatch_request->email_template_id) {
    if(cJSON_AddStringToObject(item, "emailTemplateId", object_email_dispatch_request->email_template_id) == NULL) {
    goto fail; //String
    }
    }


    // object_email_dispatch_request->payload
    if(object_email_dispatch_request->payload) {
    cJSON *payload_local_JSON = _convertToJSON(object_email_dispatch_request->payload);
    if(payload_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "payload", payload_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

object_email_dispatch_request_t *object_email_dispatch_request_parseFromJSON(cJSON *object_email_dispatch_requestJSON){

    object_email_dispatch_request_t *object_email_dispatch_request_local_var = NULL;

    // define the local list for object_email_dispatch_request->recipients
    list_t *recipientsList = NULL;

    // define the local list for object_email_dispatch_request->contact_ids
    list_t *contact_idsList = NULL;

    // define the local list for object_email_dispatch_request->tenant_ids
    list_t *tenant_idsList = NULL;

    // define the local list for object_email_dispatch_request->user_ids
    list_t *user_idsList = NULL;

    // define the local variable for object_email_dispatch_request->payload
    _t *payload_local_nonprim = NULL;

    // object_email_dispatch_request->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // object_email_dispatch_request->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }

    // object_email_dispatch_request->button_link
    cJSON *button_link = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "buttonLink");
    if (button_link) { 
    if(!cJSON_IsString(button_link) && !cJSON_IsNull(button_link))
    {
    goto end; //String
    }
    }

    // object_email_dispatch_request->button_text
    cJSON *button_text = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "buttonText");
    if (button_text) { 
    if(!cJSON_IsString(button_text) && !cJSON_IsNull(button_text))
    {
    goto end; //String
    }
    }

    // object_email_dispatch_request->alert_message
    cJSON *alert_message = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "alertMessage");
    if (alert_message) { 
    if(!cJSON_IsString(alert_message) && !cJSON_IsNull(alert_message))
    {
    goto end; //String
    }
    }

    // object_email_dispatch_request->alert_type
    cJSON *alert_type = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "alertType");
    systemservice_object_email_dispatch_request_ALERTTYPE_e alert_typeVariable;
    if (alert_type) { 
    if(!cJSON_IsString(alert_type))
    {
    goto end; //Enum
    }
    alert_typeVariable = object_email_dispatch_request_alert_type_FromString(alert_type->valuestring);
    }

    // object_email_dispatch_request->culture
    cJSON *culture = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "culture");
    if (!culture) {
        goto end;
    }

    
    if(!cJSON_IsString(culture))
    {
    goto end; //String
    }

    // object_email_dispatch_request->ui_culture
    cJSON *ui_culture = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "uiCulture");
    if (!ui_culture) {
        goto end;
    }

    
    if(!cJSON_IsString(ui_culture))
    {
    goto end; //String
    }

    // object_email_dispatch_request->recipients
    cJSON *recipients = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "recipients");
    if (!recipients) {
        goto end;
    }

    
    cJSON *recipients_local = NULL;
    if(!cJSON_IsArray(recipients)) {
        goto end;//primitive container
    }
    recipientsList = list_createList();

    cJSON_ArrayForEach(recipients_local, recipients)
    {
        if(!cJSON_IsString(recipients_local))
        {
            goto end;
        }
        list_addElement(recipientsList , strdup(recipients_local->valuestring));
    }

    // object_email_dispatch_request->contact_ids
    cJSON *contact_ids = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "contactIds");
    if (contact_ids) { 
    cJSON *contact_ids_local = NULL;
    if(!cJSON_IsArray(contact_ids)) {
        goto end;//primitive container
    }
    contact_idsList = list_createList();

    cJSON_ArrayForEach(contact_ids_local, contact_ids)
    {
        if(!cJSON_IsString(contact_ids_local))
        {
            goto end;
        }
        list_addElement(contact_idsList , strdup(contact_ids_local->valuestring));
    }
    }

    // object_email_dispatch_request->tenant_ids
    cJSON *tenant_ids = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "tenantIds");
    if (tenant_ids) { 
    cJSON *tenant_ids_local = NULL;
    if(!cJSON_IsArray(tenant_ids)) {
        goto end;//primitive container
    }
    tenant_idsList = list_createList();

    cJSON_ArrayForEach(tenant_ids_local, tenant_ids)
    {
        if(!cJSON_IsString(tenant_ids_local))
        {
            goto end;
        }
        list_addElement(tenant_idsList , strdup(tenant_ids_local->valuestring));
    }
    }

    // object_email_dispatch_request->user_ids
    cJSON *user_ids = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "userIds");
    if (user_ids) { 
    cJSON *user_ids_local = NULL;
    if(!cJSON_IsArray(user_ids)) {
        goto end;//primitive container
    }
    user_idsList = list_createList();

    cJSON_ArrayForEach(user_ids_local, user_ids)
    {
        if(!cJSON_IsString(user_ids_local))
        {
            goto end;
        }
        list_addElement(user_idsList , strdup(user_ids_local->valuestring));
    }
    }

    // object_email_dispatch_request->template_url
    cJSON *template_url = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "templateUrl");
    if (template_url) { 
    if(!cJSON_IsString(template_url) && !cJSON_IsNull(template_url))
    {
    goto end; //String
    }
    }

    // object_email_dispatch_request->email_template_id
    cJSON *email_template_id = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "emailTemplateId");
    if (email_template_id) { 
    if(!cJSON_IsString(email_template_id) && !cJSON_IsNull(email_template_id))
    {
    goto end; //String
    }
    }

    // object_email_dispatch_request->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(object_email_dispatch_requestJSON, "payload");
    if (payload) { 
    payload_local_nonprim = _parseFromJSON(payload); //custom
    }


    object_email_dispatch_request_local_var = object_email_dispatch_request_create (
        strdup(title->valuestring),
        strdup(message->valuestring),
        button_link && !cJSON_IsNull(button_link) ? strdup(button_link->valuestring) : NULL,
        button_text && !cJSON_IsNull(button_text) ? strdup(button_text->valuestring) : NULL,
        alert_message && !cJSON_IsNull(alert_message) ? strdup(alert_message->valuestring) : NULL,
        alert_type ? alert_typeVariable : systemservice_object_email_dispatch_request_ALERTTYPE_NULL,
        strdup(culture->valuestring),
        strdup(ui_culture->valuestring),
        recipientsList,
        contact_ids ? contact_idsList : NULL,
        tenant_ids ? tenant_idsList : NULL,
        user_ids ? user_idsList : NULL,
        template_url && !cJSON_IsNull(template_url) ? strdup(template_url->valuestring) : NULL,
        email_template_id && !cJSON_IsNull(email_template_id) ? strdup(email_template_id->valuestring) : NULL,
        payload ? payload_local_nonprim : NULL
        );

    return object_email_dispatch_request_local_var;
end:
    if (recipientsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, recipientsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(recipientsList);
        recipientsList = NULL;
    }
    if (contact_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, contact_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(contact_idsList);
        contact_idsList = NULL;
    }
    if (tenant_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tenant_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tenant_idsList);
        tenant_idsList = NULL;
    }
    if (user_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, user_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(user_idsList);
        user_idsList = NULL;
    }
    if (payload_local_nonprim) {
        _free(payload_local_nonprim);
        payload_local_nonprim = NULL;
    }
    return NULL;

}
