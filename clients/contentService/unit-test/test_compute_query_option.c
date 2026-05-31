#ifndef compute_query_option_TEST
#define compute_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define compute_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/compute_query_option.h"
compute_query_option_t* instantiate_compute_query_option(int include_optional);

#include "test_o_data_query_context.c"
#include "test_type.c"
#include "test_compute_clause.c"


compute_query_option_t* instantiate_compute_query_option(int include_optional) {
  compute_query_option_t* compute_query_option = NULL;
  if (include_optional) {
    compute_query_option = compute_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_compute_clause(0),
      "0",
      0
    );
  } else {
    compute_query_option = compute_query_option_create(
      NULL,
      NULL,
      NULL,
      "0",
      0
    );
  }

  return compute_query_option;
}


#ifdef compute_query_option_MAIN

void test_compute_query_option(int include_optional) {
    compute_query_option_t* compute_query_option_1 = instantiate_compute_query_option(include_optional);

	cJSON* jsoncompute_query_option_1 = compute_query_option_convertToJSON(compute_query_option_1);
	printf("compute_query_option :\n%s\n", cJSON_Print(jsoncompute_query_option_1));
	compute_query_option_t* compute_query_option_2 = compute_query_option_parseFromJSON(jsoncompute_query_option_1);
	cJSON* jsoncompute_query_option_2 = compute_query_option_convertToJSON(compute_query_option_2);
	printf("repeating compute_query_option:\n%s\n", cJSON_Print(jsoncompute_query_option_2));
}

int main() {
  test_compute_query_option(1);
  test_compute_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // compute_query_option_MAIN
#endif // compute_query_option_TEST
