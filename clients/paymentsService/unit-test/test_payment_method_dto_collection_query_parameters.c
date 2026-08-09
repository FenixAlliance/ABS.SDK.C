#ifndef payment_method_dto_collection_query_parameters_TEST
#define payment_method_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_method_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_method_dto_collection_query_parameters.h"
payment_method_dto_collection_query_parameters_t* instantiate_payment_method_dto_collection_query_parameters(int include_optional);



payment_method_dto_collection_query_parameters_t* instantiate_payment_method_dto_collection_query_parameters(int include_optional) {
  payment_method_dto_collection_query_parameters_t* payment_method_dto_collection_query_parameters = NULL;
  if (include_optional) {
    payment_method_dto_collection_query_parameters = payment_method_dto_collection_query_parameters_create(
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
    payment_method_dto_collection_query_parameters = payment_method_dto_collection_query_parameters_create(
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

  return payment_method_dto_collection_query_parameters;
}


#ifdef payment_method_dto_collection_query_parameters_MAIN

void test_payment_method_dto_collection_query_parameters(int include_optional) {
    payment_method_dto_collection_query_parameters_t* payment_method_dto_collection_query_parameters_1 = instantiate_payment_method_dto_collection_query_parameters(include_optional);

	cJSON* jsonpayment_method_dto_collection_query_parameters_1 = payment_method_dto_collection_query_parameters_convertToJSON(payment_method_dto_collection_query_parameters_1);
	printf("payment_method_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonpayment_method_dto_collection_query_parameters_1));
	payment_method_dto_collection_query_parameters_t* payment_method_dto_collection_query_parameters_2 = payment_method_dto_collection_query_parameters_parseFromJSON(jsonpayment_method_dto_collection_query_parameters_1);
	cJSON* jsonpayment_method_dto_collection_query_parameters_2 = payment_method_dto_collection_query_parameters_convertToJSON(payment_method_dto_collection_query_parameters_2);
	printf("repeating payment_method_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonpayment_method_dto_collection_query_parameters_2));
}

int main() {
  test_payment_method_dto_collection_query_parameters(1);
  test_payment_method_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_method_dto_collection_query_parameters_MAIN
#endif // payment_method_dto_collection_query_parameters_TEST
