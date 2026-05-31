#ifndef compute_expression_TEST
#define compute_expression_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define compute_expression_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/compute_expression.h"
compute_expression_t* instantiate_compute_expression(int include_optional);

#include "test_single_value_node.c"
#include "test_i_edm_type_reference.c"


compute_expression_t* instantiate_compute_expression(int include_optional) {
  compute_expression_t* compute_expression = NULL;
  if (include_optional) {
    compute_expression = compute_expression_create(
       // false, not to have infinite recursion
      instantiate_single_value_node(0),
      "0",
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0)
    );
  } else {
    compute_expression = compute_expression_create(
      NULL,
      "0",
      NULL
    );
  }

  return compute_expression;
}


#ifdef compute_expression_MAIN

void test_compute_expression(int include_optional) {
    compute_expression_t* compute_expression_1 = instantiate_compute_expression(include_optional);

	cJSON* jsoncompute_expression_1 = compute_expression_convertToJSON(compute_expression_1);
	printf("compute_expression :\n%s\n", cJSON_Print(jsoncompute_expression_1));
	compute_expression_t* compute_expression_2 = compute_expression_parseFromJSON(jsoncompute_expression_1);
	cJSON* jsoncompute_expression_2 = compute_expression_convertToJSON(compute_expression_2);
	printf("repeating compute_expression:\n%s\n", cJSON_Print(jsoncompute_expression_2));
}

int main() {
  test_compute_expression(1);
  test_compute_expression(0);

  printf("Hello world \n");
  return 0;
}

#endif // compute_expression_MAIN
#endif // compute_expression_TEST
