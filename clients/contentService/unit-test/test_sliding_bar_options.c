#ifndef sliding_bar_options_TEST
#define sliding_bar_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sliding_bar_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sliding_bar_options.h"
sliding_bar_options_t* instantiate_sliding_bar_options(int include_optional);

#include "test_padding.c"


sliding_bar_options_t* instantiate_sliding_bar_options(int include_optional) {
  sliding_bar_options_t* sliding_bar_options = NULL;
  if (include_optional) {
    sliding_bar_options = sliding_bar_options_create(
      contentservice_sliding_bar_options_POSITION_Bottom,
       // false, not to have infinite recursion
      instantiate_padding(0),
      contentservice_sliding_bar_options_CONTENTALIGNMENT_Center,
      56,
      1,
      1,
      1,
      1
    );
  } else {
    sliding_bar_options = sliding_bar_options_create(
      contentservice_sliding_bar_options_POSITION_Bottom,
      NULL,
      contentservice_sliding_bar_options_CONTENTALIGNMENT_Center,
      56,
      1,
      1,
      1,
      1
    );
  }

  return sliding_bar_options;
}


#ifdef sliding_bar_options_MAIN

void test_sliding_bar_options(int include_optional) {
    sliding_bar_options_t* sliding_bar_options_1 = instantiate_sliding_bar_options(include_optional);

	cJSON* jsonsliding_bar_options_1 = sliding_bar_options_convertToJSON(sliding_bar_options_1);
	printf("sliding_bar_options :\n%s\n", cJSON_Print(jsonsliding_bar_options_1));
	sliding_bar_options_t* sliding_bar_options_2 = sliding_bar_options_parseFromJSON(jsonsliding_bar_options_1);
	cJSON* jsonsliding_bar_options_2 = sliding_bar_options_convertToJSON(sliding_bar_options_2);
	printf("repeating sliding_bar_options:\n%s\n", cJSON_Print(jsonsliding_bar_options_2));
}

int main() {
  test_sliding_bar_options(1);
  test_sliding_bar_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // sliding_bar_options_MAIN
#endif // sliding_bar_options_TEST
