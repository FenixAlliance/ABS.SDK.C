#ifndef top_query_option_TEST
#define top_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define top_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/top_query_option.h"
top_query_option_t* instantiate_top_query_option(int include_optional);

#include "test_o_data_query_context.c"


top_query_option_t* instantiate_top_query_option(int include_optional) {
  top_query_option_t* top_query_option = NULL;
  if (include_optional) {
    top_query_option = top_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
      "0",
      56,
      0
    );
  } else {
    top_query_option = top_query_option_create(
      NULL,
      "0",
      56,
      0
    );
  }

  return top_query_option;
}


#ifdef top_query_option_MAIN

void test_top_query_option(int include_optional) {
    top_query_option_t* top_query_option_1 = instantiate_top_query_option(include_optional);

	cJSON* jsontop_query_option_1 = top_query_option_convertToJSON(top_query_option_1);
	printf("top_query_option :\n%s\n", cJSON_Print(jsontop_query_option_1));
	top_query_option_t* top_query_option_2 = top_query_option_parseFromJSON(jsontop_query_option_1);
	cJSON* jsontop_query_option_2 = top_query_option_convertToJSON(top_query_option_2);
	printf("repeating top_query_option:\n%s\n", cJSON_Print(jsontop_query_option_2));
}

int main() {
  test_top_query_option(1);
  test_top_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // top_query_option_MAIN
#endif // top_query_option_TEST
