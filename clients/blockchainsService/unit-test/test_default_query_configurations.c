#ifndef default_query_configurations_TEST
#define default_query_configurations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define default_query_configurations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/default_query_configurations.h"
default_query_configurations_t* instantiate_default_query_configurations(int include_optional);



default_query_configurations_t* instantiate_default_query_configurations(int include_optional) {
  default_query_configurations_t* default_query_configurations = NULL;
  if (include_optional) {
    default_query_configurations = default_query_configurations_create(
      1,
      1,
      1,
      1,
      1,
      56,
      1
    );
  } else {
    default_query_configurations = default_query_configurations_create(
      1,
      1,
      1,
      1,
      1,
      56,
      1
    );
  }

  return default_query_configurations;
}


#ifdef default_query_configurations_MAIN

void test_default_query_configurations(int include_optional) {
    default_query_configurations_t* default_query_configurations_1 = instantiate_default_query_configurations(include_optional);

	cJSON* jsondefault_query_configurations_1 = default_query_configurations_convertToJSON(default_query_configurations_1);
	printf("default_query_configurations :\n%s\n", cJSON_Print(jsondefault_query_configurations_1));
	default_query_configurations_t* default_query_configurations_2 = default_query_configurations_parseFromJSON(jsondefault_query_configurations_1);
	cJSON* jsondefault_query_configurations_2 = default_query_configurations_convertToJSON(default_query_configurations_2);
	printf("repeating default_query_configurations:\n%s\n", cJSON_Print(jsondefault_query_configurations_2));
}

int main() {
  test_default_query_configurations(1);
  test_default_query_configurations(0);

  printf("Hello world \n");
  return 0;
}

#endif // default_query_configurations_MAIN
#endif // default_query_configurations_TEST
