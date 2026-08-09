#ifndef tax_rate_dto_collection_query_parameters_TEST
#define tax_rate_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_rate_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_rate_dto_collection_query_parameters.h"
tax_rate_dto_collection_query_parameters_t* instantiate_tax_rate_dto_collection_query_parameters(int include_optional);



tax_rate_dto_collection_query_parameters_t* instantiate_tax_rate_dto_collection_query_parameters(int include_optional) {
  tax_rate_dto_collection_query_parameters_t* tax_rate_dto_collection_query_parameters = NULL;
  if (include_optional) {
    tax_rate_dto_collection_query_parameters = tax_rate_dto_collection_query_parameters_create(
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
    tax_rate_dto_collection_query_parameters = tax_rate_dto_collection_query_parameters_create(
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

  return tax_rate_dto_collection_query_parameters;
}


#ifdef tax_rate_dto_collection_query_parameters_MAIN

void test_tax_rate_dto_collection_query_parameters(int include_optional) {
    tax_rate_dto_collection_query_parameters_t* tax_rate_dto_collection_query_parameters_1 = instantiate_tax_rate_dto_collection_query_parameters(include_optional);

	cJSON* jsontax_rate_dto_collection_query_parameters_1 = tax_rate_dto_collection_query_parameters_convertToJSON(tax_rate_dto_collection_query_parameters_1);
	printf("tax_rate_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontax_rate_dto_collection_query_parameters_1));
	tax_rate_dto_collection_query_parameters_t* tax_rate_dto_collection_query_parameters_2 = tax_rate_dto_collection_query_parameters_parseFromJSON(jsontax_rate_dto_collection_query_parameters_1);
	cJSON* jsontax_rate_dto_collection_query_parameters_2 = tax_rate_dto_collection_query_parameters_convertToJSON(tax_rate_dto_collection_query_parameters_2);
	printf("repeating tax_rate_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontax_rate_dto_collection_query_parameters_2));
}

int main() {
  test_tax_rate_dto_collection_query_parameters(1);
  test_tax_rate_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_rate_dto_collection_query_parameters_MAIN
#endif // tax_rate_dto_collection_query_parameters_TEST
