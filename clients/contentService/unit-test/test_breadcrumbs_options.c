#ifndef breadcrumbs_options_TEST
#define breadcrumbs_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define breadcrumbs_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/breadcrumbs_options.h"
breadcrumbs_options_t* instantiate_breadcrumbs_options(int include_optional);



breadcrumbs_options_t* instantiate_breadcrumbs_options(int include_optional) {
  breadcrumbs_options_t* breadcrumbs_options = NULL;
  if (include_optional) {
    breadcrumbs_options = breadcrumbs_options_create(
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    breadcrumbs_options = breadcrumbs_options_create(
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return breadcrumbs_options;
}


#ifdef breadcrumbs_options_MAIN

void test_breadcrumbs_options(int include_optional) {
    breadcrumbs_options_t* breadcrumbs_options_1 = instantiate_breadcrumbs_options(include_optional);

	cJSON* jsonbreadcrumbs_options_1 = breadcrumbs_options_convertToJSON(breadcrumbs_options_1);
	printf("breadcrumbs_options :\n%s\n", cJSON_Print(jsonbreadcrumbs_options_1));
	breadcrumbs_options_t* breadcrumbs_options_2 = breadcrumbs_options_parseFromJSON(jsonbreadcrumbs_options_1);
	cJSON* jsonbreadcrumbs_options_2 = breadcrumbs_options_convertToJSON(breadcrumbs_options_2);
	printf("repeating breadcrumbs_options:\n%s\n", cJSON_Print(jsonbreadcrumbs_options_2));
}

int main() {
  test_breadcrumbs_options(1);
  test_breadcrumbs_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // breadcrumbs_options_MAIN
#endif // breadcrumbs_options_TEST
