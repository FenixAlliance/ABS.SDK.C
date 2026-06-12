#ifndef module_handle_TEST
#define module_handle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_handle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_handle.h"
module_handle_t* instantiate_module_handle(int include_optional);



module_handle_t* instantiate_module_handle(int include_optional) {
  module_handle_t* module_handle = NULL;
  if (include_optional) {
    module_handle = module_handle_create(
      56
    );
  } else {
    module_handle = module_handle_create(
      56
    );
  }

  return module_handle;
}


#ifdef module_handle_MAIN

void test_module_handle(int include_optional) {
    module_handle_t* module_handle_1 = instantiate_module_handle(include_optional);

	cJSON* jsonmodule_handle_1 = module_handle_convertToJSON(module_handle_1);
	printf("module_handle :\n%s\n", cJSON_Print(jsonmodule_handle_1));
	module_handle_t* module_handle_2 = module_handle_parseFromJSON(jsonmodule_handle_1);
	cJSON* jsonmodule_handle_2 = module_handle_convertToJSON(module_handle_2);
	printf("repeating module_handle:\n%s\n", cJSON_Print(jsonmodule_handle_2));
}

int main() {
  test_module_handle(1);
  test_module_handle(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_handle_MAIN
#endif // module_handle_TEST
