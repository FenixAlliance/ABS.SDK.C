#ifndef activity_type_create_dto_TEST
#define activity_type_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_type_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_type_create_dto.h"
activity_type_create_dto_t* instantiate_activity_type_create_dto(int include_optional);



activity_type_create_dto_t* instantiate_activity_type_create_dto(int include_optional) {
  activity_type_create_dto_t* activity_type_create_dto = NULL;
  if (include_optional) {
    activity_type_create_dto = activity_type_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    activity_type_create_dto = activity_type_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return activity_type_create_dto;
}


#ifdef activity_type_create_dto_MAIN

void test_activity_type_create_dto(int include_optional) {
    activity_type_create_dto_t* activity_type_create_dto_1 = instantiate_activity_type_create_dto(include_optional);

	cJSON* jsonactivity_type_create_dto_1 = activity_type_create_dto_convertToJSON(activity_type_create_dto_1);
	printf("activity_type_create_dto :\n%s\n", cJSON_Print(jsonactivity_type_create_dto_1));
	activity_type_create_dto_t* activity_type_create_dto_2 = activity_type_create_dto_parseFromJSON(jsonactivity_type_create_dto_1);
	cJSON* jsonactivity_type_create_dto_2 = activity_type_create_dto_convertToJSON(activity_type_create_dto_2);
	printf("repeating activity_type_create_dto:\n%s\n", cJSON_Print(jsonactivity_type_create_dto_2));
}

int main() {
  test_activity_type_create_dto(1);
  test_activity_type_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_type_create_dto_MAIN
#endif // activity_type_create_dto_TEST
