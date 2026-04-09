#ifndef average_dto_TEST
#define average_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define average_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/average_dto.h"
average_dto_t* instantiate_average_dto(int include_optional);



average_dto_t* instantiate_average_dto(int include_optional) {
  average_dto_t* average_dto = NULL;
  if (include_optional) {
    average_dto = average_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337
    );
  } else {
    average_dto = average_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337
    );
  }

  return average_dto;
}


#ifdef average_dto_MAIN

void test_average_dto(int include_optional) {
    average_dto_t* average_dto_1 = instantiate_average_dto(include_optional);

	cJSON* jsonaverage_dto_1 = average_dto_convertToJSON(average_dto_1);
	printf("average_dto :\n%s\n", cJSON_Print(jsonaverage_dto_1));
	average_dto_t* average_dto_2 = average_dto_parseFromJSON(jsonaverage_dto_1);
	cJSON* jsonaverage_dto_2 = average_dto_convertToJSON(average_dto_2);
	printf("repeating average_dto:\n%s\n", cJSON_Print(jsonaverage_dto_2));
}

int main() {
  test_average_dto(1);
  test_average_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // average_dto_MAIN
#endif // average_dto_TEST
