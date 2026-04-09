#ifndef i_swagger_spec_TEST
#define i_swagger_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_swagger_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_swagger_spec.h"
i_swagger_spec_t* instantiate_i_swagger_spec(int include_optional);

#include "test_i_swagger_endpoint.c"
#include "test_i_swagger_contact.c"
#include "test_i_swagger_license.c"


i_swagger_spec_t* instantiate_i_swagger_spec(int include_optional) {
  i_swagger_spec_t* i_swagger_spec = NULL;
  if (include_optional) {
    i_swagger_spec = i_swagger_spec_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_i_swagger_endpoint(0),
       // false, not to have infinite recursion
      instantiate_i_swagger_contact(0),
       // false, not to have infinite recursion
      instantiate_i_swagger_license(0)
    );
  } else {
    i_swagger_spec = i_swagger_spec_create(
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

  return i_swagger_spec;
}


#ifdef i_swagger_spec_MAIN

void test_i_swagger_spec(int include_optional) {
    i_swagger_spec_t* i_swagger_spec_1 = instantiate_i_swagger_spec(include_optional);

	cJSON* jsoni_swagger_spec_1 = i_swagger_spec_convertToJSON(i_swagger_spec_1);
	printf("i_swagger_spec :\n%s\n", cJSON_Print(jsoni_swagger_spec_1));
	i_swagger_spec_t* i_swagger_spec_2 = i_swagger_spec_parseFromJSON(jsoni_swagger_spec_1);
	cJSON* jsoni_swagger_spec_2 = i_swagger_spec_convertToJSON(i_swagger_spec_2);
	printf("repeating i_swagger_spec:\n%s\n", cJSON_Print(jsoni_swagger_spec_2));
}

int main() {
  test_i_swagger_spec(1);
  test_i_swagger_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_swagger_spec_MAIN
#endif // i_swagger_spec_TEST
