#ifndef shift_dto_TEST
#define shift_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shift_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shift_dto.h"
shift_dto_t* instantiate_shift_dto(int include_optional);



shift_dto_t* instantiate_shift_dto(int include_optional) {
  shift_dto_t* shift_dto = NULL;
  if (include_optional) {
    shift_dto = shift_dto_create(
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
      hrmsservice_shift_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_shift_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    shift_dto = shift_dto_create(
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
      hrmsservice_shift_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_shift_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return shift_dto;
}


#ifdef shift_dto_MAIN

void test_shift_dto(int include_optional) {
    shift_dto_t* shift_dto_1 = instantiate_shift_dto(include_optional);

	cJSON* jsonshift_dto_1 = shift_dto_convertToJSON(shift_dto_1);
	printf("shift_dto :\n%s\n", cJSON_Print(jsonshift_dto_1));
	shift_dto_t* shift_dto_2 = shift_dto_parseFromJSON(jsonshift_dto_1);
	cJSON* jsonshift_dto_2 = shift_dto_convertToJSON(shift_dto_2);
	printf("repeating shift_dto:\n%s\n", cJSON_Print(jsonshift_dto_2));
}

int main() {
  test_shift_dto(1);
  test_shift_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shift_dto_MAIN
#endif // shift_dto_TEST
