#ifndef order_line_dto_collection_query_parameters_TEST
#define order_line_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_line_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_line_dto_collection_query_parameters.h"
order_line_dto_collection_query_parameters_t* instantiate_order_line_dto_collection_query_parameters(int include_optional);



order_line_dto_collection_query_parameters_t* instantiate_order_line_dto_collection_query_parameters(int include_optional) {
  order_line_dto_collection_query_parameters_t* order_line_dto_collection_query_parameters = NULL;
  if (include_optional) {
    order_line_dto_collection_query_parameters = order_line_dto_collection_query_parameters_create(
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
    order_line_dto_collection_query_parameters = order_line_dto_collection_query_parameters_create(
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

  return order_line_dto_collection_query_parameters;
}


#ifdef order_line_dto_collection_query_parameters_MAIN

void test_order_line_dto_collection_query_parameters(int include_optional) {
    order_line_dto_collection_query_parameters_t* order_line_dto_collection_query_parameters_1 = instantiate_order_line_dto_collection_query_parameters(include_optional);

	cJSON* jsonorder_line_dto_collection_query_parameters_1 = order_line_dto_collection_query_parameters_convertToJSON(order_line_dto_collection_query_parameters_1);
	printf("order_line_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonorder_line_dto_collection_query_parameters_1));
	order_line_dto_collection_query_parameters_t* order_line_dto_collection_query_parameters_2 = order_line_dto_collection_query_parameters_parseFromJSON(jsonorder_line_dto_collection_query_parameters_1);
	cJSON* jsonorder_line_dto_collection_query_parameters_2 = order_line_dto_collection_query_parameters_convertToJSON(order_line_dto_collection_query_parameters_2);
	printf("repeating order_line_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonorder_line_dto_collection_query_parameters_2));
}

int main() {
  test_order_line_dto_collection_query_parameters(1);
  test_order_line_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_line_dto_collection_query_parameters_MAIN
#endif // order_line_dto_collection_query_parameters_TEST
