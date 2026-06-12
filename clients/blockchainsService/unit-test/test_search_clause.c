#ifndef search_clause_TEST
#define search_clause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define search_clause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/search_clause.h"
search_clause_t* instantiate_search_clause(int include_optional);

#include "test_single_value_node.c"


search_clause_t* instantiate_search_clause(int include_optional) {
  search_clause_t* search_clause = NULL;
  if (include_optional) {
    search_clause = search_clause_create(
       // false, not to have infinite recursion
      instantiate_single_value_node(0)
    );
  } else {
    search_clause = search_clause_create(
      NULL
    );
  }

  return search_clause;
}


#ifdef search_clause_MAIN

void test_search_clause(int include_optional) {
    search_clause_t* search_clause_1 = instantiate_search_clause(include_optional);

	cJSON* jsonsearch_clause_1 = search_clause_convertToJSON(search_clause_1);
	printf("search_clause :\n%s\n", cJSON_Print(jsonsearch_clause_1));
	search_clause_t* search_clause_2 = search_clause_parseFromJSON(jsonsearch_clause_1);
	cJSON* jsonsearch_clause_2 = search_clause_convertToJSON(search_clause_2);
	printf("repeating search_clause:\n%s\n", cJSON_Print(jsonsearch_clause_2));
}

int main() {
  test_search_clause(1);
  test_search_clause(0);

  printf("Hello world \n");
  return 0;
}

#endif // search_clause_MAIN
#endif // search_clause_TEST
