#ifndef i_open_api_definition_spec_TEST
#define i_open_api_definition_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_open_api_definition_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_open_api_definition_spec.h"
i_open_api_definition_spec_t* instantiate_i_open_api_definition_spec(int include_optional);

#include "test_i_open_api_endpoint.c"
#include "test_i_open_api_contact.c"
#include "test_i_open_api_license.c"


i_open_api_definition_spec_t* instantiate_i_open_api_definition_spec(int include_optional) {
  i_open_api_definition_spec_t* i_open_api_definition_spec = NULL;
  if (include_optional) {
    i_open_api_definition_spec = i_open_api_definition_spec_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_i_open_api_endpoint(0),
       // false, not to have infinite recursion
      instantiate_i_open_api_contact(0),
       // false, not to have infinite recursion
      instantiate_i_open_api_license(0)
    );
  } else {
    i_open_api_definition_spec = i_open_api_definition_spec_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return i_open_api_definition_spec;
}


#ifdef i_open_api_definition_spec_MAIN

void test_i_open_api_definition_spec(int include_optional) {
    i_open_api_definition_spec_t* i_open_api_definition_spec_1 = instantiate_i_open_api_definition_spec(include_optional);

	cJSON* jsoni_open_api_definition_spec_1 = i_open_api_definition_spec_convertToJSON(i_open_api_definition_spec_1);
	printf("i_open_api_definition_spec :\n%s\n", cJSON_Print(jsoni_open_api_definition_spec_1));
	i_open_api_definition_spec_t* i_open_api_definition_spec_2 = i_open_api_definition_spec_parseFromJSON(jsoni_open_api_definition_spec_1);
	cJSON* jsoni_open_api_definition_spec_2 = i_open_api_definition_spec_convertToJSON(i_open_api_definition_spec_2);
	printf("repeating i_open_api_definition_spec:\n%s\n", cJSON_Print(jsoni_open_api_definition_spec_2));
}

int main() {
  test_i_open_api_definition_spec(1);
  test_i_open_api_definition_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_open_api_definition_spec_MAIN
#endif // i_open_api_definition_spec_TEST
