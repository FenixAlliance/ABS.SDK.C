#ifndef option_dto_collection_query_parameters_TEST
#define option_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define option_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/option_dto_collection_query_parameters.h"
option_dto_collection_query_parameters_t* instantiate_option_dto_collection_query_parameters(int include_optional);



option_dto_collection_query_parameters_t* instantiate_option_dto_collection_query_parameters(int include_optional) {
  option_dto_collection_query_parameters_t* option_dto_collection_query_parameters = NULL;
  if (include_optional) {
    option_dto_collection_query_parameters = option_dto_collection_query_parameters_create(
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
    option_dto_collection_query_parameters = option_dto_collection_query_parameters_create(
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

  return option_dto_collection_query_parameters;
}


#ifdef option_dto_collection_query_parameters_MAIN

void test_option_dto_collection_query_parameters(int include_optional) {
    option_dto_collection_query_parameters_t* option_dto_collection_query_parameters_1 = instantiate_option_dto_collection_query_parameters(include_optional);

	cJSON* jsonoption_dto_collection_query_parameters_1 = option_dto_collection_query_parameters_convertToJSON(option_dto_collection_query_parameters_1);
	printf("option_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonoption_dto_collection_query_parameters_1));
	option_dto_collection_query_parameters_t* option_dto_collection_query_parameters_2 = option_dto_collection_query_parameters_parseFromJSON(jsonoption_dto_collection_query_parameters_1);
	cJSON* jsonoption_dto_collection_query_parameters_2 = option_dto_collection_query_parameters_convertToJSON(option_dto_collection_query_parameters_2);
	printf("repeating option_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonoption_dto_collection_query_parameters_2));
}

int main() {
  test_option_dto_collection_query_parameters(1);
  test_option_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // option_dto_collection_query_parameters_MAIN
#endif // option_dto_collection_query_parameters_TEST
