#ifndef update_contact_avatar_async_request_TEST
#define update_contact_avatar_async_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_contact_avatar_async_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_contact_avatar_async_request.h"
update_contact_avatar_async_request_t* instantiate_update_contact_avatar_async_request(int include_optional);



update_contact_avatar_async_request_t* instantiate_update_contact_avatar_async_request(int include_optional) {
  update_contact_avatar_async_request_t* update_contact_avatar_async_request = NULL;
  if (include_optional) {
    update_contact_avatar_async_request = update_contact_avatar_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  } else {
    update_contact_avatar_async_request = update_contact_avatar_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  }

  return update_contact_avatar_async_request;
}


#ifdef update_contact_avatar_async_request_MAIN

void test_update_contact_avatar_async_request(int include_optional) {
    update_contact_avatar_async_request_t* update_contact_avatar_async_request_1 = instantiate_update_contact_avatar_async_request(include_optional);

	cJSON* jsonupdate_contact_avatar_async_request_1 = update_contact_avatar_async_request_convertToJSON(update_contact_avatar_async_request_1);
	printf("update_contact_avatar_async_request :\n%s\n", cJSON_Print(jsonupdate_contact_avatar_async_request_1));
	update_contact_avatar_async_request_t* update_contact_avatar_async_request_2 = update_contact_avatar_async_request_parseFromJSON(jsonupdate_contact_avatar_async_request_1);
	cJSON* jsonupdate_contact_avatar_async_request_2 = update_contact_avatar_async_request_convertToJSON(update_contact_avatar_async_request_2);
	printf("repeating update_contact_avatar_async_request:\n%s\n", cJSON_Print(jsonupdate_contact_avatar_async_request_2));
}

int main() {
  test_update_contact_avatar_async_request(1);
  test_update_contact_avatar_async_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_contact_avatar_async_request_MAIN
#endif // update_contact_avatar_async_request_TEST
