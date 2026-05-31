#ifndef shift_update_dto_TEST
#define shift_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shift_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shift_update_dto.h"
shift_update_dto_t* instantiate_shift_update_dto(int include_optional);



shift_update_dto_t* instantiate_shift_update_dto(int include_optional) {
  shift_update_dto_t* shift_update_dto = NULL;
  if (include_optional) {
    shift_update_dto = shift_update_dto_create(
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
      hrmsservice_shift_update_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_shift_update_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0"
    );
  } else {
    shift_update_dto = shift_update_dto_create(
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
      hrmsservice_shift_update_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_shift_update_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0"
    );
  }

  return shift_update_dto;
}


#ifdef shift_update_dto_MAIN

void test_shift_update_dto(int include_optional) {
    shift_update_dto_t* shift_update_dto_1 = instantiate_shift_update_dto(include_optional);

	cJSON* jsonshift_update_dto_1 = shift_update_dto_convertToJSON(shift_update_dto_1);
	printf("shift_update_dto :\n%s\n", cJSON_Print(jsonshift_update_dto_1));
	shift_update_dto_t* shift_update_dto_2 = shift_update_dto_parseFromJSON(jsonshift_update_dto_1);
	cJSON* jsonshift_update_dto_2 = shift_update_dto_convertToJSON(shift_update_dto_2);
	printf("repeating shift_update_dto:\n%s\n", cJSON_Print(jsonshift_update_dto_2));
}

int main() {
  test_shift_update_dto(1);
  test_shift_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shift_update_dto_MAIN
#endif // shift_update_dto_TEST
