#ifndef workstation_create_dto_TEST
#define workstation_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define workstation_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/workstation_create_dto.h"
workstation_create_dto_t* instantiate_workstation_create_dto(int include_optional);



workstation_create_dto_t* instantiate_workstation_create_dto(int include_optional) {
  workstation_create_dto_t* workstation_create_dto = NULL;
  if (include_optional) {
    workstation_create_dto = workstation_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    workstation_create_dto = workstation_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return workstation_create_dto;
}


#ifdef workstation_create_dto_MAIN

void test_workstation_create_dto(int include_optional) {
    workstation_create_dto_t* workstation_create_dto_1 = instantiate_workstation_create_dto(include_optional);

	cJSON* jsonworkstation_create_dto_1 = workstation_create_dto_convertToJSON(workstation_create_dto_1);
	printf("workstation_create_dto :\n%s\n", cJSON_Print(jsonworkstation_create_dto_1));
	workstation_create_dto_t* workstation_create_dto_2 = workstation_create_dto_parseFromJSON(jsonworkstation_create_dto_1);
	cJSON* jsonworkstation_create_dto_2 = workstation_create_dto_convertToJSON(workstation_create_dto_2);
	printf("repeating workstation_create_dto:\n%s\n", cJSON_Print(jsonworkstation_create_dto_2));
}

int main() {
  test_workstation_create_dto(1);
  test_workstation_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // workstation_create_dto_MAIN
#endif // workstation_create_dto_TEST
