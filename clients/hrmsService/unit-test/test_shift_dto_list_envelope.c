#ifndef shift_dto_list_envelope_TEST
#define shift_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shift_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shift_dto_list_envelope.h"
shift_dto_list_envelope_t* instantiate_shift_dto_list_envelope(int include_optional);



shift_dto_list_envelope_t* instantiate_shift_dto_list_envelope(int include_optional) {
  shift_dto_list_envelope_t* shift_dto_list_envelope = NULL;
  if (include_optional) {
    shift_dto_list_envelope = shift_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    shift_dto_list_envelope = shift_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return shift_dto_list_envelope;
}


#ifdef shift_dto_list_envelope_MAIN

void test_shift_dto_list_envelope(int include_optional) {
    shift_dto_list_envelope_t* shift_dto_list_envelope_1 = instantiate_shift_dto_list_envelope(include_optional);

	cJSON* jsonshift_dto_list_envelope_1 = shift_dto_list_envelope_convertToJSON(shift_dto_list_envelope_1);
	printf("shift_dto_list_envelope :\n%s\n", cJSON_Print(jsonshift_dto_list_envelope_1));
	shift_dto_list_envelope_t* shift_dto_list_envelope_2 = shift_dto_list_envelope_parseFromJSON(jsonshift_dto_list_envelope_1);
	cJSON* jsonshift_dto_list_envelope_2 = shift_dto_list_envelope_convertToJSON(shift_dto_list_envelope_2);
	printf("repeating shift_dto_list_envelope:\n%s\n", cJSON_Print(jsonshift_dto_list_envelope_2));
}

int main() {
  test_shift_dto_list_envelope(1);
  test_shift_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // shift_dto_list_envelope_MAIN
#endif // shift_dto_list_envelope_TEST
