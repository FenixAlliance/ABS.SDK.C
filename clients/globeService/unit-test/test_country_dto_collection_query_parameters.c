#ifndef country_dto_collection_query_parameters_TEST
#define country_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_dto_collection_query_parameters.h"
country_dto_collection_query_parameters_t* instantiate_country_dto_collection_query_parameters(int include_optional);



country_dto_collection_query_parameters_t* instantiate_country_dto_collection_query_parameters(int include_optional) {
  country_dto_collection_query_parameters_t* country_dto_collection_query_parameters = NULL;
  if (include_optional) {
    country_dto_collection_query_parameters = country_dto_collection_query_parameters_create(
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
    country_dto_collection_query_parameters = country_dto_collection_query_parameters_create(
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

  return country_dto_collection_query_parameters;
}


#ifdef country_dto_collection_query_parameters_MAIN

void test_country_dto_collection_query_parameters(int include_optional) {
    country_dto_collection_query_parameters_t* country_dto_collection_query_parameters_1 = instantiate_country_dto_collection_query_parameters(include_optional);

	cJSON* jsoncountry_dto_collection_query_parameters_1 = country_dto_collection_query_parameters_convertToJSON(country_dto_collection_query_parameters_1);
	printf("country_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncountry_dto_collection_query_parameters_1));
	country_dto_collection_query_parameters_t* country_dto_collection_query_parameters_2 = country_dto_collection_query_parameters_parseFromJSON(jsoncountry_dto_collection_query_parameters_1);
	cJSON* jsoncountry_dto_collection_query_parameters_2 = country_dto_collection_query_parameters_convertToJSON(country_dto_collection_query_parameters_2);
	printf("repeating country_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncountry_dto_collection_query_parameters_2));
}

int main() {
  test_country_dto_collection_query_parameters(1);
  test_country_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_dto_collection_query_parameters_MAIN
#endif // country_dto_collection_query_parameters_TEST
