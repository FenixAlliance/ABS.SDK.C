/*
 * upload_social_post_image_attachment_async_request.h
 *
 * 
 */

#ifndef _upload_social_post_image_attachment_async_request_H_
#define _upload_social_post_image_attachment_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct upload_social_post_image_attachment_async_request_t upload_social_post_image_attachment_async_request_t;




typedef struct upload_social_post_image_attachment_async_request_t {
    binary_t* file; //binary

} upload_social_post_image_attachment_async_request_t;

upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request_create(
    binary_t* file
);

void upload_social_post_image_attachment_async_request_free(upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request);

upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request_parseFromJSON(cJSON *upload_social_post_image_attachment_async_requestJSON);

cJSON *upload_social_post_image_attachment_async_request_convertToJSON(upload_social_post_image_attachment_async_request_t *upload_social_post_image_attachment_async_request);

#endif /* _upload_social_post_image_attachment_async_request_H_ */

