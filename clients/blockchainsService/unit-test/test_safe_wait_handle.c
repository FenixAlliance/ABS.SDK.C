#ifndef safe_wait_handle_TEST
#define safe_wait_handle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define safe_wait_handle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/safe_wait_handle.h"
safe_wait_handle_t* instantiate_safe_wait_handle(int include_optional);



safe_wait_handle_t* instantiate_safe_wait_handle(int include_optional) {
  safe_wait_handle_t* safe_wait_handle = NULL;
  if (include_optional) {
    safe_wait_handle = safe_wait_handle_create(
      1,
      1
    );
  } else {
    safe_wait_handle = safe_wait_handle_create(
      1,
      1
    );
  }

  return safe_wait_handle;
}


#ifdef safe_wait_handle_MAIN

void test_safe_wait_handle(int include_optional) {
    safe_wait_handle_t* safe_wait_handle_1 = instantiate_safe_wait_handle(include_optional);

	cJSON* jsonsafe_wait_handle_1 = safe_wait_handle_convertToJSON(safe_wait_handle_1);
	printf("safe_wait_handle :\n%s\n", cJSON_Print(jsonsafe_wait_handle_1));
	safe_wait_handle_t* safe_wait_handle_2 = safe_wait_handle_parseFromJSON(jsonsafe_wait_handle_1);
	cJSON* jsonsafe_wait_handle_2 = safe_wait_handle_convertToJSON(safe_wait_handle_2);
	printf("repeating safe_wait_handle:\n%s\n", cJSON_Print(jsonsafe_wait_handle_2));
}

int main() {
  test_safe_wait_handle(1);
  test_safe_wait_handle(0);

  printf("Hello world \n");
  return 0;
}

#endif // safe_wait_handle_MAIN
#endif // safe_wait_handle_TEST
