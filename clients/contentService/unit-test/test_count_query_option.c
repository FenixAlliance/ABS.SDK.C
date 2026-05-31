#ifndef count_query_option_TEST
#define count_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define count_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/count_query_option.h"
count_query_option_t* instantiate_count_query_option(int include_optional);

#include "test_o_data_query_context.c"


count_query_option_t* instantiate_count_query_option(int include_optional) {
  count_query_option_t* count_query_option = NULL;
  if (include_optional) {
    count_query_option = count_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
      "0",
      1,
      0
    );
  } else {
    count_query_option = count_query_option_create(
      NULL,
      "0",
      1,
      0
    );
  }

  return count_query_option;
}


#ifdef count_query_option_MAIN

void test_count_query_option(int include_optional) {
    count_query_option_t* count_query_option_1 = instantiate_count_query_option(include_optional);

	cJSON* jsoncount_query_option_1 = count_query_option_convertToJSON(count_query_option_1);
	printf("count_query_option :\n%s\n", cJSON_Print(jsoncount_query_option_1));
	count_query_option_t* count_query_option_2 = count_query_option_parseFromJSON(jsoncount_query_option_1);
	cJSON* jsoncount_query_option_2 = count_query_option_convertToJSON(count_query_option_2);
	printf("repeating count_query_option:\n%s\n", cJSON_Print(jsoncount_query_option_2));
}

int main() {
  test_count_query_option(1);
  test_count_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // count_query_option_MAIN
#endif // count_query_option_TEST
