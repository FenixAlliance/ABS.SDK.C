#ifndef pricing_rule_dto_collection_query_parameters_TEST
#define pricing_rule_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pricing_rule_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pricing_rule_dto_collection_query_parameters.h"
pricing_rule_dto_collection_query_parameters_t* instantiate_pricing_rule_dto_collection_query_parameters(int include_optional);



pricing_rule_dto_collection_query_parameters_t* instantiate_pricing_rule_dto_collection_query_parameters(int include_optional) {
  pricing_rule_dto_collection_query_parameters_t* pricing_rule_dto_collection_query_parameters = NULL;
  if (include_optional) {
    pricing_rule_dto_collection_query_parameters = pricing_rule_dto_collection_query_parameters_create(
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
    pricing_rule_dto_collection_query_parameters = pricing_rule_dto_collection_query_parameters_create(
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

  return pricing_rule_dto_collection_query_parameters;
}


#ifdef pricing_rule_dto_collection_query_parameters_MAIN

void test_pricing_rule_dto_collection_query_parameters(int include_optional) {
    pricing_rule_dto_collection_query_parameters_t* pricing_rule_dto_collection_query_parameters_1 = instantiate_pricing_rule_dto_collection_query_parameters(include_optional);

	cJSON* jsonpricing_rule_dto_collection_query_parameters_1 = pricing_rule_dto_collection_query_parameters_convertToJSON(pricing_rule_dto_collection_query_parameters_1);
	printf("pricing_rule_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonpricing_rule_dto_collection_query_parameters_1));
	pricing_rule_dto_collection_query_parameters_t* pricing_rule_dto_collection_query_parameters_2 = pricing_rule_dto_collection_query_parameters_parseFromJSON(jsonpricing_rule_dto_collection_query_parameters_1);
	cJSON* jsonpricing_rule_dto_collection_query_parameters_2 = pricing_rule_dto_collection_query_parameters_convertToJSON(pricing_rule_dto_collection_query_parameters_2);
	printf("repeating pricing_rule_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonpricing_rule_dto_collection_query_parameters_2));
}

int main() {
  test_pricing_rule_dto_collection_query_parameters(1);
  test_pricing_rule_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // pricing_rule_dto_collection_query_parameters_MAIN
#endif // pricing_rule_dto_collection_query_parameters_TEST
