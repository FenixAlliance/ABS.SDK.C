#ifndef fiscal_year_dto_collection_query_parameters_TEST
#define fiscal_year_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fiscal_year_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fiscal_year_dto_collection_query_parameters.h"
fiscal_year_dto_collection_query_parameters_t* instantiate_fiscal_year_dto_collection_query_parameters(int include_optional);



fiscal_year_dto_collection_query_parameters_t* instantiate_fiscal_year_dto_collection_query_parameters(int include_optional) {
  fiscal_year_dto_collection_query_parameters_t* fiscal_year_dto_collection_query_parameters = NULL;
  if (include_optional) {
    fiscal_year_dto_collection_query_parameters = fiscal_year_dto_collection_query_parameters_create(
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
    fiscal_year_dto_collection_query_parameters = fiscal_year_dto_collection_query_parameters_create(
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

  return fiscal_year_dto_collection_query_parameters;
}


#ifdef fiscal_year_dto_collection_query_parameters_MAIN

void test_fiscal_year_dto_collection_query_parameters(int include_optional) {
    fiscal_year_dto_collection_query_parameters_t* fiscal_year_dto_collection_query_parameters_1 = instantiate_fiscal_year_dto_collection_query_parameters(include_optional);

	cJSON* jsonfiscal_year_dto_collection_query_parameters_1 = fiscal_year_dto_collection_query_parameters_convertToJSON(fiscal_year_dto_collection_query_parameters_1);
	printf("fiscal_year_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonfiscal_year_dto_collection_query_parameters_1));
	fiscal_year_dto_collection_query_parameters_t* fiscal_year_dto_collection_query_parameters_2 = fiscal_year_dto_collection_query_parameters_parseFromJSON(jsonfiscal_year_dto_collection_query_parameters_1);
	cJSON* jsonfiscal_year_dto_collection_query_parameters_2 = fiscal_year_dto_collection_query_parameters_convertToJSON(fiscal_year_dto_collection_query_parameters_2);
	printf("repeating fiscal_year_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonfiscal_year_dto_collection_query_parameters_2));
}

int main() {
  test_fiscal_year_dto_collection_query_parameters(1);
  test_fiscal_year_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // fiscal_year_dto_collection_query_parameters_MAIN
#endif // fiscal_year_dto_collection_query_parameters_TEST
