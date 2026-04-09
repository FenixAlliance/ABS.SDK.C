#ifndef typography_options_TEST
#define typography_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define typography_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/typography_options.h"
typography_options_t* instantiate_typography_options(int include_optional);

#include "test_typography.c"
#include "test_typography.c"


typography_options_t* instantiate_typography_options(int include_optional) {
  typography_options_t* typography_options = NULL;
  if (include_optional) {
    typography_options = typography_options_create(
       // false, not to have infinite recursion
      instantiate_typography(0),
       // false, not to have infinite recursion
      instantiate_typography(0),
      list_createList()
    );
  } else {
    typography_options = typography_options_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return typography_options;
}


#ifdef typography_options_MAIN

void test_typography_options(int include_optional) {
    typography_options_t* typography_options_1 = instantiate_typography_options(include_optional);

	cJSON* jsontypography_options_1 = typography_options_convertToJSON(typography_options_1);
	printf("typography_options :\n%s\n", cJSON_Print(jsontypography_options_1));
	typography_options_t* typography_options_2 = typography_options_parseFromJSON(jsontypography_options_1);
	cJSON* jsontypography_options_2 = typography_options_convertToJSON(typography_options_2);
	printf("repeating typography_options:\n%s\n", cJSON_Print(jsontypography_options_2));
}

int main() {
  test_typography_options(1);
  test_typography_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // typography_options_MAIN
#endif // typography_options_TEST
