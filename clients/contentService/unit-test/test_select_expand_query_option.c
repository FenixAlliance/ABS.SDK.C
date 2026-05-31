#ifndef select_expand_query_option_TEST
#define select_expand_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define select_expand_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/select_expand_query_option.h"
select_expand_query_option_t* instantiate_select_expand_query_option(int include_optional);

#include "test_o_data_query_context.c"
#include "test_compute_query_option.c"
#include "test_select_expand_clause.c"


select_expand_query_option_t* instantiate_select_expand_query_option(int include_optional) {
  select_expand_query_option_t* select_expand_query_option = NULL;
  if (include_optional) {
    select_expand_query_option = select_expand_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_compute_query_option(0),
      0,
       // false, not to have infinite recursion
      instantiate_select_expand_clause(0),
      56
    );
  } else {
    select_expand_query_option = select_expand_query_option_create(
      NULL,
      "0",
      "0",
      NULL,
      0,
      NULL,
      56
    );
  }

  return select_expand_query_option;
}


#ifdef select_expand_query_option_MAIN

void test_select_expand_query_option(int include_optional) {
    select_expand_query_option_t* select_expand_query_option_1 = instantiate_select_expand_query_option(include_optional);

	cJSON* jsonselect_expand_query_option_1 = select_expand_query_option_convertToJSON(select_expand_query_option_1);
	printf("select_expand_query_option :\n%s\n", cJSON_Print(jsonselect_expand_query_option_1));
	select_expand_query_option_t* select_expand_query_option_2 = select_expand_query_option_parseFromJSON(jsonselect_expand_query_option_1);
	cJSON* jsonselect_expand_query_option_2 = select_expand_query_option_convertToJSON(select_expand_query_option_2);
	printf("repeating select_expand_query_option:\n%s\n", cJSON_Print(jsonselect_expand_query_option_2));
}

int main() {
  test_select_expand_query_option(1);
  test_select_expand_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // select_expand_query_option_MAIN
#endif // select_expand_query_option_TEST
