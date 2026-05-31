#ifndef skip_query_option_TEST
#define skip_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define skip_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/skip_query_option.h"
skip_query_option_t* instantiate_skip_query_option(int include_optional);

#include "test_o_data_query_context.c"


skip_query_option_t* instantiate_skip_query_option(int include_optional) {
  skip_query_option_t* skip_query_option = NULL;
  if (include_optional) {
    skip_query_option = skip_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
      "0",
      56,
      0
    );
  } else {
    skip_query_option = skip_query_option_create(
      NULL,
      "0",
      56,
      0
    );
  }

  return skip_query_option;
}


#ifdef skip_query_option_MAIN

void test_skip_query_option(int include_optional) {
    skip_query_option_t* skip_query_option_1 = instantiate_skip_query_option(include_optional);

	cJSON* jsonskip_query_option_1 = skip_query_option_convertToJSON(skip_query_option_1);
	printf("skip_query_option :\n%s\n", cJSON_Print(jsonskip_query_option_1));
	skip_query_option_t* skip_query_option_2 = skip_query_option_parseFromJSON(jsonskip_query_option_1);
	cJSON* jsonskip_query_option_2 = skip_query_option_convertToJSON(skip_query_option_2);
	printf("repeating skip_query_option:\n%s\n", cJSON_Print(jsonskip_query_option_2));
}

int main() {
  test_skip_query_option(1);
  test_skip_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // skip_query_option_MAIN
#endif // skip_query_option_TEST
