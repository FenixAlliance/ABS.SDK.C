#ifndef transaction_category_dto_collection_query_parameters_TEST
#define transaction_category_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transaction_category_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transaction_category_dto_collection_query_parameters.h"
transaction_category_dto_collection_query_parameters_t* instantiate_transaction_category_dto_collection_query_parameters(int include_optional);



transaction_category_dto_collection_query_parameters_t* instantiate_transaction_category_dto_collection_query_parameters(int include_optional) {
  transaction_category_dto_collection_query_parameters_t* transaction_category_dto_collection_query_parameters = NULL;
  if (include_optional) {
    transaction_category_dto_collection_query_parameters = transaction_category_dto_collection_query_parameters_create(
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
    transaction_category_dto_collection_query_parameters = transaction_category_dto_collection_query_parameters_create(
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

  return transaction_category_dto_collection_query_parameters;
}


#ifdef transaction_category_dto_collection_query_parameters_MAIN

void test_transaction_category_dto_collection_query_parameters(int include_optional) {
    transaction_category_dto_collection_query_parameters_t* transaction_category_dto_collection_query_parameters_1 = instantiate_transaction_category_dto_collection_query_parameters(include_optional);

	cJSON* jsontransaction_category_dto_collection_query_parameters_1 = transaction_category_dto_collection_query_parameters_convertToJSON(transaction_category_dto_collection_query_parameters_1);
	printf("transaction_category_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontransaction_category_dto_collection_query_parameters_1));
	transaction_category_dto_collection_query_parameters_t* transaction_category_dto_collection_query_parameters_2 = transaction_category_dto_collection_query_parameters_parseFromJSON(jsontransaction_category_dto_collection_query_parameters_1);
	cJSON* jsontransaction_category_dto_collection_query_parameters_2 = transaction_category_dto_collection_query_parameters_convertToJSON(transaction_category_dto_collection_query_parameters_2);
	printf("repeating transaction_category_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontransaction_category_dto_collection_query_parameters_2));
}

int main() {
  test_transaction_category_dto_collection_query_parameters(1);
  test_transaction_category_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // transaction_category_dto_collection_query_parameters_MAIN
#endif // transaction_category_dto_collection_query_parameters_TEST
