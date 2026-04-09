#ifndef webhook_request_dto_TEST
#define webhook_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_request_dto.h"
webhook_request_dto_t* instantiate_webhook_request_dto(int include_optional);



webhook_request_dto_t* instantiate_webhook_request_dto(int include_optional) {
  webhook_request_dto_t* webhook_request_dto = NULL;
  if (include_optional) {
    webhook_request_dto = webhook_request_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    webhook_request_dto = webhook_request_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return webhook_request_dto;
}


#ifdef webhook_request_dto_MAIN

void test_webhook_request_dto(int include_optional) {
    webhook_request_dto_t* webhook_request_dto_1 = instantiate_webhook_request_dto(include_optional);

	cJSON* jsonwebhook_request_dto_1 = webhook_request_dto_convertToJSON(webhook_request_dto_1);
	printf("webhook_request_dto :\n%s\n", cJSON_Print(jsonwebhook_request_dto_1));
	webhook_request_dto_t* webhook_request_dto_2 = webhook_request_dto_parseFromJSON(jsonwebhook_request_dto_1);
	cJSON* jsonwebhook_request_dto_2 = webhook_request_dto_convertToJSON(webhook_request_dto_2);
	printf("repeating webhook_request_dto:\n%s\n", cJSON_Print(jsonwebhook_request_dto_2));
}

int main() {
  test_webhook_request_dto(1);
  test_webhook_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_request_dto_MAIN
#endif // webhook_request_dto_TEST
