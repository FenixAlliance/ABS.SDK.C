#ifndef budget_update_dto_TEST
#define budget_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_update_dto.h"
budget_update_dto_t* instantiate_budget_update_dto(int include_optional);



budget_update_dto_t* instantiate_budget_update_dto(int include_optional) {
  budget_update_dto_t* budget_update_dto = NULL;
  if (include_optional) {
    budget_update_dto = budget_update_dto_create(
      "0",
      "0"
    );
  } else {
    budget_update_dto = budget_update_dto_create(
      "0",
      "0"
    );
  }

  return budget_update_dto;
}


#ifdef budget_update_dto_MAIN

void test_budget_update_dto(int include_optional) {
    budget_update_dto_t* budget_update_dto_1 = instantiate_budget_update_dto(include_optional);

	cJSON* jsonbudget_update_dto_1 = budget_update_dto_convertToJSON(budget_update_dto_1);
	printf("budget_update_dto :\n%s\n", cJSON_Print(jsonbudget_update_dto_1));
	budget_update_dto_t* budget_update_dto_2 = budget_update_dto_parseFromJSON(jsonbudget_update_dto_1);
	cJSON* jsonbudget_update_dto_2 = budget_update_dto_convertToJSON(budget_update_dto_2);
	printf("repeating budget_update_dto:\n%s\n", cJSON_Print(jsonbudget_update_dto_2));
}

int main() {
  test_budget_update_dto(1);
  test_budget_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_update_dto_MAIN
#endif // budget_update_dto_TEST
