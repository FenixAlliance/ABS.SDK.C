#ifndef budget_create_dto_TEST
#define budget_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_create_dto.h"
budget_create_dto_t* instantiate_budget_create_dto(int include_optional);



budget_create_dto_t* instantiate_budget_create_dto(int include_optional) {
  budget_create_dto_t* budget_create_dto = NULL;
  if (include_optional) {
    budget_create_dto = budget_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    budget_create_dto = budget_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return budget_create_dto;
}


#ifdef budget_create_dto_MAIN

void test_budget_create_dto(int include_optional) {
    budget_create_dto_t* budget_create_dto_1 = instantiate_budget_create_dto(include_optional);

	cJSON* jsonbudget_create_dto_1 = budget_create_dto_convertToJSON(budget_create_dto_1);
	printf("budget_create_dto :\n%s\n", cJSON_Print(jsonbudget_create_dto_1));
	budget_create_dto_t* budget_create_dto_2 = budget_create_dto_parseFromJSON(jsonbudget_create_dto_1);
	cJSON* jsonbudget_create_dto_2 = budget_create_dto_convertToJSON(budget_create_dto_2);
	printf("repeating budget_create_dto:\n%s\n", cJSON_Print(jsonbudget_create_dto_2));
}

int main() {
  test_budget_create_dto(1);
  test_budget_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_create_dto_MAIN
#endif // budget_create_dto_TEST
