#ifndef suite_module_TEST
#define suite_module_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define suite_module_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/suite_module.h"
suite_module_t* instantiate_suite_module(int include_optional);

#include "test_i_open_api_definition_spec.c"


suite_module_t* instantiate_suite_module(int include_optional) {
  suite_module_t* suite_module = NULL;
  if (include_optional) {
    suite_module = suite_module_create(
      1,
      1,
      1,
      56,
      "0",
      "0",
      "0",
      "0",
      systemservice_suite_module_TYPE_Module,
      systemservice_suite_module_CATEGORY_Other,
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_i_open_api_definition_spec(0),
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  } else {
    suite_module = suite_module_create(
      1,
      1,
      1,
      56,
      "0",
      "0",
      "0",
      "0",
      systemservice_suite_module_TYPE_Module,
      systemservice_suite_module_CATEGORY_Other,
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  }

  return suite_module;
}


#ifdef suite_module_MAIN

void test_suite_module(int include_optional) {
    suite_module_t* suite_module_1 = instantiate_suite_module(include_optional);

	cJSON* jsonsuite_module_1 = suite_module_convertToJSON(suite_module_1);
	printf("suite_module :\n%s\n", cJSON_Print(jsonsuite_module_1));
	suite_module_t* suite_module_2 = suite_module_parseFromJSON(jsonsuite_module_1);
	cJSON* jsonsuite_module_2 = suite_module_convertToJSON(suite_module_2);
	printf("repeating suite_module:\n%s\n", cJSON_Print(jsonsuite_module_2));
}

int main() {
  test_suite_module(1);
  test_suite_module(0);

  printf("Hello world \n");
  return 0;
}

#endif // suite_module_MAIN
#endif // suite_module_TEST
