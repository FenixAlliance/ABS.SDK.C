#ifndef seo_options_TEST
#define seo_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define seo_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/seo_options.h"
seo_options_t* instantiate_seo_options(int include_optional);

#include "test_creator.c"
#include "test_organization.c"


seo_options_t* instantiate_seo_options(int include_optional) {
  seo_options_t* seo_options = NULL;
  if (include_optional) {
    seo_options = seo_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_creator(0),
       // false, not to have infinite recursion
      instantiate_organization(0),
      list_createList()
    );
  } else {
    seo_options = seo_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      list_createList()
    );
  }

  return seo_options;
}


#ifdef seo_options_MAIN

void test_seo_options(int include_optional) {
    seo_options_t* seo_options_1 = instantiate_seo_options(include_optional);

	cJSON* jsonseo_options_1 = seo_options_convertToJSON(seo_options_1);
	printf("seo_options :\n%s\n", cJSON_Print(jsonseo_options_1));
	seo_options_t* seo_options_2 = seo_options_parseFromJSON(jsonseo_options_1);
	cJSON* jsonseo_options_2 = seo_options_convertToJSON(seo_options_2);
	printf("repeating seo_options:\n%s\n", cJSON_Print(jsonseo_options_2));
}

int main() {
  test_seo_options(1);
  test_seo_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // seo_options_MAIN
#endif // seo_options_TEST
