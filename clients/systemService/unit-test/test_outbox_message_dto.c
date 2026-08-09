#ifndef outbox_message_dto_TEST
#define outbox_message_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define outbox_message_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/outbox_message_dto.h"
outbox_message_dto_t* instantiate_outbox_message_dto(int include_optional);



outbox_message_dto_t* instantiate_outbox_message_dto(int include_optional) {
  outbox_message_dto_t* outbox_message_dto = NULL;
  if (include_optional) {
    outbox_message_dto = outbox_message_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      systemservice_outbox_message_dto_KIND_Event,
      "0",
      systemservice_outbox_message_dto_STATUS_Pending,
      56,
      56,
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
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    outbox_message_dto = outbox_message_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      systemservice_outbox_message_dto_KIND_Event,
      "0",
      systemservice_outbox_message_dto_STATUS_Pending,
      56,
      56,
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
      "2013-10-20T19:20:30+01:00"
    );
  }

  return outbox_message_dto;
}


#ifdef outbox_message_dto_MAIN

void test_outbox_message_dto(int include_optional) {
    outbox_message_dto_t* outbox_message_dto_1 = instantiate_outbox_message_dto(include_optional);

	cJSON* jsonoutbox_message_dto_1 = outbox_message_dto_convertToJSON(outbox_message_dto_1);
	printf("outbox_message_dto :\n%s\n", cJSON_Print(jsonoutbox_message_dto_1));
	outbox_message_dto_t* outbox_message_dto_2 = outbox_message_dto_parseFromJSON(jsonoutbox_message_dto_1);
	cJSON* jsonoutbox_message_dto_2 = outbox_message_dto_convertToJSON(outbox_message_dto_2);
	printf("repeating outbox_message_dto:\n%s\n", cJSON_Print(jsonoutbox_message_dto_2));
}

int main() {
  test_outbox_message_dto(1);
  test_outbox_message_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // outbox_message_dto_MAIN
#endif // outbox_message_dto_TEST
