#ifndef assembly_TEST
#define assembly_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define assembly_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/assembly.h"
assembly_t* instantiate_assembly(int include_optional);

#include "test_method_info.c"
#include "test_module.c"


assembly_t* instantiate_assembly(int include_optional) {
  assembly_t* assembly = NULL;
  if (include_optional) {
    assembly = assembly_create(
      list_createList(),
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_method_info(0),
      "0",
      "0",
      1,
      "0",
      1,
      1,
      1,
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_module(0),
      list_createList(),
      1,
      56,
      contentservice_assembly_SECURITYRULESET_None
    );
  } else {
    assembly = assembly_create(
      list_createList(),
      list_createList(),
      "0",
      NULL,
      "0",
      "0",
      1,
      "0",
      1,
      1,
      1,
      list_createList(),
      "0",
      NULL,
      list_createList(),
      1,
      56,
      contentservice_assembly_SECURITYRULESET_None
    );
  }

  return assembly;
}


#ifdef assembly_MAIN

void test_assembly(int include_optional) {
    assembly_t* assembly_1 = instantiate_assembly(include_optional);

	cJSON* jsonassembly_1 = assembly_convertToJSON(assembly_1);
	printf("assembly :\n%s\n", cJSON_Print(jsonassembly_1));
	assembly_t* assembly_2 = assembly_parseFromJSON(jsonassembly_1);
	cJSON* jsonassembly_2 = assembly_convertToJSON(assembly_2);
	printf("repeating assembly:\n%s\n", cJSON_Print(jsonassembly_2));
}

int main() {
  test_assembly(1);
  test_assembly(0);

  printf("Hello world \n");
  return 0;
}

#endif // assembly_MAIN
#endif // assembly_TEST
