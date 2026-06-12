#ifndef host_string_TEST
#define host_string_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define host_string_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/host_string.h"
host_string_t* instantiate_host_string(int include_optional);



host_string_t* instantiate_host_string(int include_optional) {
  host_string_t* host_string = NULL;
  if (include_optional) {
    host_string = host_string_create(
      "0",
      1,
      "0",
      56
    );
  } else {
    host_string = host_string_create(
      "0",
      1,
      "0",
      56
    );
  }

  return host_string;
}


#ifdef host_string_MAIN

void test_host_string(int include_optional) {
    host_string_t* host_string_1 = instantiate_host_string(include_optional);

	cJSON* jsonhost_string_1 = host_string_convertToJSON(host_string_1);
	printf("host_string :\n%s\n", cJSON_Print(jsonhost_string_1));
	host_string_t* host_string_2 = host_string_parseFromJSON(jsonhost_string_1);
	cJSON* jsonhost_string_2 = host_string_convertToJSON(host_string_2);
	printf("repeating host_string:\n%s\n", cJSON_Print(jsonhost_string_2));
}

int main() {
  test_host_string(1);
  test_host_string(0);

  printf("Hello world \n");
  return 0;
}

#endif // host_string_MAIN
#endif // host_string_TEST
