#ifndef studio_module_TEST
#define studio_module_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define studio_module_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/studio_module.h"
studio_module_t* instantiate_studio_module(int include_optional);



studio_module_t* instantiate_studio_module(int include_optional) {
  studio_module_t* studio_module = NULL;
  if (include_optional) {
    studio_module = studio_module_create(
      "0",
      "0"
    );
  } else {
    studio_module = studio_module_create(
      "0",
      "0"
    );
  }

  return studio_module;
}


#ifdef studio_module_MAIN

void test_studio_module(int include_optional) {
    studio_module_t* studio_module_1 = instantiate_studio_module(include_optional);

	cJSON* jsonstudio_module_1 = studio_module_convertToJSON(studio_module_1);
	printf("studio_module :\n%s\n", cJSON_Print(jsonstudio_module_1));
	studio_module_t* studio_module_2 = studio_module_parseFromJSON(jsonstudio_module_1);
	cJSON* jsonstudio_module_2 = studio_module_convertToJSON(studio_module_2);
	printf("repeating studio_module:\n%s\n", cJSON_Print(jsonstudio_module_2));
}

int main() {
  test_studio_module(1);
  test_studio_module(0);

  printf("Hello world \n");
  return 0;
}

#endif // studio_module_MAIN
#endif // studio_module_TEST
