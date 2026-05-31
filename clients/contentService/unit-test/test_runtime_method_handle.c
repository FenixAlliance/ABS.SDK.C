#ifndef runtime_method_handle_TEST
#define runtime_method_handle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define runtime_method_handle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/runtime_method_handle.h"
runtime_method_handle_t* instantiate_runtime_method_handle(int include_optional);



runtime_method_handle_t* instantiate_runtime_method_handle(int include_optional) {
  runtime_method_handle_t* runtime_method_handle = NULL;
  if (include_optional) {
    runtime_method_handle = runtime_method_handle_create(
      0
    );
  } else {
    runtime_method_handle = runtime_method_handle_create(
      0
    );
  }

  return runtime_method_handle;
}


#ifdef runtime_method_handle_MAIN

void test_runtime_method_handle(int include_optional) {
    runtime_method_handle_t* runtime_method_handle_1 = instantiate_runtime_method_handle(include_optional);

	cJSON* jsonruntime_method_handle_1 = runtime_method_handle_convertToJSON(runtime_method_handle_1);
	printf("runtime_method_handle :\n%s\n", cJSON_Print(jsonruntime_method_handle_1));
	runtime_method_handle_t* runtime_method_handle_2 = runtime_method_handle_parseFromJSON(jsonruntime_method_handle_1);
	cJSON* jsonruntime_method_handle_2 = runtime_method_handle_convertToJSON(runtime_method_handle_2);
	printf("repeating runtime_method_handle:\n%s\n", cJSON_Print(jsonruntime_method_handle_2));
}

int main() {
  test_runtime_method_handle(1);
  test_runtime_method_handle(0);

  printf("Hello world \n");
  return 0;
}

#endif // runtime_method_handle_MAIN
#endif // runtime_method_handle_TEST
