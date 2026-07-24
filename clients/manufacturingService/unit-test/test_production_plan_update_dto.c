#ifndef production_plan_update_dto_TEST
#define production_plan_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define production_plan_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/production_plan_update_dto.h"
production_plan_update_dto_t* instantiate_production_plan_update_dto(int include_optional);



production_plan_update_dto_t* instantiate_production_plan_update_dto(int include_optional) {
  production_plan_update_dto_t* production_plan_update_dto = NULL;
  if (include_optional) {
    production_plan_update_dto = production_plan_update_dto_create(
      "0",
      "0"
    );
  } else {
    production_plan_update_dto = production_plan_update_dto_create(
      "0",
      "0"
    );
  }

  return production_plan_update_dto;
}


#ifdef production_plan_update_dto_MAIN

void test_production_plan_update_dto(int include_optional) {
    production_plan_update_dto_t* production_plan_update_dto_1 = instantiate_production_plan_update_dto(include_optional);

	cJSON* jsonproduction_plan_update_dto_1 = production_plan_update_dto_convertToJSON(production_plan_update_dto_1);
	printf("production_plan_update_dto :\n%s\n", cJSON_Print(jsonproduction_plan_update_dto_1));
	production_plan_update_dto_t* production_plan_update_dto_2 = production_plan_update_dto_parseFromJSON(jsonproduction_plan_update_dto_1);
	cJSON* jsonproduction_plan_update_dto_2 = production_plan_update_dto_convertToJSON(production_plan_update_dto_2);
	printf("repeating production_plan_update_dto:\n%s\n", cJSON_Print(jsonproduction_plan_update_dto_2));
}

int main() {
  test_production_plan_update_dto(1);
  test_production_plan_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // production_plan_update_dto_MAIN
#endif // production_plan_update_dto_TEST
