#ifndef shift_create_dto_TEST
#define shift_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shift_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shift_create_dto.h"
shift_create_dto_t* instantiate_shift_create_dto(int include_optional);



shift_create_dto_t* instantiate_shift_create_dto(int include_optional) {
  shift_create_dto_t* shift_create_dto = NULL;
  if (include_optional) {
    shift_create_dto = shift_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      hrmsservice_shift_create_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_shift_create_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0"
    );
  } else {
    shift_create_dto = shift_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      hrmsservice_shift_create_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_shift_create_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0"
    );
  }

  return shift_create_dto;
}


#ifdef shift_create_dto_MAIN

void test_shift_create_dto(int include_optional) {
    shift_create_dto_t* shift_create_dto_1 = instantiate_shift_create_dto(include_optional);

	cJSON* jsonshift_create_dto_1 = shift_create_dto_convertToJSON(shift_create_dto_1);
	printf("shift_create_dto :\n%s\n", cJSON_Print(jsonshift_create_dto_1));
	shift_create_dto_t* shift_create_dto_2 = shift_create_dto_parseFromJSON(jsonshift_create_dto_1);
	cJSON* jsonshift_create_dto_2 = shift_create_dto_convertToJSON(shift_create_dto_2);
	printf("repeating shift_create_dto:\n%s\n", cJSON_Print(jsonshift_create_dto_2));
}

int main() {
  test_shift_create_dto(1);
  test_shift_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shift_create_dto_MAIN
#endif // shift_create_dto_TEST
