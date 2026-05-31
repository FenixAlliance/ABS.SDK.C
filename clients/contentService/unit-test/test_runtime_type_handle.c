#ifndef runtime_type_handle_TEST
#define runtime_type_handle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define runtime_type_handle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/runtime_type_handle.h"
runtime_type_handle_t* instantiate_runtime_type_handle(int include_optional);



runtime_type_handle_t* instantiate_runtime_type_handle(int include_optional) {
  runtime_type_handle_t* runtime_type_handle = NULL;
  if (include_optional) {
    runtime_type_handle = runtime_type_handle_create(
      0
    );
  } else {
    runtime_type_handle = runtime_type_handle_create(
      0
    );
  }

  return runtime_type_handle;
}


#ifdef runtime_type_handle_MAIN

void test_runtime_type_handle(int include_optional) {
    runtime_type_handle_t* runtime_type_handle_1 = instantiate_runtime_type_handle(include_optional);

	cJSON* jsonruntime_type_handle_1 = runtime_type_handle_convertToJSON(runtime_type_handle_1);
	printf("runtime_type_handle :\n%s\n", cJSON_Print(jsonruntime_type_handle_1));
	runtime_type_handle_t* runtime_type_handle_2 = runtime_type_handle_parseFromJSON(jsonruntime_type_handle_1);
	cJSON* jsonruntime_type_handle_2 = runtime_type_handle_convertToJSON(runtime_type_handle_2);
	printf("repeating runtime_type_handle:\n%s\n", cJSON_Print(jsonruntime_type_handle_2));
}

int main() {
  test_runtime_type_handle(1);
  test_runtime_type_handle(0);

  printf("Hello world \n");
  return 0;
}

#endif // runtime_type_handle_MAIN
#endif // runtime_type_handle_TEST
