#ifndef expense_claim_dto_collection_query_parameters_TEST
#define expense_claim_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_claim_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_claim_dto_collection_query_parameters.h"
expense_claim_dto_collection_query_parameters_t* instantiate_expense_claim_dto_collection_query_parameters(int include_optional);



expense_claim_dto_collection_query_parameters_t* instantiate_expense_claim_dto_collection_query_parameters(int include_optional) {
  expense_claim_dto_collection_query_parameters_t* expense_claim_dto_collection_query_parameters = NULL;
  if (include_optional) {
    expense_claim_dto_collection_query_parameters = expense_claim_dto_collection_query_parameters_create(
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
    expense_claim_dto_collection_query_parameters = expense_claim_dto_collection_query_parameters_create(
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

  return expense_claim_dto_collection_query_parameters;
}


#ifdef expense_claim_dto_collection_query_parameters_MAIN

void test_expense_claim_dto_collection_query_parameters(int include_optional) {
    expense_claim_dto_collection_query_parameters_t* expense_claim_dto_collection_query_parameters_1 = instantiate_expense_claim_dto_collection_query_parameters(include_optional);

	cJSON* jsonexpense_claim_dto_collection_query_parameters_1 = expense_claim_dto_collection_query_parameters_convertToJSON(expense_claim_dto_collection_query_parameters_1);
	printf("expense_claim_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonexpense_claim_dto_collection_query_parameters_1));
	expense_claim_dto_collection_query_parameters_t* expense_claim_dto_collection_query_parameters_2 = expense_claim_dto_collection_query_parameters_parseFromJSON(jsonexpense_claim_dto_collection_query_parameters_1);
	cJSON* jsonexpense_claim_dto_collection_query_parameters_2 = expense_claim_dto_collection_query_parameters_convertToJSON(expense_claim_dto_collection_query_parameters_2);
	printf("repeating expense_claim_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonexpense_claim_dto_collection_query_parameters_2));
}

int main() {
  test_expense_claim_dto_collection_query_parameters(1);
  test_expense_claim_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_claim_dto_collection_query_parameters_MAIN
#endif // expense_claim_dto_collection_query_parameters_TEST
