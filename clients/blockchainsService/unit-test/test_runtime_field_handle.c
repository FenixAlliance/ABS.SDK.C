#ifndef runtime_field_handle_TEST
#define runtime_field_handle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define runtime_field_handle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/runtime_field_handle.h"
runtime_field_handle_t* instantiate_runtime_field_handle(int include_optional);



runtime_field_handle_t* instantiate_runtime_field_handle(int include_optional) {
  runtime_field_handle_t* runtime_field_handle = NULL;
  if (include_optional) {
    runtime_field_handle = runtime_field_handle_create(
      0
    );
  } else {
    runtime_field_handle = runtime_field_handle_create(
      0
    );
  }

  return runtime_field_handle;
}


#ifdef runtime_field_handle_MAIN

void test_runtime_field_handle(int include_optional) {
    runtime_field_handle_t* runtime_field_handle_1 = instantiate_runtime_field_handle(include_optional);

	cJSON* jsonruntime_field_handle_1 = runtime_field_handle_convertToJSON(runtime_field_handle_1);
	printf("runtime_field_handle :\n%s\n", cJSON_Print(jsonruntime_field_handle_1));
	runtime_field_handle_t* runtime_field_handle_2 = runtime_field_handle_parseFromJSON(jsonruntime_field_handle_1);
	cJSON* jsonruntime_field_handle_2 = runtime_field_handle_convertToJSON(runtime_field_handle_2);
	printf("repeating runtime_field_handle:\n%s\n", cJSON_Print(jsonruntime_field_handle_2));
}

int main() {
  test_runtime_field_handle(1);
  test_runtime_field_handle(0);

  printf("Hello world \n");
  return 0;
}

#endif // runtime_field_handle_MAIN
#endif // runtime_field_handle_TEST
