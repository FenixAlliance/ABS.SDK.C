#ifndef notification_dto_envelope_TEST
#define notification_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_dto_envelope.h"
notification_dto_envelope_t* instantiate_notification_dto_envelope(int include_optional);

#include "test_notification_dto.c"


notification_dto_envelope_t* instantiate_notification_dto_envelope(int include_optional) {
  notification_dto_envelope_t* notification_dto_envelope = NULL;
  if (include_optional) {
    notification_dto_envelope = notification_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_notification_dto(0)
    );
  } else {
    notification_dto_envelope = notification_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return notification_dto_envelope;
}


#ifdef notification_dto_envelope_MAIN

void test_notification_dto_envelope(int include_optional) {
    notification_dto_envelope_t* notification_dto_envelope_1 = instantiate_notification_dto_envelope(include_optional);

	cJSON* jsonnotification_dto_envelope_1 = notification_dto_envelope_convertToJSON(notification_dto_envelope_1);
	printf("notification_dto_envelope :\n%s\n", cJSON_Print(jsonnotification_dto_envelope_1));
	notification_dto_envelope_t* notification_dto_envelope_2 = notification_dto_envelope_parseFromJSON(jsonnotification_dto_envelope_1);
	cJSON* jsonnotification_dto_envelope_2 = notification_dto_envelope_convertToJSON(notification_dto_envelope_2);
	printf("repeating notification_dto_envelope:\n%s\n", cJSON_Print(jsonnotification_dto_envelope_2));
}

int main() {
  test_notification_dto_envelope(1);
  test_notification_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_dto_envelope_MAIN
#endif // notification_dto_envelope_TEST
