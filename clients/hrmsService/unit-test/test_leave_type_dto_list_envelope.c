#ifndef leave_type_dto_list_envelope_TEST
#define leave_type_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define leave_type_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/leave_type_dto_list_envelope.h"
leave_type_dto_list_envelope_t* instantiate_leave_type_dto_list_envelope(int include_optional);



leave_type_dto_list_envelope_t* instantiate_leave_type_dto_list_envelope(int include_optional) {
  leave_type_dto_list_envelope_t* leave_type_dto_list_envelope = NULL;
  if (include_optional) {
    leave_type_dto_list_envelope = leave_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    leave_type_dto_list_envelope = leave_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return leave_type_dto_list_envelope;
}


#ifdef leave_type_dto_list_envelope_MAIN

void test_leave_type_dto_list_envelope(int include_optional) {
    leave_type_dto_list_envelope_t* leave_type_dto_list_envelope_1 = instantiate_leave_type_dto_list_envelope(include_optional);

	cJSON* jsonleave_type_dto_list_envelope_1 = leave_type_dto_list_envelope_convertToJSON(leave_type_dto_list_envelope_1);
	printf("leave_type_dto_list_envelope :\n%s\n", cJSON_Print(jsonleave_type_dto_list_envelope_1));
	leave_type_dto_list_envelope_t* leave_type_dto_list_envelope_2 = leave_type_dto_list_envelope_parseFromJSON(jsonleave_type_dto_list_envelope_1);
	cJSON* jsonleave_type_dto_list_envelope_2 = leave_type_dto_list_envelope_convertToJSON(leave_type_dto_list_envelope_2);
	printf("repeating leave_type_dto_list_envelope:\n%s\n", cJSON_Print(jsonleave_type_dto_list_envelope_2));
}

int main() {
  test_leave_type_dto_list_envelope(1);
  test_leave_type_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // leave_type_dto_list_envelope_MAIN
#endif // leave_type_dto_list_envelope_TEST
