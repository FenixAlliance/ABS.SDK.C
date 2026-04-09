#ifndef webhook_request_dto_list_envelope_TEST
#define webhook_request_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_request_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_request_dto_list_envelope.h"
webhook_request_dto_list_envelope_t* instantiate_webhook_request_dto_list_envelope(int include_optional);



webhook_request_dto_list_envelope_t* instantiate_webhook_request_dto_list_envelope(int include_optional) {
  webhook_request_dto_list_envelope_t* webhook_request_dto_list_envelope = NULL;
  if (include_optional) {
    webhook_request_dto_list_envelope = webhook_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    webhook_request_dto_list_envelope = webhook_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return webhook_request_dto_list_envelope;
}


#ifdef webhook_request_dto_list_envelope_MAIN

void test_webhook_request_dto_list_envelope(int include_optional) {
    webhook_request_dto_list_envelope_t* webhook_request_dto_list_envelope_1 = instantiate_webhook_request_dto_list_envelope(include_optional);

	cJSON* jsonwebhook_request_dto_list_envelope_1 = webhook_request_dto_list_envelope_convertToJSON(webhook_request_dto_list_envelope_1);
	printf("webhook_request_dto_list_envelope :\n%s\n", cJSON_Print(jsonwebhook_request_dto_list_envelope_1));
	webhook_request_dto_list_envelope_t* webhook_request_dto_list_envelope_2 = webhook_request_dto_list_envelope_parseFromJSON(jsonwebhook_request_dto_list_envelope_1);
	cJSON* jsonwebhook_request_dto_list_envelope_2 = webhook_request_dto_list_envelope_convertToJSON(webhook_request_dto_list_envelope_2);
	printf("repeating webhook_request_dto_list_envelope:\n%s\n", cJSON_Print(jsonwebhook_request_dto_list_envelope_2));
}

int main() {
  test_webhook_request_dto_list_envelope(1);
  test_webhook_request_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_request_dto_list_envelope_MAIN
#endif // webhook_request_dto_list_envelope_TEST
