#ifndef system_overview_dto_TEST
#define system_overview_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define system_overview_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/system_overview_dto.h"
system_overview_dto_t* instantiate_system_overview_dto(int include_optional);



system_overview_dto_t* instantiate_system_overview_dto(int include_optional) {
  system_overview_dto_t* system_overview_dto = NULL;
  if (include_optional) {
    system_overview_dto = system_overview_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56
    );
  } else {
    system_overview_dto = system_overview_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56
    );
  }

  return system_overview_dto;
}


#ifdef system_overview_dto_MAIN

void test_system_overview_dto(int include_optional) {
    system_overview_dto_t* system_overview_dto_1 = instantiate_system_overview_dto(include_optional);

	cJSON* jsonsystem_overview_dto_1 = system_overview_dto_convertToJSON(system_overview_dto_1);
	printf("system_overview_dto :\n%s\n", cJSON_Print(jsonsystem_overview_dto_1));
	system_overview_dto_t* system_overview_dto_2 = system_overview_dto_parseFromJSON(jsonsystem_overview_dto_1);
	cJSON* jsonsystem_overview_dto_2 = system_overview_dto_convertToJSON(system_overview_dto_2);
	printf("repeating system_overview_dto:\n%s\n", cJSON_Print(jsonsystem_overview_dto_2));
}

int main() {
  test_system_overview_dto(1);
  test_system_overview_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // system_overview_dto_MAIN
#endif // system_overview_dto_TEST
