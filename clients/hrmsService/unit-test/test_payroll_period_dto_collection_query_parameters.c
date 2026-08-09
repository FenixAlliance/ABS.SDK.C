#ifndef payroll_period_dto_collection_query_parameters_TEST
#define payroll_period_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payroll_period_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payroll_period_dto_collection_query_parameters.h"
payroll_period_dto_collection_query_parameters_t* instantiate_payroll_period_dto_collection_query_parameters(int include_optional);



payroll_period_dto_collection_query_parameters_t* instantiate_payroll_period_dto_collection_query_parameters(int include_optional) {
  payroll_period_dto_collection_query_parameters_t* payroll_period_dto_collection_query_parameters = NULL;
  if (include_optional) {
    payroll_period_dto_collection_query_parameters = payroll_period_dto_collection_query_parameters_create(
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
    payroll_period_dto_collection_query_parameters = payroll_period_dto_collection_query_parameters_create(
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

  return payroll_period_dto_collection_query_parameters;
}


#ifdef payroll_period_dto_collection_query_parameters_MAIN

void test_payroll_period_dto_collection_query_parameters(int include_optional) {
    payroll_period_dto_collection_query_parameters_t* payroll_period_dto_collection_query_parameters_1 = instantiate_payroll_period_dto_collection_query_parameters(include_optional);

	cJSON* jsonpayroll_period_dto_collection_query_parameters_1 = payroll_period_dto_collection_query_parameters_convertToJSON(payroll_period_dto_collection_query_parameters_1);
	printf("payroll_period_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonpayroll_period_dto_collection_query_parameters_1));
	payroll_period_dto_collection_query_parameters_t* payroll_period_dto_collection_query_parameters_2 = payroll_period_dto_collection_query_parameters_parseFromJSON(jsonpayroll_period_dto_collection_query_parameters_1);
	cJSON* jsonpayroll_period_dto_collection_query_parameters_2 = payroll_period_dto_collection_query_parameters_convertToJSON(payroll_period_dto_collection_query_parameters_2);
	printf("repeating payroll_period_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonpayroll_period_dto_collection_query_parameters_2));
}

int main() {
  test_payroll_period_dto_collection_query_parameters(1);
  test_payroll_period_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // payroll_period_dto_collection_query_parameters_MAIN
#endif // payroll_period_dto_collection_query_parameters_TEST
