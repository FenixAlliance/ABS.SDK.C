#ifndef method_base_TEST
#define method_base_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define method_base_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/method_base.h"
method_base_t* instantiate_method_base(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"
#include "test_runtime_method_handle.c"


method_base_t* instantiate_method_base(int include_optional) {
  method_base_t* method_base = NULL;
  if (include_optional) {
    method_base = method_base_create(
      contentservice_method_base_MEMBERTYPE_Constructor,
      "0",
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_module(0),
      list_createList(),
      1,
      56,
      contentservice_method_base_ATTRIBUTES_PrivateScope,
      contentservice_method_base_METHODIMPLEMENTATIONFLAGS_IL,
      contentservice_method_base_CALLINGCONVENTION_Standard,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_runtime_method_handle(0),
      1,
      1,
      1
    );
  } else {
    method_base = method_base_create(
      contentservice_method_base_MEMBERTYPE_Constructor,
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56,
      contentservice_method_base_ATTRIBUTES_PrivateScope,
      contentservice_method_base_METHODIMPLEMENTATIONFLAGS_IL,
      contentservice_method_base_CALLINGCONVENTION_Standard,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      NULL,
      1,
      1,
      1
    );
  }

  return method_base;
}


#ifdef method_base_MAIN

void test_method_base(int include_optional) {
    method_base_t* method_base_1 = instantiate_method_base(include_optional);

	cJSON* jsonmethod_base_1 = method_base_convertToJSON(method_base_1);
	printf("method_base :\n%s\n", cJSON_Print(jsonmethod_base_1));
	method_base_t* method_base_2 = method_base_parseFromJSON(jsonmethod_base_1);
	cJSON* jsonmethod_base_2 = method_base_convertToJSON(method_base_2);
	printf("repeating method_base:\n%s\n", cJSON_Print(jsonmethod_base_2));
}

int main() {
  test_method_base(1);
  test_method_base(0);

  printf("Hello world \n");
  return 0;
}

#endif // method_base_MAIN
#endif // method_base_TEST
