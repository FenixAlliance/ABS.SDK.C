#ifndef module_list_envelope_TEST
#define module_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_list_envelope.h"
module_list_envelope_t* instantiate_module_list_envelope(int include_optional);



module_list_envelope_t* instantiate_module_list_envelope(int include_optional) {
  module_list_envelope_t* module_list_envelope = NULL;
  if (include_optional) {
    module_list_envelope = module_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    module_list_envelope = module_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return module_list_envelope;
}


#ifdef module_list_envelope_MAIN

void test_module_list_envelope(int include_optional) {
    module_list_envelope_t* module_list_envelope_1 = instantiate_module_list_envelope(include_optional);

	cJSON* jsonmodule_list_envelope_1 = module_list_envelope_convertToJSON(module_list_envelope_1);
	printf("module_list_envelope :\n%s\n", cJSON_Print(jsonmodule_list_envelope_1));
	module_list_envelope_t* module_list_envelope_2 = module_list_envelope_parseFromJSON(jsonmodule_list_envelope_1);
	cJSON* jsonmodule_list_envelope_2 = module_list_envelope_convertToJSON(module_list_envelope_2);
	printf("repeating module_list_envelope:\n%s\n", cJSON_Print(jsonmodule_list_envelope_2));
}

int main() {
  test_module_list_envelope(1);
  test_module_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_list_envelope_MAIN
#endif // module_list_envelope_TEST
