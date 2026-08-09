#ifndef upload_social_post_image_attachment_async_request_TEST
#define upload_social_post_image_attachment_async_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upload_social_post_image_attachment_async_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upload_social_post_image_attachment_async_request.h"
upload_social_post_image_attachment_async_request_t* instantiate_upload_social_post_image_attachment_async_request(int include_optional);



upload_social_post_image_attachment_async_request_t* instantiate_upload_social_post_image_attachment_async_request(int include_optional) {
  upload_social_post_image_attachment_async_request_t* upload_social_post_image_attachment_async_request = NULL;
  if (include_optional) {
    upload_social_post_image_attachment_async_request = upload_social_post_image_attachment_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  } else {
    upload_social_post_image_attachment_async_request = upload_social_post_image_attachment_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  }

  return upload_social_post_image_attachment_async_request;
}


#ifdef upload_social_post_image_attachment_async_request_MAIN

void test_upload_social_post_image_attachment_async_request(int include_optional) {
    upload_social_post_image_attachment_async_request_t* upload_social_post_image_attachment_async_request_1 = instantiate_upload_social_post_image_attachment_async_request(include_optional);

	cJSON* jsonupload_social_post_image_attachment_async_request_1 = upload_social_post_image_attachment_async_request_convertToJSON(upload_social_post_image_attachment_async_request_1);
	printf("upload_social_post_image_attachment_async_request :\n%s\n", cJSON_Print(jsonupload_social_post_image_attachment_async_request_1));
	upload_social_post_image_attachment_async_request_t* upload_social_post_image_attachment_async_request_2 = upload_social_post_image_attachment_async_request_parseFromJSON(jsonupload_social_post_image_attachment_async_request_1);
	cJSON* jsonupload_social_post_image_attachment_async_request_2 = upload_social_post_image_attachment_async_request_convertToJSON(upload_social_post_image_attachment_async_request_2);
	printf("repeating upload_social_post_image_attachment_async_request:\n%s\n", cJSON_Print(jsonupload_social_post_image_attachment_async_request_2));
}

int main() {
  test_upload_social_post_image_attachment_async_request(1);
  test_upload_social_post_image_attachment_async_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // upload_social_post_image_attachment_async_request_MAIN
#endif // upload_social_post_image_attachment_async_request_TEST
