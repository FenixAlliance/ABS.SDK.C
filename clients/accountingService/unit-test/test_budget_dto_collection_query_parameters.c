#ifndef budget_dto_collection_query_parameters_TEST
#define budget_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_dto_collection_query_parameters.h"
budget_dto_collection_query_parameters_t* instantiate_budget_dto_collection_query_parameters(int include_optional);



budget_dto_collection_query_parameters_t* instantiate_budget_dto_collection_query_parameters(int include_optional) {
  budget_dto_collection_query_parameters_t* budget_dto_collection_query_parameters = NULL;
  if (include_optional) {
    budget_dto_collection_query_parameters = budget_dto_collection_query_parameters_create(
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
    budget_dto_collection_query_parameters = budget_dto_collection_query_parameters_create(
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

  return budget_dto_collection_query_parameters;
}


#ifdef budget_dto_collection_query_parameters_MAIN

void test_budget_dto_collection_query_parameters(int include_optional) {
    budget_dto_collection_query_parameters_t* budget_dto_collection_query_parameters_1 = instantiate_budget_dto_collection_query_parameters(include_optional);

	cJSON* jsonbudget_dto_collection_query_parameters_1 = budget_dto_collection_query_parameters_convertToJSON(budget_dto_collection_query_parameters_1);
	printf("budget_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonbudget_dto_collection_query_parameters_1));
	budget_dto_collection_query_parameters_t* budget_dto_collection_query_parameters_2 = budget_dto_collection_query_parameters_parseFromJSON(jsonbudget_dto_collection_query_parameters_1);
	cJSON* jsonbudget_dto_collection_query_parameters_2 = budget_dto_collection_query_parameters_convertToJSON(budget_dto_collection_query_parameters_2);
	printf("repeating budget_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonbudget_dto_collection_query_parameters_2));
}

int main() {
  test_budget_dto_collection_query_parameters(1);
  test_budget_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_dto_collection_query_parameters_MAIN
#endif // budget_dto_collection_query_parameters_TEST
