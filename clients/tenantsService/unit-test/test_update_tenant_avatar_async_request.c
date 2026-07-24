#ifndef update_tenant_avatar_async_request_TEST
#define update_tenant_avatar_async_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_tenant_avatar_async_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_tenant_avatar_async_request.h"
update_tenant_avatar_async_request_t* instantiate_update_tenant_avatar_async_request(int include_optional);



update_tenant_avatar_async_request_t* instantiate_update_tenant_avatar_async_request(int include_optional) {
  update_tenant_avatar_async_request_t* update_tenant_avatar_async_request = NULL;
  if (include_optional) {
    update_tenant_avatar_async_request = update_tenant_avatar_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  } else {
    update_tenant_avatar_async_request = update_tenant_avatar_async_request_create(
      instantiate_binary_t("blah", 5)
    );
  }

  return update_tenant_avatar_async_request;
}


#ifdef update_tenant_avatar_async_request_MAIN

void test_update_tenant_avatar_async_request(int include_optional) {
    update_tenant_avatar_async_request_t* update_tenant_avatar_async_request_1 = instantiate_update_tenant_avatar_async_request(include_optional);

	cJSON* jsonupdate_tenant_avatar_async_request_1 = update_tenant_avatar_async_request_convertToJSON(update_tenant_avatar_async_request_1);
	printf("update_tenant_avatar_async_request :\n%s\n", cJSON_Print(jsonupdate_tenant_avatar_async_request_1));
	update_tenant_avatar_async_request_t* update_tenant_avatar_async_request_2 = update_tenant_avatar_async_request_parseFromJSON(jsonupdate_tenant_avatar_async_request_1);
	cJSON* jsonupdate_tenant_avatar_async_request_2 = update_tenant_avatar_async_request_convertToJSON(update_tenant_avatar_async_request_2);
	printf("repeating update_tenant_avatar_async_request:\n%s\n", cJSON_Print(jsonupdate_tenant_avatar_async_request_2));
}

int main() {
  test_update_tenant_avatar_async_request(1);
  test_update_tenant_avatar_async_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_tenant_avatar_async_request_MAIN
#endif // update_tenant_avatar_async_request_TEST
