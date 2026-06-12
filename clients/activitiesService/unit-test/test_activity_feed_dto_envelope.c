#ifndef activity_feed_dto_envelope_TEST
#define activity_feed_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_feed_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_feed_dto_envelope.h"
activity_feed_dto_envelope_t* instantiate_activity_feed_dto_envelope(int include_optional);

#include "test_activity_feed_dto.c"


activity_feed_dto_envelope_t* instantiate_activity_feed_dto_envelope(int include_optional) {
  activity_feed_dto_envelope_t* activity_feed_dto_envelope = NULL;
  if (include_optional) {
    activity_feed_dto_envelope = activity_feed_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_activity_feed_dto(0)
    );
  } else {
    activity_feed_dto_envelope = activity_feed_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return activity_feed_dto_envelope;
}


#ifdef activity_feed_dto_envelope_MAIN

void test_activity_feed_dto_envelope(int include_optional) {
    activity_feed_dto_envelope_t* activity_feed_dto_envelope_1 = instantiate_activity_feed_dto_envelope(include_optional);

	cJSON* jsonactivity_feed_dto_envelope_1 = activity_feed_dto_envelope_convertToJSON(activity_feed_dto_envelope_1);
	printf("activity_feed_dto_envelope :\n%s\n", cJSON_Print(jsonactivity_feed_dto_envelope_1));
	activity_feed_dto_envelope_t* activity_feed_dto_envelope_2 = activity_feed_dto_envelope_parseFromJSON(jsonactivity_feed_dto_envelope_1);
	cJSON* jsonactivity_feed_dto_envelope_2 = activity_feed_dto_envelope_convertToJSON(activity_feed_dto_envelope_2);
	printf("repeating activity_feed_dto_envelope:\n%s\n", cJSON_Print(jsonactivity_feed_dto_envelope_2));
}

int main() {
  test_activity_feed_dto_envelope(1);
  test_activity_feed_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_feed_dto_envelope_MAIN
#endif // activity_feed_dto_envelope_TEST
