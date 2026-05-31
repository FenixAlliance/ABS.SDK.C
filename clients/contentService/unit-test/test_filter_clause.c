#ifndef filter_clause_TEST
#define filter_clause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define filter_clause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/filter_clause.h"
filter_clause_t* instantiate_filter_clause(int include_optional);

#include "test_single_value_node.c"
#include "test_range_variable.c"
#include "test_i_edm_type_reference.c"


filter_clause_t* instantiate_filter_clause(int include_optional) {
  filter_clause_t* filter_clause = NULL;
  if (include_optional) {
    filter_clause = filter_clause_create(
       // false, not to have infinite recursion
      instantiate_single_value_node(0),
       // false, not to have infinite recursion
      instantiate_range_variable(0),
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0)
    );
  } else {
    filter_clause = filter_clause_create(
      NULL,
      NULL,
      NULL
    );
  }

  return filter_clause;
}


#ifdef filter_clause_MAIN

void test_filter_clause(int include_optional) {
    filter_clause_t* filter_clause_1 = instantiate_filter_clause(include_optional);

	cJSON* jsonfilter_clause_1 = filter_clause_convertToJSON(filter_clause_1);
	printf("filter_clause :\n%s\n", cJSON_Print(jsonfilter_clause_1));
	filter_clause_t* filter_clause_2 = filter_clause_parseFromJSON(jsonfilter_clause_1);
	cJSON* jsonfilter_clause_2 = filter_clause_convertToJSON(filter_clause_2);
	printf("repeating filter_clause:\n%s\n", cJSON_Print(jsonfilter_clause_2));
}

int main() {
  test_filter_clause(1);
  test_filter_clause(0);

  printf("Hello world \n");
  return 0;
}

#endif // filter_clause_MAIN
#endif // filter_clause_TEST
