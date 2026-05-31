#ifndef schedule_update_dto_TEST
#define schedule_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define schedule_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/schedule_update_dto.h"
schedule_update_dto_t* instantiate_schedule_update_dto(int include_optional);



schedule_update_dto_t* instantiate_schedule_update_dto(int include_optional) {
  schedule_update_dto_t* schedule_update_dto = NULL;
  if (include_optional) {
    schedule_update_dto = schedule_update_dto_create(
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    schedule_update_dto = schedule_update_dto_create(
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return schedule_update_dto;
}


#ifdef schedule_update_dto_MAIN

void test_schedule_update_dto(int include_optional) {
    schedule_update_dto_t* schedule_update_dto_1 = instantiate_schedule_update_dto(include_optional);

	cJSON* jsonschedule_update_dto_1 = schedule_update_dto_convertToJSON(schedule_update_dto_1);
	printf("schedule_update_dto :\n%s\n", cJSON_Print(jsonschedule_update_dto_1));
	schedule_update_dto_t* schedule_update_dto_2 = schedule_update_dto_parseFromJSON(jsonschedule_update_dto_1);
	cJSON* jsonschedule_update_dto_2 = schedule_update_dto_convertToJSON(schedule_update_dto_2);
	printf("repeating schedule_update_dto:\n%s\n", cJSON_Print(jsonschedule_update_dto_2));
}

int main() {
  test_schedule_update_dto(1);
  test_schedule_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // schedule_update_dto_MAIN
#endif // schedule_update_dto_TEST
