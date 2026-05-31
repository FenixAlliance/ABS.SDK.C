#ifndef expense_claim_update_dto_TEST
#define expense_claim_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_claim_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_claim_update_dto.h"
expense_claim_update_dto_t* instantiate_expense_claim_update_dto(int include_optional);



expense_claim_update_dto_t* instantiate_expense_claim_update_dto(int include_optional) {
  expense_claim_update_dto_t* expense_claim_update_dto = NULL;
  if (include_optional) {
    expense_claim_update_dto = expense_claim_update_dto_create(
      "0"
    );
  } else {
    expense_claim_update_dto = expense_claim_update_dto_create(
      "0"
    );
  }

  return expense_claim_update_dto;
}


#ifdef expense_claim_update_dto_MAIN

void test_expense_claim_update_dto(int include_optional) {
    expense_claim_update_dto_t* expense_claim_update_dto_1 = instantiate_expense_claim_update_dto(include_optional);

	cJSON* jsonexpense_claim_update_dto_1 = expense_claim_update_dto_convertToJSON(expense_claim_update_dto_1);
	printf("expense_claim_update_dto :\n%s\n", cJSON_Print(jsonexpense_claim_update_dto_1));
	expense_claim_update_dto_t* expense_claim_update_dto_2 = expense_claim_update_dto_parseFromJSON(jsonexpense_claim_update_dto_1);
	cJSON* jsonexpense_claim_update_dto_2 = expense_claim_update_dto_convertToJSON(expense_claim_update_dto_2);
	printf("repeating expense_claim_update_dto:\n%s\n", cJSON_Print(jsonexpense_claim_update_dto_2));
}

int main() {
  test_expense_claim_update_dto(1);
  test_expense_claim_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_claim_update_dto_MAIN
#endif // expense_claim_update_dto_TEST
