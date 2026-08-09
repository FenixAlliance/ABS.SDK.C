#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "upload_social_post_image_attachment_async_request.h"



upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request_create(
    binary_t* file
    ) {
    upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request_local_var = malloc(sizeof(upload_social_post_image_attachment_async_request_t));
    if (!upload_social_post_image_attachment_async_request_local_var) {
        return NULL;
    }
    upload_social_post_image_attachment_async_request_local_var->file = file;

    return upload_social_post_image_attachment_async_request_local_var;
}


void upload_social_post_image_attachment_async_request_free(upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request) {
    if(NULL == upload_social_post_image_attachment_async_request){
        return ;
    }
    listEntry_t *listEntry;
    if (upload_social_post_image_attachment_async_request->file) {
        free(upload_social_post_image_attachment_async_request->file->data);
        upload_social_post_image_attachment_async_request->file = NULL;
    }
    free(upload_social_post_image_attachment_async_request);
}

cJSON *upload_social_post_image_attachment_async_request_convertToJSON(upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request) {
    cJSON *item = cJSON_CreateObject();

    // upload_social_post_image_attachment_async_request->file
    if(upload_social_post_image_attachment_async_request->file) {
    char* encoded_str_file = base64encode(upload_social_post_image_attachment_async_request->file->data,upload_social_post_image_attachment_async_request->file->len);
    if(cJSON_AddStringToObject(item, "file", encoded_str_file) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_file);
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request_parseFromJSON(cJSON *upload_social_post_image_attachment_async_requestJSON){

    upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request_local_var = NULL;

    // upload_social_post_image_attachment_async_request->file
    cJSON *file = cJSON_GetObjectItemCaseSensitive(upload_social_post_image_attachment_async_requestJSON, "file");
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


    upload_social_post_image_attachment_async_request_local_var = upload_social_post_image_attachment_async_request_create (
        file ? decoded_str_file : NULL
        );

    return upload_social_post_image_attachment_async_request_local_var;
end:
    return NULL;

}
