#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_my_business_integration_options.h"



google_my_business_integration_options_t *google_my_business_integration_options_create(
    int enable,
    char *client_id,
    char *project_id,
    char *auth_string,
    char *token_string,
    char *client_secret,
    char *auth_provider_x509_cert_url,
    list_t *redirect_strings
    ) {
    google_my_business_integration_options_t *google_my_business_integration_options_local_var = malloc(sizeof(google_my_business_integration_options_t));
    if (!google_my_business_integration_options_local_var) {
        return NULL;
    }
    google_my_business_integration_options_local_var->enable = enable;
    google_my_business_integration_options_local_var->client_id = client_id;
    google_my_business_integration_options_local_var->project_id = project_id;
    google_my_business_integration_options_local_var->auth_string = auth_string;
    google_my_business_integration_options_local_var->token_string = token_string;
    google_my_business_integration_options_local_var->client_secret = client_secret;
    google_my_business_integration_options_local_var->auth_provider_x509_cert_url = auth_provider_x509_cert_url;
    google_my_business_integration_options_local_var->redirect_strings = redirect_strings;

    return google_my_business_integration_options_local_var;
}


void google_my_business_integration_options_free(google_my_business_integration_options_t *google_my_business_integration_options) {
    if(NULL == google_my_business_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (google_my_business_integration_options->client_id) {
        free(google_my_business_integration_options->client_id);
        google_my_business_integration_options->client_id = NULL;
    }
    if (google_my_business_integration_options->project_id) {
        free(google_my_business_integration_options->project_id);
        google_my_business_integration_options->project_id = NULL;
    }
    if (google_my_business_integration_options->auth_string) {
        free(google_my_business_integration_options->auth_string);
        google_my_business_integration_options->auth_string = NULL;
    }
    if (google_my_business_integration_options->token_string) {
        free(google_my_business_integration_options->token_string);
        google_my_business_integration_options->token_string = NULL;
    }
    if (google_my_business_integration_options->client_secret) {
        free(google_my_business_integration_options->client_secret);
        google_my_business_integration_options->client_secret = NULL;
    }
    if (google_my_business_integration_options->auth_provider_x509_cert_url) {
        free(google_my_business_integration_options->auth_provider_x509_cert_url);
        google_my_business_integration_options->auth_provider_x509_cert_url = NULL;
    }
    if (google_my_business_integration_options->redirect_strings) {
        list_ForEach(listEntry, google_my_business_integration_options->redirect_strings) {
            free(listEntry->data);
        }
        list_freeList(google_my_business_integration_options->redirect_strings);
        google_my_business_integration_options->redirect_strings = NULL;
    }
    free(google_my_business_integration_options);
}

cJSON *google_my_business_integration_options_convertToJSON(google_my_business_integration_options_t *google_my_business_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // google_my_business_integration_options->enable
    if(google_my_business_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_my_business_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_my_business_integration_options->client_id
    if(google_my_business_integration_options->client_id) {
    if(cJSON_AddStringToObject(item, "clientId", google_my_business_integration_options->client_id) == NULL) {
    goto fail; //String
    }
    }


    // google_my_business_integration_options->project_id
    if(google_my_business_integration_options->project_id) {
    if(cJSON_AddStringToObject(item, "projectId", google_my_business_integration_options->project_id) == NULL) {
    goto fail; //String
    }
    }


    // google_my_business_integration_options->auth_string
    if(google_my_business_integration_options->auth_string) {
    if(cJSON_AddStringToObject(item, "authString", google_my_business_integration_options->auth_string) == NULL) {
    goto fail; //String
    }
    }


    // google_my_business_integration_options->token_string
    if(google_my_business_integration_options->token_string) {
    if(cJSON_AddStringToObject(item, "tokenString", google_my_business_integration_options->token_string) == NULL) {
    goto fail; //String
    }
    }


    // google_my_business_integration_options->client_secret
    if(google_my_business_integration_options->client_secret) {
    if(cJSON_AddStringToObject(item, "clientSecret", google_my_business_integration_options->client_secret) == NULL) {
    goto fail; //String
    }
    }


    // google_my_business_integration_options->auth_provider_x509_cert_url
    if(google_my_business_integration_options->auth_provider_x509_cert_url) {
    if(cJSON_AddStringToObject(item, "authProviderX509CertUrl", google_my_business_integration_options->auth_provider_x509_cert_url) == NULL) {
    goto fail; //String
    }
    }


    // google_my_business_integration_options->redirect_strings
    if(google_my_business_integration_options->redirect_strings) {
    cJSON *redirect_strings = cJSON_AddArrayToObject(item, "redirectStrings");
    if(redirect_strings == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *redirect_stringsListEntry;
    list_ForEach(redirect_stringsListEntry, google_my_business_integration_options->redirect_strings) {
    if(cJSON_AddStringToObject(redirect_strings, "", (char*)redirect_stringsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

google_my_business_integration_options_t *google_my_business_integration_options_parseFromJSON(cJSON *google_my_business_integration_optionsJSON){

    google_my_business_integration_options_t *google_my_business_integration_options_local_var = NULL;

    // define the local list for google_my_business_integration_options->redirect_strings
    list_t *redirect_stringsList = NULL;

    // google_my_business_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_my_business_integration_options->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "clientId");
    if (client_id) { 
    if(!cJSON_IsString(client_id) && !cJSON_IsNull(client_id))
    {
    goto end; //String
    }
    }

    // google_my_business_integration_options->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "projectId");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }

    // google_my_business_integration_options->auth_string
    cJSON *auth_string = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "authString");
    if (auth_string) { 
    if(!cJSON_IsString(auth_string) && !cJSON_IsNull(auth_string))
    {
    goto end; //String
    }
    }

    // google_my_business_integration_options->token_string
    cJSON *token_string = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "tokenString");
    if (token_string) { 
    if(!cJSON_IsString(token_string) && !cJSON_IsNull(token_string))
    {
    goto end; //String
    }
    }

    // google_my_business_integration_options->client_secret
    cJSON *client_secret = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "clientSecret");
    if (client_secret) { 
    if(!cJSON_IsString(client_secret) && !cJSON_IsNull(client_secret))
    {
    goto end; //String
    }
    }

    // google_my_business_integration_options->auth_provider_x509_cert_url
    cJSON *auth_provider_x509_cert_url = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "authProviderX509CertUrl");
    if (auth_provider_x509_cert_url) { 
    if(!cJSON_IsString(auth_provider_x509_cert_url) && !cJSON_IsNull(auth_provider_x509_cert_url))
    {
    goto end; //String
    }
    }

    // google_my_business_integration_options->redirect_strings
    cJSON *redirect_strings = cJSON_GetObjectItemCaseSensitive(google_my_business_integration_optionsJSON, "redirectStrings");
    if (redirect_strings) { 
    cJSON *redirect_strings_local = NULL;
    if(!cJSON_IsArray(redirect_strings)) {
        goto end;//primitive container
    }
    redirect_stringsList = list_createList();

    cJSON_ArrayForEach(redirect_strings_local, redirect_strings)
    {
        if(!cJSON_IsString(redirect_strings_local))
        {
            goto end;
        }
        list_addElement(redirect_stringsList , strdup(redirect_strings_local->valuestring));
    }
    }


    google_my_business_integration_options_local_var = google_my_business_integration_options_create (
        enable ? enable->valueint : 0,
        client_id && !cJSON_IsNull(client_id) ? strdup(client_id->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL,
        auth_string && !cJSON_IsNull(auth_string) ? strdup(auth_string->valuestring) : NULL,
        token_string && !cJSON_IsNull(token_string) ? strdup(token_string->valuestring) : NULL,
        client_secret && !cJSON_IsNull(client_secret) ? strdup(client_secret->valuestring) : NULL,
        auth_provider_x509_cert_url && !cJSON_IsNull(auth_provider_x509_cert_url) ? strdup(auth_provider_x509_cert_url->valuestring) : NULL,
        redirect_strings ? redirect_stringsList : NULL
        );

    return google_my_business_integration_options_local_var;
end:
    if (redirect_stringsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, redirect_stringsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(redirect_stringsList);
        redirect_stringsList = NULL;
    }
    return NULL;

}
