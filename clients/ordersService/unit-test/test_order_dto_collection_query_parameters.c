#ifndef order_dto_collection_query_parameters_TEST
#define order_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_dto_collection_query_parameters.h"
order_dto_collection_query_parameters_t* instantiate_order_dto_collection_query_parameters(int include_optional);



order_dto_collection_query_parameters_t* instantiate_order_dto_collection_query_parameters(int include_optional) {
  order_dto_collection_query_parameters_t* order_dto_collection_query_parameters = NULL;
  if (include_optional) {
    order_dto_collection_query_parameters = order_dto_collection_query_parameters_create(
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
    order_dto_collection_query_parameters = order_dto_collection_query_parameters_create(
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

  return order_dto_collection_query_parameters;
}


#ifdef order_dto_collection_query_parameters_MAIN

void test_order_dto_collection_query_parameters(int include_optional) {
    order_dto_collection_query_parameters_t* order_dto_collection_query_parameters_1 = instantiate_order_dto_collection_query_parameters(include_optional);

	cJSON* jsonorder_dto_collection_query_parameters_1 = order_dto_collection_query_parameters_convertToJSON(order_dto_collection_query_parameters_1);
	printf("order_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonorder_dto_collection_query_parameters_1));
	order_dto_collection_query_parameters_t* order_dto_collection_query_parameters_2 = order_dto_collection_query_parameters_parseFromJSON(jsonorder_dto_collection_query_parameters_1);
	cJSON* jsonorder_dto_collection_query_parameters_2 = order_dto_collection_query_parameters_convertToJSON(order_dto_collection_query_parameters_2);
	printf("repeating order_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonorder_dto_collection_query_parameters_2));
}

int main() {
  test_order_dto_collection_query_parameters(1);
  test_order_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_dto_collection_query_parameters_MAIN
#endif // order_dto_collection_query_parameters_TEST
