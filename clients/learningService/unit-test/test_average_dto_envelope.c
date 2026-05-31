#ifndef average_dto_envelope_TEST
#define average_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define average_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/average_dto_envelope.h"
average_dto_envelope_t* instantiate_average_dto_envelope(int include_optional);

#include "test_average_dto.c"


average_dto_envelope_t* instantiate_average_dto_envelope(int include_optional) {
  average_dto_envelope_t* average_dto_envelope = NULL;
  if (include_optional) {
    average_dto_envelope = average_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_average_dto(0)
    );
  } else {
    average_dto_envelope = average_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return average_dto_envelope;
}


#ifdef average_dto_envelope_MAIN

void test_average_dto_envelope(int include_optional) {
    average_dto_envelope_t* average_dto_envelope_1 = instantiate_average_dto_envelope(include_optional);

	cJSON* jsonaverage_dto_envelope_1 = average_dto_envelope_convertToJSON(average_dto_envelope_1);
	printf("average_dto_envelope :\n%s\n", cJSON_Print(jsonaverage_dto_envelope_1));
	average_dto_envelope_t* average_dto_envelope_2 = average_dto_envelope_parseFromJSON(jsonaverage_dto_envelope_1);
	cJSON* jsonaverage_dto_envelope_2 = average_dto_envelope_convertToJSON(average_dto_envelope_2);
	printf("repeating average_dto_envelope:\n%s\n", cJSON_Print(jsonaverage_dto_envelope_2));
}

int main() {
  test_average_dto_envelope(1);
  test_average_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // average_dto_envelope_MAIN
#endif // average_dto_envelope_TEST
