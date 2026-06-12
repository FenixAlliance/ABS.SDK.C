#ifndef range_variable_TEST
#define range_variable_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define range_variable_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/range_variable.h"
range_variable_t* instantiate_range_variable(int include_optional);

#include "test_i_edm_type_reference.c"


range_variable_t* instantiate_range_variable(int include_optional) {
  range_variable_t* range_variable = NULL;
  if (include_optional) {
    range_variable = range_variable_create(
      "0",
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0),
      56
    );
  } else {
    range_variable = range_variable_create(
      "0",
      NULL,
      56
    );
  }

  return range_variable;
}


#ifdef range_variable_MAIN

void test_range_variable(int include_optional) {
    range_variable_t* range_variable_1 = instantiate_range_variable(include_optional);

	cJSON* jsonrange_variable_1 = range_variable_convertToJSON(range_variable_1);
	printf("range_variable :\n%s\n", cJSON_Print(jsonrange_variable_1));
	range_variable_t* range_variable_2 = range_variable_parseFromJSON(jsonrange_variable_1);
	cJSON* jsonrange_variable_2 = range_variable_convertToJSON(range_variable_2);
	printf("repeating range_variable:\n%s\n", cJSON_Print(jsonrange_variable_2));
}

int main() {
  test_range_variable(1);
  test_range_variable(0);

  printf("Hello world \n");
  return 0;
}

#endif // range_variable_MAIN
#endif // range_variable_TEST
