#ifndef module_TEST
#define module_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module.h"
module_t* instantiate_module(int include_optional);

#include "test_assembly.c"
#include "test_module_handle.c"


module_t* instantiate_module(int include_optional) {
  module_t* module = NULL;
  if (include_optional) {
    module = module_create(
       // false, not to have infinite recursion
      instantiate_assembly(0),
      "0",
      "0",
      56,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_module_handle(0),
      list_createList(),
      56
    );
  } else {
    module = module_create(
      NULL,
      "0",
      "0",
      56,
      "0",
      "0",
      NULL,
      list_createList(),
      56
    );
  }

  return module;
}


#ifdef module_MAIN

void test_module(int include_optional) {
    module_t* module_1 = instantiate_module(include_optional);

	cJSON* jsonmodule_1 = module_convertToJSON(module_1);
	printf("module :\n%s\n", cJSON_Print(jsonmodule_1));
	module_t* module_2 = module_parseFromJSON(jsonmodule_1);
	cJSON* jsonmodule_2 = module_convertToJSON(module_2);
	printf("repeating module:\n%s\n", cJSON_Print(jsonmodule_2));
}

int main() {
  test_module(1);
  test_module(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_MAIN
#endif // module_TEST
