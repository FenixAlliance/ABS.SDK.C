#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_and_quick_sign_async_request.h"



prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request_create(
    char *id,
    binary_t* file,
    char *title,
    char *contact_id,
    char *signing_certificate_id,
    char *signing_profile_id,
    char *provider_name
    ) {
    prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request_local_var = malloc(sizeof(prepare_and_quick_sign_async_request_t));
    if (!prepare_and_quick_sign_async_request_local_var) {
        return NULL;
    }
    prepare_and_quick_sign_async_request_local_var->id = id;
    prepare_and_quick_sign_async_request_local_var->file = file;
    prepare_and_quick_sign_async_request_local_var->title = title;
    prepare_and_quick_sign_async_request_local_var->contact_id = contact_id;
    prepare_and_quick_sign_async_request_local_var->signing_certificate_id = signing_certificate_id;
    prepare_and_quick_sign_async_request_local_var->signing_profile_id = signing_profile_id;
    prepare_and_quick_sign_async_request_local_var->provider_name = provider_name;

    return prepare_and_quick_sign_async_request_local_var;
}


void prepare_and_quick_sign_async_request_free(prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request) {
    if(NULL == prepare_and_quick_sign_async_request){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_and_quick_sign_async_request->id) {
        free(prepare_and_quick_sign_async_request->id);
        prepare_and_quick_sign_async_request->id = NULL;
    }
    if (prepare_and_quick_sign_async_request->file) {
        free(prepare_and_quick_sign_async_request->file->data);
        prepare_and_quick_sign_async_request->file = NULL;
    }
    if (prepare_and_quick_sign_async_request->title) {
        free(prepare_and_quick_sign_async_request->title);
        prepare_and_quick_sign_async_request->title = NULL;
    }
    if (prepare_and_quick_sign_async_request->contact_id) {
        free(prepare_and_quick_sign_async_request->contact_id);
        prepare_and_quick_sign_async_request->contact_id = NULL;
    }
    if (prepare_and_quick_sign_async_request->signing_certificate_id) {
        free(prepare_and_quick_sign_async_request->signing_certificate_id);
        prepare_and_quick_sign_async_request->signing_certificate_id = NULL;
    }
    if (prepare_and_quick_sign_async_request->signing_profile_id) {
        free(prepare_and_quick_sign_async_request->signing_profile_id);
        prepare_and_quick_sign_async_request->signing_profile_id = NULL;
    }
    if (prepare_and_quick_sign_async_request->provider_name) {
        free(prepare_and_quick_sign_async_request->provider_name);
        prepare_and_quick_sign_async_request->provider_name = NULL;
    }
    free(prepare_and_quick_sign_async_request);
}

cJSON *prepare_and_quick_sign_async_request_convertToJSON(prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request) {
    cJSON *item = cJSON_CreateObject();

    // prepare_and_quick_sign_async_request->id
    if(prepare_and_quick_sign_async_request->id) {
    if(cJSON_AddStringToObject(item, "id", prepare_and_quick_sign_async_request->id) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_quick_sign_async_request->file
    if(prepare_and_quick_sign_async_request->file) {
    char* encoded_str_file = base64encode(prepare_and_quick_sign_async_request->file->data,prepare_and_quick_sign_async_request->file->len);
    if(cJSON_AddStringToObject(item, "file", encoded_str_file) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_file);
    }


    // prepare_and_quick_sign_async_request->title
    if(prepare_and_quick_sign_async_request->title) {
    if(cJSON_AddStringToObject(item, "title", prepare_and_quick_sign_async_request->title) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_quick_sign_async_request->contact_id
    if(prepare_and_quick_sign_async_request->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", prepare_and_quick_sign_async_request->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_quick_sign_async_request->signing_certificate_id
    if(prepare_and_quick_sign_async_request->signing_certificate_id) {
    if(cJSON_AddStringToObject(item, "signingCertificateId", prepare_and_quick_sign_async_request->signing_certificate_id) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_quick_sign_async_request->signing_profile_id
    if(prepare_and_quick_sign_async_request->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", prepare_and_quick_sign_async_request->signing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // prepare_and_quick_sign_async_request->provider_name
    if(prepare_and_quick_sign_async_request->provider_name) {
    if(cJSON_AddStringToObject(item, "providerName", prepare_and_quick_sign_async_request->provider_name) == NULL) {
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

prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request_parseFromJSON(cJSON *prepare_and_quick_sign_async_requestJSON){

    prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request_local_var = NULL;

    // prepare_and_quick_sign_async_request->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // prepare_and_quick_sign_async_request->file
    cJSON *file = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "file");
    binary_t* decoded_str_file = malloc(sizeof(struct binary_t));
    if (file) { 
    if(!cJSON_IsString(file))
    {
    goto end; //Binary
    }
    decoded_str_file->data = base64decode(file->valuestring, strlen(file->valuestring), &decoded_str_file->len);
    if (!decoded_str_file->data) {
        goto end;
    }
    }

    // prepare_and_quick_sign_async_request->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // prepare_and_quick_sign_async_request->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // prepare_and_quick_sign_async_request->signing_certificate_id
    cJSON *signing_certificate_id = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "signingCertificateId");
    if (signing_certificate_id) { 
    if(!cJSON_IsString(signing_certificate_id) && !cJSON_IsNull(signing_certificate_id))
    {
    goto end; //String
    }
    }

    // prepare_and_quick_sign_async_request->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }

    // prepare_and_quick_sign_async_request->provider_name
    cJSON *provider_name = cJSON_GetObjectItemCaseSensitive(prepare_and_quick_sign_async_requestJSON, "providerName");
    if (provider_name) { 
    if(!cJSON_IsString(provider_name) && !cJSON_IsNull(provider_name))
    {
    goto end; //String
    }
    }


    prepare_and_quick_sign_async_request_local_var = prepare_and_quick_sign_async_request_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        file ? decoded_str_file : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        signing_certificate_id && !cJSON_IsNull(signing_certificate_id) ? strdup(signing_certificate_id->valuestring) : NULL,
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL,
        provider_name && !cJSON_IsNull(provider_name) ? strdup(provider_name->valuestring) : NULL
        );

    return prepare_and_quick_sign_async_request_local_var;
end:
    return NULL;

}
