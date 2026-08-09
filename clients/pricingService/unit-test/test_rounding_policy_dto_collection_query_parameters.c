#ifndef rounding_policy_dto_collection_query_parameters_TEST
#define rounding_policy_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rounding_policy_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rounding_policy_dto_collection_query_parameters.h"
rounding_policy_dto_collection_query_parameters_t* instantiate_rounding_policy_dto_collection_query_parameters(int include_optional);



rounding_policy_dto_collection_query_parameters_t* instantiate_rounding_policy_dto_collection_query_parameters(int include_optional) {
  rounding_policy_dto_collection_query_parameters_t* rounding_policy_dto_collection_query_parameters = NULL;
  if (include_optional) {
    rounding_policy_dto_collection_query_parameters = rounding_policy_dto_collection_query_parameters_create(
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
    rounding_policy_dto_collection_query_parameters = rounding_policy_dto_collection_query_parameters_create(
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

  return rounding_policy_dto_collection_query_parameters;
}


#ifdef rounding_policy_dto_collection_query_parameters_MAIN

void test_rounding_policy_dto_collection_query_parameters(int include_optional) {
    rounding_policy_dto_collection_query_parameters_t* rounding_policy_dto_collection_query_parameters_1 = instantiate_rounding_policy_dto_collection_query_parameters(include_optional);

	cJSON* jsonrounding_policy_dto_collection_query_parameters_1 = rounding_policy_dto_collection_query_parameters_convertToJSON(rounding_policy_dto_collection_query_parameters_1);
	printf("rounding_policy_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonrounding_policy_dto_collection_query_parameters_1));
	rounding_policy_dto_collection_query_parameters_t* rounding_policy_dto_collection_query_parameters_2 = rounding_policy_dto_collection_query_parameters_parseFromJSON(jsonrounding_policy_dto_collection_query_parameters_1);
	cJSON* jsonrounding_policy_dto_collection_query_parameters_2 = rounding_policy_dto_collection_query_parameters_convertToJSON(rounding_policy_dto_collection_query_parameters_2);
	printf("repeating rounding_policy_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonrounding_policy_dto_collection_query_parameters_2));
}

int main() {
  test_rounding_policy_dto_collection_query_parameters(1);
  test_rounding_policy_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // rounding_policy_dto_collection_query_parameters_MAIN
#endif // rounding_policy_dto_collection_query_parameters_TEST
