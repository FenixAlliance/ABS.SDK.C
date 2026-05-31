#ifndef order_by_node_TEST
#define order_by_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_by_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_by_node.h"
order_by_node_t* instantiate_order_by_node(int include_optional);



order_by_node_t* instantiate_order_by_node(int include_optional) {
  order_by_node_t* order_by_node = NULL;
  if (include_optional) {
    order_by_node = order_by_node_create(
      contentservice_order_by_node_DIRECTION_Ascending
    );
  } else {
    order_by_node = order_by_node_create(
      contentservice_order_by_node_DIRECTION_Ascending
    );
  }

  return order_by_node;
}


#ifdef order_by_node_MAIN

void test_order_by_node(int include_optional) {
    order_by_node_t* order_by_node_1 = instantiate_order_by_node(include_optional);

	cJSON* jsonorder_by_node_1 = order_by_node_convertToJSON(order_by_node_1);
	printf("order_by_node :\n%s\n", cJSON_Print(jsonorder_by_node_1));
	order_by_node_t* order_by_node_2 = order_by_node_parseFromJSON(jsonorder_by_node_1);
	cJSON* jsonorder_by_node_2 = order_by_node_convertToJSON(order_by_node_2);
	printf("repeating order_by_node:\n%s\n", cJSON_Print(jsonorder_by_node_2));
}

int main() {
  test_order_by_node(1);
  test_order_by_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_by_node_MAIN
#endif // order_by_node_TEST
