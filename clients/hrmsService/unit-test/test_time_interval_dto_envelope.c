#ifndef time_interval_dto_envelope_TEST
#define time_interval_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define time_interval_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/time_interval_dto_envelope.h"
time_interval_dto_envelope_t* instantiate_time_interval_dto_envelope(int include_optional);

#include "test_time_interval_dto.c"


time_interval_dto_envelope_t* instantiate_time_interval_dto_envelope(int include_optional) {
  time_interval_dto_envelope_t* time_interval_dto_envelope = NULL;
  if (include_optional) {
    time_interval_dto_envelope = time_interval_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_time_interval_dto(0)
    );
  } else {
    time_interval_dto_envelope = time_interval_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return time_interval_dto_envelope;
}


#ifdef time_interval_dto_envelope_MAIN

void test_time_interval_dto_envelope(int include_optional) {
    time_interval_dto_envelope_t* time_interval_dto_envelope_1 = instantiate_time_interval_dto_envelope(include_optional);

	cJSON* jsontime_interval_dto_envelope_1 = time_interval_dto_envelope_convertToJSON(time_interval_dto_envelope_1);
	printf("time_interval_dto_envelope :\n%s\n", cJSON_Print(jsontime_interval_dto_envelope_1));
	time_interval_dto_envelope_t* time_interval_dto_envelope_2 = time_interval_dto_envelope_parseFromJSON(jsontime_interval_dto_envelope_1);
	cJSON* jsontime_interval_dto_envelope_2 = time_interval_dto_envelope_convertToJSON(time_interval_dto_envelope_2);
	printf("repeating time_interval_dto_envelope:\n%s\n", cJSON_Print(jsontime_interval_dto_envelope_2));
}

int main() {
  test_time_interval_dto_envelope(1);
  test_time_interval_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // time_interval_dto_envelope_MAIN
#endif // time_interval_dto_envelope_TEST
