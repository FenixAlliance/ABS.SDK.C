#ifndef schedule_dto_envelope_TEST
#define schedule_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define schedule_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/schedule_dto_envelope.h"
schedule_dto_envelope_t* instantiate_schedule_dto_envelope(int include_optional);

#include "test_schedule_dto.c"


schedule_dto_envelope_t* instantiate_schedule_dto_envelope(int include_optional) {
  schedule_dto_envelope_t* schedule_dto_envelope = NULL;
  if (include_optional) {
    schedule_dto_envelope = schedule_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_schedule_dto(0)
    );
  } else {
    schedule_dto_envelope = schedule_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return schedule_dto_envelope;
}


#ifdef schedule_dto_envelope_MAIN

void test_schedule_dto_envelope(int include_optional) {
    schedule_dto_envelope_t* schedule_dto_envelope_1 = instantiate_schedule_dto_envelope(include_optional);

	cJSON* jsonschedule_dto_envelope_1 = schedule_dto_envelope_convertToJSON(schedule_dto_envelope_1);
	printf("schedule_dto_envelope :\n%s\n", cJSON_Print(jsonschedule_dto_envelope_1));
	schedule_dto_envelope_t* schedule_dto_envelope_2 = schedule_dto_envelope_parseFromJSON(jsonschedule_dto_envelope_1);
	cJSON* jsonschedule_dto_envelope_2 = schedule_dto_envelope_convertToJSON(schedule_dto_envelope_2);
	printf("repeating schedule_dto_envelope:\n%s\n", cJSON_Print(jsonschedule_dto_envelope_2));
}

int main() {
  test_schedule_dto_envelope(1);
  test_schedule_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // schedule_dto_envelope_MAIN
#endif // schedule_dto_envelope_TEST
