#ifndef budget_account_entry_dto_envelope_TEST
#define budget_account_entry_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_account_entry_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_account_entry_dto_envelope.h"
budget_account_entry_dto_envelope_t* instantiate_budget_account_entry_dto_envelope(int include_optional);

#include "test_budget_account_entry_dto.c"


budget_account_entry_dto_envelope_t* instantiate_budget_account_entry_dto_envelope(int include_optional) {
  budget_account_entry_dto_envelope_t* budget_account_entry_dto_envelope = NULL;
  if (include_optional) {
    budget_account_entry_dto_envelope = budget_account_entry_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_budget_account_entry_dto(0)
    );
  } else {
    budget_account_entry_dto_envelope = budget_account_entry_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return budget_account_entry_dto_envelope;
}


#ifdef budget_account_entry_dto_envelope_MAIN

void test_budget_account_entry_dto_envelope(int include_optional) {
    budget_account_entry_dto_envelope_t* budget_account_entry_dto_envelope_1 = instantiate_budget_account_entry_dto_envelope(include_optional);

	cJSON* jsonbudget_account_entry_dto_envelope_1 = budget_account_entry_dto_envelope_convertToJSON(budget_account_entry_dto_envelope_1);
	printf("budget_account_entry_dto_envelope :\n%s\n", cJSON_Print(jsonbudget_account_entry_dto_envelope_1));
	budget_account_entry_dto_envelope_t* budget_account_entry_dto_envelope_2 = budget_account_entry_dto_envelope_parseFromJSON(jsonbudget_account_entry_dto_envelope_1);
	cJSON* jsonbudget_account_entry_dto_envelope_2 = budget_account_entry_dto_envelope_convertToJSON(budget_account_entry_dto_envelope_2);
	printf("repeating budget_account_entry_dto_envelope:\n%s\n", cJSON_Print(jsonbudget_account_entry_dto_envelope_2));
}

int main() {
  test_budget_account_entry_dto_envelope(1);
  test_budget_account_entry_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_account_entry_dto_envelope_MAIN
#endif // budget_account_entry_dto_envelope_TEST
