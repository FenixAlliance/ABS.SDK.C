#ifndef workstation_update_dto_TEST
#define workstation_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define workstation_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/workstation_update_dto.h"
workstation_update_dto_t* instantiate_workstation_update_dto(int include_optional);



workstation_update_dto_t* instantiate_workstation_update_dto(int include_optional) {
  workstation_update_dto_t* workstation_update_dto = NULL;
  if (include_optional) {
    workstation_update_dto = workstation_update_dto_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    workstation_update_dto = workstation_update_dto_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return workstation_update_dto;
}


#ifdef workstation_update_dto_MAIN

void test_workstation_update_dto(int include_optional) {
    workstation_update_dto_t* workstation_update_dto_1 = instantiate_workstation_update_dto(include_optional);

	cJSON* jsonworkstation_update_dto_1 = workstation_update_dto_convertToJSON(workstation_update_dto_1);
	printf("workstation_update_dto :\n%s\n", cJSON_Print(jsonworkstation_update_dto_1));
	workstation_update_dto_t* workstation_update_dto_2 = workstation_update_dto_parseFromJSON(jsonworkstation_update_dto_1);
	cJSON* jsonworkstation_update_dto_2 = workstation_update_dto_convertToJSON(workstation_update_dto_2);
	printf("repeating workstation_update_dto:\n%s\n", cJSON_Print(jsonworkstation_update_dto_2));
}

int main() {
  test_workstation_update_dto(1);
  test_workstation_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // workstation_update_dto_MAIN
#endif // workstation_update_dto_TEST
