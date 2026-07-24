#ifndef workstation_dto_TEST
#define workstation_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define workstation_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/workstation_dto.h"
workstation_dto_t* instantiate_workstation_dto(int include_optional);



workstation_dto_t* instantiate_workstation_dto(int include_optional) {
  workstation_dto_t* workstation_dto = NULL;
  if (include_optional) {
    workstation_dto = workstation_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    workstation_dto = workstation_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return workstation_dto;
}


#ifdef workstation_dto_MAIN

void test_workstation_dto(int include_optional) {
    workstation_dto_t* workstation_dto_1 = instantiate_workstation_dto(include_optional);

	cJSON* jsonworkstation_dto_1 = workstation_dto_convertToJSON(workstation_dto_1);
	printf("workstation_dto :\n%s\n", cJSON_Print(jsonworkstation_dto_1));
	workstation_dto_t* workstation_dto_2 = workstation_dto_parseFromJSON(jsonworkstation_dto_1);
	cJSON* jsonworkstation_dto_2 = workstation_dto_convertToJSON(workstation_dto_2);
	printf("repeating workstation_dto:\n%s\n", cJSON_Print(jsonworkstation_dto_2));
}

int main() {
  test_workstation_dto(1);
  test_workstation_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // workstation_dto_MAIN
#endif // workstation_dto_TEST
