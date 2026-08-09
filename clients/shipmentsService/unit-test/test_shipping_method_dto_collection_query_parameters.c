#ifndef shipping_method_dto_collection_query_parameters_TEST
#define shipping_method_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_method_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_method_dto_collection_query_parameters.h"
shipping_method_dto_collection_query_parameters_t* instantiate_shipping_method_dto_collection_query_parameters(int include_optional);



shipping_method_dto_collection_query_parameters_t* instantiate_shipping_method_dto_collection_query_parameters(int include_optional) {
  shipping_method_dto_collection_query_parameters_t* shipping_method_dto_collection_query_parameters = NULL;
  if (include_optional) {
    shipping_method_dto_collection_query_parameters = shipping_method_dto_collection_query_parameters_create(
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
    shipping_method_dto_collection_query_parameters = shipping_method_dto_collection_query_parameters_create(
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

  return shipping_method_dto_collection_query_parameters;
}


#ifdef shipping_method_dto_collection_query_parameters_MAIN

void test_shipping_method_dto_collection_query_parameters(int include_optional) {
    shipping_method_dto_collection_query_parameters_t* shipping_method_dto_collection_query_parameters_1 = instantiate_shipping_method_dto_collection_query_parameters(include_optional);

	cJSON* jsonshipping_method_dto_collection_query_parameters_1 = shipping_method_dto_collection_query_parameters_convertToJSON(shipping_method_dto_collection_query_parameters_1);
	printf("shipping_method_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonshipping_method_dto_collection_query_parameters_1));
	shipping_method_dto_collection_query_parameters_t* shipping_method_dto_collection_query_parameters_2 = shipping_method_dto_collection_query_parameters_parseFromJSON(jsonshipping_method_dto_collection_query_parameters_1);
	cJSON* jsonshipping_method_dto_collection_query_parameters_2 = shipping_method_dto_collection_query_parameters_convertToJSON(shipping_method_dto_collection_query_parameters_2);
	printf("repeating shipping_method_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonshipping_method_dto_collection_query_parameters_2));
}

int main() {
  test_shipping_method_dto_collection_query_parameters(1);
  test_shipping_method_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_method_dto_collection_query_parameters_MAIN
#endif // shipping_method_dto_collection_query_parameters_TEST
