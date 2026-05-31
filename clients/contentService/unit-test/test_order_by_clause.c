#ifndef order_by_clause_TEST
#define order_by_clause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_by_clause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_by_clause.h"
order_by_clause_t* instantiate_order_by_clause(int include_optional);

#include "test_order_by_clause.c"
#include "test_single_value_node.c"
#include "test_range_variable.c"
#include "test_i_edm_type_reference.c"


order_by_clause_t* instantiate_order_by_clause(int include_optional) {
  order_by_clause_t* order_by_clause = NULL;
  if (include_optional) {
    order_by_clause = order_by_clause_create(
       // false, not to have infinite recursion
      instantiate_order_by_clause(0),
       // false, not to have infinite recursion
      instantiate_single_value_node(0),
      contentservice_order_by_clause_DIRECTION_Ascending,
       // false, not to have infinite recursion
      instantiate_range_variable(0),
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0)
    );
  } else {
    order_by_clause = order_by_clause_create(
      NULL,
      NULL,
      contentservice_order_by_clause_DIRECTION_Ascending,
      NULL,
      NULL
    );
  }

  return order_by_clause;
}


#ifdef order_by_clause_MAIN

void test_order_by_clause(int include_optional) {
    order_by_clause_t* order_by_clause_1 = instantiate_order_by_clause(include_optional);

	cJSON* jsonorder_by_clause_1 = order_by_clause_convertToJSON(order_by_clause_1);
	printf("order_by_clause :\n%s\n", cJSON_Print(jsonorder_by_clause_1));
	order_by_clause_t* order_by_clause_2 = order_by_clause_parseFromJSON(jsonorder_by_clause_1);
	cJSON* jsonorder_by_clause_2 = order_by_clause_convertToJSON(order_by_clause_2);
	printf("repeating order_by_clause:\n%s\n", cJSON_Print(jsonorder_by_clause_2));
}

int main() {
  test_order_by_clause(1);
  test_order_by_clause(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_by_clause_MAIN
#endif // order_by_clause_TEST
