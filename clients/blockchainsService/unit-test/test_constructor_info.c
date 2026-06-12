#ifndef constructor_info_TEST
#define constructor_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define constructor_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/constructor_info.h"
constructor_info_t* instantiate_constructor_info(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"
#include "test_runtime_method_handle.c"


constructor_info_t* instantiate_constructor_info(int include_optional) {
  constructor_info_t* constructor_info = NULL;
  if (include_optional) {
    constructor_info = constructor_info_create(
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
      blockchainsservice_constructor_info_ATTRIBUTES_PrivateScope,
      blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_IL,
      blockchainsservice_constructor_info_CALLINGCONVENTION_Standard,
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
      blockchainsservice_constructor_info_MEMBERTYPE_Constructor
    );
  } else {
    constructor_info = constructor_info_create(
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56,
      blockchainsservice_constructor_info_ATTRIBUTES_PrivateScope,
      blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_IL,
      blockchainsservice_constructor_info_CALLINGCONVENTION_Standard,
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
      blockchainsservice_constructor_info_MEMBERTYPE_Constructor
    );
  }

  return constructor_info;
}


#ifdef constructor_info_MAIN

void test_constructor_info(int include_optional) {
    constructor_info_t* constructor_info_1 = instantiate_constructor_info(include_optional);

	cJSON* jsonconstructor_info_1 = constructor_info_convertToJSON(constructor_info_1);
	printf("constructor_info :\n%s\n", cJSON_Print(jsonconstructor_info_1));
	constructor_info_t* constructor_info_2 = constructor_info_parseFromJSON(jsonconstructor_info_1);
	cJSON* jsonconstructor_info_2 = constructor_info_convertToJSON(constructor_info_2);
	printf("repeating constructor_info:\n%s\n", cJSON_Print(jsonconstructor_info_2));
}

int main() {
  test_constructor_info(1);
  test_constructor_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // constructor_info_MAIN
#endif // constructor_info_TEST
