#ifndef unit_dto_list_envelope_TEST
#define unit_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unit_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unit_dto_list_envelope.h"
unit_dto_list_envelope_t* instantiate_unit_dto_list_envelope(int include_optional);



unit_dto_list_envelope_t* instantiate_unit_dto_list_envelope(int include_optional) {
  unit_dto_list_envelope_t* unit_dto_list_envelope = NULL;
  if (include_optional) {
    unit_dto_list_envelope = unit_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    unit_dto_list_envelope = unit_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return unit_dto_list_envelope;
}


#ifdef unit_dto_list_envelope_MAIN

void test_unit_dto_list_envelope(int include_optional) {
    unit_dto_list_envelope_t* unit_dto_list_envelope_1 = instantiate_unit_dto_list_envelope(include_optional);

	cJSON* jsonunit_dto_list_envelope_1 = unit_dto_list_envelope_convertToJSON(unit_dto_list_envelope_1);
	printf("unit_dto_list_envelope :\n%s\n", cJSON_Print(jsonunit_dto_list_envelope_1));
	unit_dto_list_envelope_t* unit_dto_list_envelope_2 = unit_dto_list_envelope_parseFromJSON(jsonunit_dto_list_envelope_1);
	cJSON* jsonunit_dto_list_envelope_2 = unit_dto_list_envelope_convertToJSON(unit_dto_list_envelope_2);
	printf("repeating unit_dto_list_envelope:\n%s\n", cJSON_Print(jsonunit_dto_list_envelope_2));
}

int main() {
  test_unit_dto_list_envelope(1);
  test_unit_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // unit_dto_list_envelope_MAIN
#endif // unit_dto_list_envelope_TEST
