#ifndef search_query_option_TEST
#define search_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define search_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/search_query_option.h"
search_query_option_t* instantiate_search_query_option(int include_optional);

#include "test_o_data_query_context.c"
#include "test_type.c"
#include "test_search_clause.c"


search_query_option_t* instantiate_search_query_option(int include_optional) {
  search_query_option_t* search_query_option = NULL;
  if (include_optional) {
    search_query_option = search_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_search_clause(0),
      "0"
    );
  } else {
    search_query_option = search_query_option_create(
      NULL,
      NULL,
      NULL,
      "0"
    );
  }

  return search_query_option;
}


#ifdef search_query_option_MAIN

void test_search_query_option(int include_optional) {
    search_query_option_t* search_query_option_1 = instantiate_search_query_option(include_optional);

	cJSON* jsonsearch_query_option_1 = search_query_option_convertToJSON(search_query_option_1);
	printf("search_query_option :\n%s\n", cJSON_Print(jsonsearch_query_option_1));
	search_query_option_t* search_query_option_2 = search_query_option_parseFromJSON(jsonsearch_query_option_1);
	cJSON* jsonsearch_query_option_2 = search_query_option_convertToJSON(search_query_option_2);
	printf("repeating search_query_option:\n%s\n", cJSON_Print(jsonsearch_query_option_2));
}

int main() {
  test_search_query_option(1);
  test_search_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // search_query_option_MAIN
#endif // search_query_option_TEST
