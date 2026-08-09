#ifndef inbox_message_dto_TEST
#define inbox_message_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inbox_message_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inbox_message_dto.h"
inbox_message_dto_t* instantiate_inbox_message_dto(int include_optional);



inbox_message_dto_t* instantiate_inbox_message_dto(int include_optional) {
  inbox_message_dto_t* inbox_message_dto = NULL;
  if (include_optional) {
    inbox_message_dto = inbox_message_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      systemservice_inbox_message_dto_STATUS_Received,
      56,
      56,
      systemservice_inbox_message_dto_VERIFICATIONSTATUS_Unverified,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    inbox_message_dto = inbox_message_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      systemservice_inbox_message_dto_STATUS_Received,
      56,
      56,
      systemservice_inbox_message_dto_VERIFICATIONSTATUS_Unverified,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return inbox_message_dto;
}


#ifdef inbox_message_dto_MAIN

void test_inbox_message_dto(int include_optional) {
    inbox_message_dto_t* inbox_message_dto_1 = instantiate_inbox_message_dto(include_optional);

	cJSON* jsoninbox_message_dto_1 = inbox_message_dto_convertToJSON(inbox_message_dto_1);
	printf("inbox_message_dto :\n%s\n", cJSON_Print(jsoninbox_message_dto_1));
	inbox_message_dto_t* inbox_message_dto_2 = inbox_message_dto_parseFromJSON(jsoninbox_message_dto_1);
	cJSON* jsoninbox_message_dto_2 = inbox_message_dto_convertToJSON(inbox_message_dto_2);
	printf("repeating inbox_message_dto:\n%s\n", cJSON_Print(jsoninbox_message_dto_2));
}

int main() {
  test_inbox_message_dto(1);
  test_inbox_message_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // inbox_message_dto_MAIN
#endif // inbox_message_dto_TEST
