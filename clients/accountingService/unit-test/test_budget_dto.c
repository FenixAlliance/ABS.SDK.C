#ifndef budget_dto_TEST
#define budget_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_dto.h"
budget_dto_t* instantiate_budget_dto(int include_optional);



budget_dto_t* instantiate_budget_dto(int include_optional) {
  budget_dto_t* budget_dto = NULL;
  if (include_optional) {
    budget_dto = budget_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    budget_dto = budget_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return budget_dto;
}


#ifdef budget_dto_MAIN

void test_budget_dto(int include_optional) {
    budget_dto_t* budget_dto_1 = instantiate_budget_dto(include_optional);

	cJSON* jsonbudget_dto_1 = budget_dto_convertToJSON(budget_dto_1);
	printf("budget_dto :\n%s\n", cJSON_Print(jsonbudget_dto_1));
	budget_dto_t* budget_dto_2 = budget_dto_parseFromJSON(jsonbudget_dto_1);
	cJSON* jsonbudget_dto_2 = budget_dto_convertToJSON(budget_dto_2);
	printf("repeating budget_dto:\n%s\n", cJSON_Print(jsonbudget_dto_2));
}

int main() {
  test_budget_dto(1);
  test_budget_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_dto_MAIN
#endif // budget_dto_TEST
