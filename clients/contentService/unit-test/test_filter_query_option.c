#ifndef filter_query_option_TEST
#define filter_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define filter_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/filter_query_option.h"
filter_query_option_t* instantiate_filter_query_option(int include_optional);

#include "test_o_data_query_context.c"
#include "test_compute_query_option.c"
#include "test_filter_clause.c"


filter_query_option_t* instantiate_filter_query_option(int include_optional) {
  filter_query_option_t* filter_query_option = NULL;
  if (include_optional) {
    filter_query_option = filter_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
      0,
       // false, not to have infinite recursion
      instantiate_compute_query_option(0),
       // false, not to have infinite recursion
      instantiate_filter_clause(0),
      "0"
    );
  } else {
    filter_query_option = filter_query_option_create(
      NULL,
      0,
      NULL,
      NULL,
      "0"
    );
  }

  return filter_query_option;
}


#ifdef filter_query_option_MAIN

void test_filter_query_option(int include_optional) {
    filter_query_option_t* filter_query_option_1 = instantiate_filter_query_option(include_optional);

	cJSON* jsonfilter_query_option_1 = filter_query_option_convertToJSON(filter_query_option_1);
	printf("filter_query_option :\n%s\n", cJSON_Print(jsonfilter_query_option_1));
	filter_query_option_t* filter_query_option_2 = filter_query_option_parseFromJSON(jsonfilter_query_option_1);
	cJSON* jsonfilter_query_option_2 = filter_query_option_convertToJSON(filter_query_option_2);
	printf("repeating filter_query_option:\n%s\n", cJSON_Print(jsonfilter_query_option_2));
}

int main() {
  test_filter_query_option(1);
  test_filter_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // filter_query_option_MAIN
#endif // filter_query_option_TEST
