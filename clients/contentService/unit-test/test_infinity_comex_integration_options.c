#ifndef infinity_comex_integration_options_TEST
#define infinity_comex_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define infinity_comex_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/infinity_comex_integration_options.h"
infinity_comex_integration_options_t* instantiate_infinity_comex_integration_options(int include_optional);



infinity_comex_integration_options_t* instantiate_infinity_comex_integration_options(int include_optional) {
  infinity_comex_integration_options_t* infinity_comex_integration_options = NULL;
  if (include_optional) {
    infinity_comex_integration_options = infinity_comex_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    infinity_comex_integration_options = infinity_comex_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return infinity_comex_integration_options;
}


#ifdef infinity_comex_integration_options_MAIN

void test_infinity_comex_integration_options(int include_optional) {
    infinity_comex_integration_options_t* infinity_comex_integration_options_1 = instantiate_infinity_comex_integration_options(include_optional);

	cJSON* jsoninfinity_comex_integration_options_1 = infinity_comex_integration_options_convertToJSON(infinity_comex_integration_options_1);
	printf("infinity_comex_integration_options :\n%s\n", cJSON_Print(jsoninfinity_comex_integration_options_1));
	infinity_comex_integration_options_t* infinity_comex_integration_options_2 = infinity_comex_integration_options_parseFromJSON(jsoninfinity_comex_integration_options_1);
	cJSON* jsoninfinity_comex_integration_options_2 = infinity_comex_integration_options_convertToJSON(infinity_comex_integration_options_2);
	printf("repeating infinity_comex_integration_options:\n%s\n", cJSON_Print(jsoninfinity_comex_integration_options_2));
}

int main() {
  test_infinity_comex_integration_options(1);
  test_infinity_comex_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // infinity_comex_integration_options_MAIN
#endif // infinity_comex_integration_options_TEST
