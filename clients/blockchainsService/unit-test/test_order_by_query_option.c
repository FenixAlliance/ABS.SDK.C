#ifndef order_by_query_option_TEST
#define order_by_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_by_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_by_query_option.h"
order_by_query_option_t* instantiate_order_by_query_option(int include_optional);

#include "test_o_data_query_context.c"
#include "test_compute_query_option.c"
#include "test_order_by_clause.c"


order_by_query_option_t* instantiate_order_by_query_option(int include_optional) {
  order_by_query_option_t* order_by_query_option = NULL;
  if (include_optional) {
    order_by_query_option = order_by_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
      list_createList(),
      "0",
      0,
       // false, not to have infinite recursion
      instantiate_compute_query_option(0),
       // false, not to have infinite recursion
      instantiate_order_by_clause(0)
    );
  } else {
    order_by_query_option = order_by_query_option_create(
      NULL,
      list_createList(),
      "0",
      0,
      NULL,
      NULL
    );
  }

  return order_by_query_option;
}


#ifdef order_by_query_option_MAIN

void test_order_by_query_option(int include_optional) {
    order_by_query_option_t* order_by_query_option_1 = instantiate_order_by_query_option(include_optional);

	cJSON* jsonorder_by_query_option_1 = order_by_query_option_convertToJSON(order_by_query_option_1);
	printf("order_by_query_option :\n%s\n", cJSON_Print(jsonorder_by_query_option_1));
	order_by_query_option_t* order_by_query_option_2 = order_by_query_option_parseFromJSON(jsonorder_by_query_option_1);
	cJSON* jsonorder_by_query_option_2 = order_by_query_option_convertToJSON(order_by_query_option_2);
	printf("repeating order_by_query_option:\n%s\n", cJSON_Print(jsonorder_by_query_option_2));
}

int main() {
  test_order_by_query_option(1);
  test_order_by_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_by_query_option_MAIN
#endif // order_by_query_option_TEST
