#ifndef city_dto_collection_query_parameters_TEST
#define city_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define city_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/city_dto_collection_query_parameters.h"
city_dto_collection_query_parameters_t* instantiate_city_dto_collection_query_parameters(int include_optional);



city_dto_collection_query_parameters_t* instantiate_city_dto_collection_query_parameters(int include_optional) {
  city_dto_collection_query_parameters_t* city_dto_collection_query_parameters = NULL;
  if (include_optional) {
    city_dto_collection_query_parameters = city_dto_collection_query_parameters_create(
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
    city_dto_collection_query_parameters = city_dto_collection_query_parameters_create(
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

  return city_dto_collection_query_parameters;
}


#ifdef city_dto_collection_query_parameters_MAIN

void test_city_dto_collection_query_parameters(int include_optional) {
    city_dto_collection_query_parameters_t* city_dto_collection_query_parameters_1 = instantiate_city_dto_collection_query_parameters(include_optional);

	cJSON* jsoncity_dto_collection_query_parameters_1 = city_dto_collection_query_parameters_convertToJSON(city_dto_collection_query_parameters_1);
	printf("city_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncity_dto_collection_query_parameters_1));
	city_dto_collection_query_parameters_t* city_dto_collection_query_parameters_2 = city_dto_collection_query_parameters_parseFromJSON(jsoncity_dto_collection_query_parameters_1);
	cJSON* jsoncity_dto_collection_query_parameters_2 = city_dto_collection_query_parameters_convertToJSON(city_dto_collection_query_parameters_2);
	printf("repeating city_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncity_dto_collection_query_parameters_2));
}

int main() {
  test_city_dto_collection_query_parameters(1);
  test_city_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // city_dto_collection_query_parameters_MAIN
#endif // city_dto_collection_query_parameters_TEST
