#ifndef budget_account_entry_dto_TEST
#define budget_account_entry_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_account_entry_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_account_entry_dto.h"
budget_account_entry_dto_t* instantiate_budget_account_entry_dto(int include_optional);

#include "test_money.c"
#include "test_money.c"


budget_account_entry_dto_t* instantiate_budget_account_entry_dto(int include_optional) {
  budget_account_entry_dto_t* budget_account_entry_dto = NULL;
  if (include_optional) {
    budget_account_entry_dto = budget_account_entry_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_None,
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
      "0"
    );
  } else {
    budget_account_entry_dto = budget_account_entry_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_None,
      NULL,
      NULL,
      "0"
    );
  }

  return budget_account_entry_dto;
}


#ifdef budget_account_entry_dto_MAIN

void test_budget_account_entry_dto(int include_optional) {
    budget_account_entry_dto_t* budget_account_entry_dto_1 = instantiate_budget_account_entry_dto(include_optional);

	cJSON* jsonbudget_account_entry_dto_1 = budget_account_entry_dto_convertToJSON(budget_account_entry_dto_1);
	printf("budget_account_entry_dto :\n%s\n", cJSON_Print(jsonbudget_account_entry_dto_1));
	budget_account_entry_dto_t* budget_account_entry_dto_2 = budget_account_entry_dto_parseFromJSON(jsonbudget_account_entry_dto_1);
	cJSON* jsonbudget_account_entry_dto_2 = budget_account_entry_dto_convertToJSON(budget_account_entry_dto_2);
	printf("repeating budget_account_entry_dto:\n%s\n", cJSON_Print(jsonbudget_account_entry_dto_2));
}

int main() {
  test_budget_account_entry_dto(1);
  test_budget_account_entry_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_account_entry_dto_MAIN
#endif // budget_account_entry_dto_TEST
