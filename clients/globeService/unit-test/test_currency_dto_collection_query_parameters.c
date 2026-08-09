#ifndef currency_dto_collection_query_parameters_TEST
#define currency_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define currency_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/currency_dto_collection_query_parameters.h"
currency_dto_collection_query_parameters_t* instantiate_currency_dto_collection_query_parameters(int include_optional);



currency_dto_collection_query_parameters_t* instantiate_currency_dto_collection_query_parameters(int include_optional) {
  currency_dto_collection_query_parameters_t* currency_dto_collection_query_parameters = NULL;
  if (include_optional) {
    currency_dto_collection_query_parameters = currency_dto_collection_query_parameters_create(
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
    currency_dto_collection_query_parameters = currency_dto_collection_query_parameters_create(
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

  return currency_dto_collection_query_parameters;
}


#ifdef currency_dto_collection_query_parameters_MAIN

void test_currency_dto_collection_query_parameters(int include_optional) {
    currency_dto_collection_query_parameters_t* currency_dto_collection_query_parameters_1 = instantiate_currency_dto_collection_query_parameters(include_optional);

	cJSON* jsoncurrency_dto_collection_query_parameters_1 = currency_dto_collection_query_parameters_convertToJSON(currency_dto_collection_query_parameters_1);
	printf("currency_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncurrency_dto_collection_query_parameters_1));
	currency_dto_collection_query_parameters_t* currency_dto_collection_query_parameters_2 = currency_dto_collection_query_parameters_parseFromJSON(jsoncurrency_dto_collection_query_parameters_1);
	cJSON* jsoncurrency_dto_collection_query_parameters_2 = currency_dto_collection_query_parameters_convertToJSON(currency_dto_collection_query_parameters_2);
	printf("repeating currency_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncurrency_dto_collection_query_parameters_2));
}

int main() {
  test_currency_dto_collection_query_parameters(1);
  test_currency_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // currency_dto_collection_query_parameters_MAIN
#endif // currency_dto_collection_query_parameters_TEST
