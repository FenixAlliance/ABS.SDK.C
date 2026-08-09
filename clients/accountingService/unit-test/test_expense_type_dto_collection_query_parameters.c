#ifndef expense_type_dto_collection_query_parameters_TEST
#define expense_type_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_type_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_type_dto_collection_query_parameters.h"
expense_type_dto_collection_query_parameters_t* instantiate_expense_type_dto_collection_query_parameters(int include_optional);



expense_type_dto_collection_query_parameters_t* instantiate_expense_type_dto_collection_query_parameters(int include_optional) {
  expense_type_dto_collection_query_parameters_t* expense_type_dto_collection_query_parameters = NULL;
  if (include_optional) {
    expense_type_dto_collection_query_parameters = expense_type_dto_collection_query_parameters_create(
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
    expense_type_dto_collection_query_parameters = expense_type_dto_collection_query_parameters_create(
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

  return expense_type_dto_collection_query_parameters;
}


#ifdef expense_type_dto_collection_query_parameters_MAIN

void test_expense_type_dto_collection_query_parameters(int include_optional) {
    expense_type_dto_collection_query_parameters_t* expense_type_dto_collection_query_parameters_1 = instantiate_expense_type_dto_collection_query_parameters(include_optional);

	cJSON* jsonexpense_type_dto_collection_query_parameters_1 = expense_type_dto_collection_query_parameters_convertToJSON(expense_type_dto_collection_query_parameters_1);
	printf("expense_type_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonexpense_type_dto_collection_query_parameters_1));
	expense_type_dto_collection_query_parameters_t* expense_type_dto_collection_query_parameters_2 = expense_type_dto_collection_query_parameters_parseFromJSON(jsonexpense_type_dto_collection_query_parameters_1);
	cJSON* jsonexpense_type_dto_collection_query_parameters_2 = expense_type_dto_collection_query_parameters_convertToJSON(expense_type_dto_collection_query_parameters_2);
	printf("repeating expense_type_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonexpense_type_dto_collection_query_parameters_2));
}

int main() {
  test_expense_type_dto_collection_query_parameters(1);
  test_expense_type_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_type_dto_collection_query_parameters_MAIN
#endif // expense_type_dto_collection_query_parameters_TEST
