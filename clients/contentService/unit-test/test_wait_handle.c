#ifndef wait_handle_TEST
#define wait_handle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wait_handle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wait_handle.h"
wait_handle_t* instantiate_wait_handle(int include_optional);

#include "test_safe_wait_handle.c"


wait_handle_t* instantiate_wait_handle(int include_optional) {
  wait_handle_t* wait_handle = NULL;
  if (include_optional) {
    wait_handle = wait_handle_create(
      0,
       // false, not to have infinite recursion
      instantiate_safe_wait_handle(0)
    );
  } else {
    wait_handle = wait_handle_create(
      0,
      NULL
    );
  }

  return wait_handle;
}


#ifdef wait_handle_MAIN

void test_wait_handle(int include_optional) {
    wait_handle_t* wait_handle_1 = instantiate_wait_handle(include_optional);

	cJSON* jsonwait_handle_1 = wait_handle_convertToJSON(wait_handle_1);
	printf("wait_handle :\n%s\n", cJSON_Print(jsonwait_handle_1));
	wait_handle_t* wait_handle_2 = wait_handle_parseFromJSON(jsonwait_handle_1);
	cJSON* jsonwait_handle_2 = wait_handle_convertToJSON(wait_handle_2);
	printf("repeating wait_handle:\n%s\n", cJSON_Print(jsonwait_handle_2));
}

int main() {
  test_wait_handle(1);
  test_wait_handle(0);

  printf("Hello world \n");
  return 0;
}

#endif // wait_handle_MAIN
#endif // wait_handle_TEST
