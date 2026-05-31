#ifndef leave_application_dto_envelope_TEST
#define leave_application_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define leave_application_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/leave_application_dto_envelope.h"
leave_application_dto_envelope_t* instantiate_leave_application_dto_envelope(int include_optional);

#include "test_leave_application_dto.c"


leave_application_dto_envelope_t* instantiate_leave_application_dto_envelope(int include_optional) {
  leave_application_dto_envelope_t* leave_application_dto_envelope = NULL;
  if (include_optional) {
    leave_application_dto_envelope = leave_application_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_leave_application_dto(0)
    );
  } else {
    leave_application_dto_envelope = leave_application_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return leave_application_dto_envelope;
}


#ifdef leave_application_dto_envelope_MAIN

void test_leave_application_dto_envelope(int include_optional) {
    leave_application_dto_envelope_t* leave_application_dto_envelope_1 = instantiate_leave_application_dto_envelope(include_optional);

	cJSON* jsonleave_application_dto_envelope_1 = leave_application_dto_envelope_convertToJSON(leave_application_dto_envelope_1);
	printf("leave_application_dto_envelope :\n%s\n", cJSON_Print(jsonleave_application_dto_envelope_1));
	leave_application_dto_envelope_t* leave_application_dto_envelope_2 = leave_application_dto_envelope_parseFromJSON(jsonleave_application_dto_envelope_1);
	cJSON* jsonleave_application_dto_envelope_2 = leave_application_dto_envelope_convertToJSON(leave_application_dto_envelope_2);
	printf("repeating leave_application_dto_envelope:\n%s\n", cJSON_Print(jsonleave_application_dto_envelope_2));
}

int main() {
  test_leave_application_dto_envelope(1);
  test_leave_application_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // leave_application_dto_envelope_MAIN
#endif // leave_application_dto_envelope_TEST
