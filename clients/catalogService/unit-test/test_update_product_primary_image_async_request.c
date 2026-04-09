#ifndef update_product_primary_image_async_request_TEST
#define update_product_primary_image_async_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_product_primary_image_async_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_product_primary_image_async_request.h"
update_product_primary_image_async_request_t* instantiate_update_product_primary_image_async_request(int include_optional);



update_product_primary_image_async_request_t* instantiate_update_product_primary_image_async_request(int include_optional) {
  update_product_primary_image_async_request_t* update_product_primary_image_async_request = NULL;
  if (include_optional) {
    update_product_primary_image_async_request = update_product_primary_image_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  } else {
    update_product_primary_image_async_request = update_product_primary_image_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  }

  return update_product_primary_image_async_request;
}


#ifdef update_product_primary_image_async_request_MAIN

void test_update_product_primary_image_async_request(int include_optional) {
    update_product_primary_image_async_request_t* update_product_primary_image_async_request_1 = instantiate_update_product_primary_image_async_request(include_optional);

	cJSON* jsonupdate_product_primary_image_async_request_1 = update_product_primary_image_async_request_convertToJSON(update_product_primary_image_async_request_1);
	printf("update_product_primary_image_async_request :\n%s\n", cJSON_Print(jsonupdate_product_primary_image_async_request_1));
	update_product_primary_image_async_request_t* update_product_primary_image_async_request_2 = update_product_primary_image_async_request_parseFromJSON(jsonupdate_product_primary_image_async_request_1);
	cJSON* jsonupdate_product_primary_image_async_request_2 = update_product_primary_image_async_request_convertToJSON(update_product_primary_image_async_request_2);
	printf("repeating update_product_primary_image_async_request:\n%s\n", cJSON_Print(jsonupdate_product_primary_image_async_request_2));
}

int main() {
  test_update_product_primary_image_async_request(1);
  test_update_product_primary_image_async_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_product_primary_image_async_request_MAIN
#endif // update_product_primary_image_async_request_TEST
