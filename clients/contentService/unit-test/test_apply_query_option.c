#ifndef apply_query_option_TEST
#define apply_query_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apply_query_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apply_query_option.h"
apply_query_option_t* instantiate_apply_query_option(int include_optional);

#include "test_o_data_query_context.c"
#include "test_type.c"
#include "test_apply_clause.c"


apply_query_option_t* instantiate_apply_query_option(int include_optional) {
  apply_query_option_t* apply_query_option = NULL;
  if (include_optional) {
    apply_query_option = apply_query_option_create(
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_apply_clause(0),
      "0"
    );
  } else {
    apply_query_option = apply_query_option_create(
      NULL,
      NULL,
      NULL,
      "0"
    );
  }

  return apply_query_option;
}


#ifdef apply_query_option_MAIN

void test_apply_query_option(int include_optional) {
    apply_query_option_t* apply_query_option_1 = instantiate_apply_query_option(include_optional);

	cJSON* jsonapply_query_option_1 = apply_query_option_convertToJSON(apply_query_option_1);
	printf("apply_query_option :\n%s\n", cJSON_Print(jsonapply_query_option_1));
	apply_query_option_t* apply_query_option_2 = apply_query_option_parseFromJSON(jsonapply_query_option_1);
	cJSON* jsonapply_query_option_2 = apply_query_option_convertToJSON(apply_query_option_2);
	printf("repeating apply_query_option:\n%s\n", cJSON_Print(jsonapply_query_option_2));
}

int main() {
  test_apply_query_option(1);
  test_apply_query_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // apply_query_option_MAIN
#endif // apply_query_option_TEST
