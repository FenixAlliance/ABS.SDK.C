#ifndef budget_account_entry_dto_collection_query_parameters_TEST
#define budget_account_entry_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_account_entry_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_account_entry_dto_collection_query_parameters.h"
budget_account_entry_dto_collection_query_parameters_t* instantiate_budget_account_entry_dto_collection_query_parameters(int include_optional);



budget_account_entry_dto_collection_query_parameters_t* instantiate_budget_account_entry_dto_collection_query_parameters(int include_optional) {
  budget_account_entry_dto_collection_query_parameters_t* budget_account_entry_dto_collection_query_parameters = NULL;
  if (include_optional) {
    budget_account_entry_dto_collection_query_parameters = budget_account_entry_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    budget_account_entry_dto_collection_query_parameters = budget_account_entry_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return budget_account_entry_dto_collection_query_parameters;
}


#ifdef budget_account_entry_dto_collection_query_parameters_MAIN

void test_budget_account_entry_dto_collection_query_parameters(int include_optional) {
    budget_account_entry_dto_collection_query_parameters_t* budget_account_entry_dto_collection_query_parameters_1 = instantiate_budget_account_entry_dto_collection_query_parameters(include_optional);

	cJSON* jsonbudget_account_entry_dto_collection_query_parameters_1 = budget_account_entry_dto_collection_query_parameters_convertToJSON(budget_account_entry_dto_collection_query_parameters_1);
	printf("budget_account_entry_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonbudget_account_entry_dto_collection_query_parameters_1));
	budget_account_entry_dto_collection_query_parameters_t* budget_account_entry_dto_collection_query_parameters_2 = budget_account_entry_dto_collection_query_parameters_parseFromJSON(jsonbudget_account_entry_dto_collection_query_parameters_1);
	cJSON* jsonbudget_account_entry_dto_collection_query_parameters_2 = budget_account_entry_dto_collection_query_parameters_convertToJSON(budget_account_entry_dto_collection_query_parameters_2);
	printf("repeating budget_account_entry_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonbudget_account_entry_dto_collection_query_parameters_2));
}

int main() {
  test_budget_account_entry_dto_collection_query_parameters(1);
  test_budget_account_entry_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_account_entry_dto_collection_query_parameters_MAIN
#endif // budget_account_entry_dto_collection_query_parameters_TEST
