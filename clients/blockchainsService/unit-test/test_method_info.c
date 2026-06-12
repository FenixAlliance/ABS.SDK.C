#ifndef method_info_TEST
#define method_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define method_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/method_info.h"
method_info_t* instantiate_method_info(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"
#include "test_runtime_method_handle.c"
#include "test_parameter_info.c"
#include "test_type.c"


method_info_t* instantiate_method_info(int include_optional) {
  method_info_t* method_info = NULL;
  if (include_optional) {
    method_info = method_info_create(
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
      blockchainsservice_method_info_ATTRIBUTES_PrivateScope,
      blockchainsservice_method_info_METHODIMPLEMENTATIONFLAGS_IL,
      blockchainsservice_method_info_CALLINGCONVENTION_Standard,
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
      1,
      blockchainsservice_method_info_MEMBERTYPE_Constructor,
       // false, not to have infinite recursion
      instantiate_parameter_info(0),
       // false, not to have infinite recursion
      instantiate_type(0),
      0
    );
  } else {
    method_info = method_info_create(
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56,
      blockchainsservice_method_info_ATTRIBUTES_PrivateScope,
      blockchainsservice_method_info_METHODIMPLEMENTATIONFLAGS_IL,
      blockchainsservice_method_info_CALLINGCONVENTION_Standard,
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
      1,
      blockchainsservice_method_info_MEMBERTYPE_Constructor,
      NULL,
      NULL,
      0
    );
  }

  return method_info;
}


#ifdef method_info_MAIN

void test_method_info(int include_optional) {
    method_info_t* method_info_1 = instantiate_method_info(include_optional);

	cJSON* jsonmethod_info_1 = method_info_convertToJSON(method_info_1);
	printf("method_info :\n%s\n", cJSON_Print(jsonmethod_info_1));
	method_info_t* method_info_2 = method_info_parseFromJSON(jsonmethod_info_1);
	cJSON* jsonmethod_info_2 = method_info_convertToJSON(method_info_2);
	printf("repeating method_info:\n%s\n", cJSON_Print(jsonmethod_info_2));
}

int main() {
  test_method_info(1);
  test_method_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // method_info_MAIN
#endif // method_info_TEST
