#ifndef i_edm_property_TEST
#define i_edm_property_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_property_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_property.h"
i_edm_property_t* instantiate_i_edm_property(int include_optional);

#include "test_i_edm_type_reference.c"
#include "test_i_edm_structured_type.c"


i_edm_property_t* instantiate_i_edm_property(int include_optional) {
  i_edm_property_t* i_edm_property = NULL;
  if (include_optional) {
    i_edm_property = i_edm_property_create(
      "0",
      blockchainsservice_i_edm_property_PROPERTYKIND_None,
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0),
       // false, not to have infinite recursion
      instantiate_i_edm_structured_type(0)
    );
  } else {
    i_edm_property = i_edm_property_create(
      "0",
      blockchainsservice_i_edm_property_PROPERTYKIND_None,
      NULL,
      NULL
    );
  }

  return i_edm_property;
}


#ifdef i_edm_property_MAIN

void test_i_edm_property(int include_optional) {
    i_edm_property_t* i_edm_property_1 = instantiate_i_edm_property(include_optional);

	cJSON* jsoni_edm_property_1 = i_edm_property_convertToJSON(i_edm_property_1);
	printf("i_edm_property :\n%s\n", cJSON_Print(jsoni_edm_property_1));
	i_edm_property_t* i_edm_property_2 = i_edm_property_parseFromJSON(jsoni_edm_property_1);
	cJSON* jsoni_edm_property_2 = i_edm_property_convertToJSON(i_edm_property_2);
	printf("repeating i_edm_property:\n%s\n", cJSON_Print(jsoni_edm_property_2));
}

int main() {
  test_i_edm_property(1);
  test_i_edm_property(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_property_MAIN
#endif // i_edm_property_TEST
