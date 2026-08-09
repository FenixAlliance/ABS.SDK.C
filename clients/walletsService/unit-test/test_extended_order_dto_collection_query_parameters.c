#ifndef extended_order_dto_collection_query_parameters_TEST
#define extended_order_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_order_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_order_dto_collection_query_parameters.h"
extended_order_dto_collection_query_parameters_t* instantiate_extended_order_dto_collection_query_parameters(int include_optional);



extended_order_dto_collection_query_parameters_t* instantiate_extended_order_dto_collection_query_parameters(int include_optional) {
  extended_order_dto_collection_query_parameters_t* extended_order_dto_collection_query_parameters = NULL;
  if (include_optional) {
    extended_order_dto_collection_query_parameters = extended_order_dto_collection_query_parameters_create(
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
    extended_order_dto_collection_query_parameters = extended_order_dto_collection_query_parameters_create(
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

  return extended_order_dto_collection_query_parameters;
}


#ifdef extended_order_dto_collection_query_parameters_MAIN

void test_extended_order_dto_collection_query_parameters(int include_optional) {
    extended_order_dto_collection_query_parameters_t* extended_order_dto_collection_query_parameters_1 = instantiate_extended_order_dto_collection_query_parameters(include_optional);

	cJSON* jsonextended_order_dto_collection_query_parameters_1 = extended_order_dto_collection_query_parameters_convertToJSON(extended_order_dto_collection_query_parameters_1);
	printf("extended_order_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonextended_order_dto_collection_query_parameters_1));
	extended_order_dto_collection_query_parameters_t* extended_order_dto_collection_query_parameters_2 = extended_order_dto_collection_query_parameters_parseFromJSON(jsonextended_order_dto_collection_query_parameters_1);
	cJSON* jsonextended_order_dto_collection_query_parameters_2 = extended_order_dto_collection_query_parameters_convertToJSON(extended_order_dto_collection_query_parameters_2);
	printf("repeating extended_order_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonextended_order_dto_collection_query_parameters_2));
}

int main() {
  test_extended_order_dto_collection_query_parameters(1);
  test_extended_order_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_order_dto_collection_query_parameters_MAIN
#endif // extended_order_dto_collection_query_parameters_TEST
