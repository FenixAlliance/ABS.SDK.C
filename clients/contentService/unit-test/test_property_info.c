#ifndef property_info_TEST
#define property_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define property_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/property_info.h"
property_info_t* instantiate_property_info(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"
#include "test_type.c"
#include "test_method_info.c"
#include "test_method_info.c"


property_info_t* instantiate_property_info(int include_optional) {
  property_info_t* property_info = NULL;
  if (include_optional) {
    property_info = property_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_module(0),
      list_createList(),
      1,
      56,
      contentservice_property_info_MEMBERTYPE_Constructor,
       // false, not to have infinite recursion
      instantiate_type(0),
      contentservice_property_info_ATTRIBUTES_None,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_method_info(0),
       // false, not to have infinite recursion
      instantiate_method_info(0)
    );
  } else {
    property_info = property_info_create(
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56,
      contentservice_property_info_MEMBERTYPE_Constructor,
      NULL,
      contentservice_property_info_ATTRIBUTES_None,
      1,
      1,
      1,
      NULL,
      NULL
    );
  }

  return property_info;
}


#ifdef property_info_MAIN

void test_property_info(int include_optional) {
    property_info_t* property_info_1 = instantiate_property_info(include_optional);

	cJSON* jsonproperty_info_1 = property_info_convertToJSON(property_info_1);
	printf("property_info :\n%s\n", cJSON_Print(jsonproperty_info_1));
	property_info_t* property_info_2 = property_info_parseFromJSON(jsonproperty_info_1);
	cJSON* jsonproperty_info_2 = property_info_convertToJSON(property_info_2);
	printf("repeating property_info:\n%s\n", cJSON_Print(jsonproperty_info_2));
}

int main() {
  test_property_info(1);
  test_property_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // property_info_MAIN
#endif // property_info_TEST
