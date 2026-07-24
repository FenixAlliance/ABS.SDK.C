#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "import_signing_certificate_async_request.h"



import_signing_certificate_async_request_t *import_signing_certificate_async_request_create(
    char *id,
    binary_t* file,
    char *password,
    char *title,
    char *contact_id
    ) {
    import_signing_certificate_async_request_t *import_signing_certificate_async_request_local_var = malloc(sizeof(import_signing_certificate_async_request_t));
    if (!import_signing_certificate_async_request_local_var) {
        return NULL;
    }
    import_signing_certificate_async_request_local_var->id = id;
    import_signing_certificate_async_request_local_var->file = file;
    import_signing_certificate_async_request_local_var->password = password;
    import_signing_certificate_async_request_local_var->title = title;
    import_signing_certificate_async_request_local_var->contact_id = contact_id;

    return import_signing_certificate_async_request_local_var;
}


void import_signing_certificate_async_request_free(import_signing_certificate_async_request_t *import_signing_certificate_async_request) {
    if(NULL == import_signing_certificate_async_request){
        return ;
    }
    listEntry_t *listEntry;
    if (import_signing_certificate_async_request->id) {
        free(import_signing_certificate_async_request->id);
        import_signing_certificate_async_request->id = NULL;
    }
    if (import_signing_certificate_async_request->file) {
        free(import_signing_certificate_async_request->file->data);
        import_signing_certificate_async_request->file = NULL;
    }
    if (import_signing_certificate_async_request->password) {
        free(import_signing_certificate_async_request->password);
        import_signing_certificate_async_request->password = NULL;
    }
    if (import_signing_certificate_async_request->title) {
        free(import_signing_certificate_async_request->title);
        import_signing_certificate_async_request->title = NULL;
    }
    if (import_signing_certificate_async_request->contact_id) {
        free(import_signing_certificate_async_request->contact_id);
        import_signing_certificate_async_request->contact_id = NULL;
    }
    free(import_signing_certificate_async_request);
}

cJSON *import_signing_certificate_async_request_convertToJSON(import_signing_certificate_async_request_t *import_signing_certificate_async_request) {
    cJSON *item = cJSON_CreateObject();

    // import_signing_certificate_async_request->id
    if(import_signing_certificate_async_request->id) {
    if(cJSON_AddStringToObject(item, "id", import_signing_certificate_async_request->id) == NULL) {
    goto fail; //String
    }
    }


    // import_signing_certificate_async_request->file
    if(import_signing_certificate_async_request->file) {
    char* encoded_str_file = base64encode(import_signing_certificate_async_request->file->data,import_signing_certificate_async_request->file->len);
    if(cJSON_AddStringToObject(item, "file", encoded_str_file) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_file);
    }


    // import_signing_certificate_async_request->password
    if(import_signing_certificate_async_request->password) {
    if(cJSON_AddStringToObject(item, "password", import_signing_certificate_async_request->password) == NULL) {
    goto fail; //String
    }
    }


    // import_signing_certificate_async_request->title
    if(import_signing_certificate_async_request->title) {
    if(cJSON_AddStringToObject(item, "title", import_signing_certificate_async_request->title) == NULL) {
    goto fail; //String
    }
    }


    // import_signing_certificate_async_request->contact_id
    if(import_signing_certificate_async_request->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", import_signing_certificate_async_request->contact_id) == NULL) {
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

import_signing_certificate_async_request_t *import_signing_certificate_async_request_parseFromJSON(cJSON *import_signing_certificate_async_requestJSON){

    import_signing_certificate_async_request_t *import_signing_certificate_async_request_local_var = NULL;

    // import_signing_certificate_async_request->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(import_signing_certificate_async_requestJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // import_signing_certificate_async_request->file
    cJSON *file = cJSON_GetObjectItemCaseSensitive(import_signing_certificate_async_requestJSON, "file");
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

    // import_signing_certificate_async_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(import_signing_certificate_async_requestJSON, "password");
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // import_signing_certificate_async_request->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(import_signing_certificate_async_requestJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // import_signing_certificate_async_request->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(import_signing_certificate_async_requestJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    import_signing_certificate_async_request_local_var = import_signing_certificate_async_request_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        file ? decoded_str_file : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return import_signing_certificate_async_request_local_var;
end:
    return NULL;

}
