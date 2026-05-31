#ifndef type_TEST
#define type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/type.h"
type_t* instantiate_type(int include_optional);

#include "test_assembly.c"
#include "test_module.c"
#include "test_type.c"
#include "test_method_base.c"
#include "test_type.c"
#include "test_type.c"
#include "test_struct_layout_attribute.c"
#include "test_constructor_info.c"
#include "test_runtime_type_handle.c"
#include "test_type.c"


type_t* instantiate_type(int include_optional) {
  type_t* type = NULL;
  if (include_optional) {
    type = type_create(
      "0",
      list_createList(),
      1,
      56,
      contentservice_type_MEMBERTYPE_Constructor,
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_assembly(0),
       // false, not to have infinite recursion
      instantiate_module(0),
      1,
      1,
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_method_base(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_type(0),
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      56,
      contentservice_type_GENERICPARAMETERATTRIBUTES_None,
      contentservice_type_ATTRIBUTES_NotPublic,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_struct_layout_attribute(0),
       // false, not to have infinite recursion
      instantiate_constructor_info(0),
       // false, not to have infinite recursion
      instantiate_runtime_type_handle(0),
      "0",
       // false, not to have infinite recursion
      instantiate_type(0),
      1,
      1,
      1
    );
  } else {
    type = type_create(
      "0",
      list_createList(),
      1,
      56,
      contentservice_type_MEMBERTYPE_Constructor,
      "0",
      "0",
      "0",
      NULL,
      NULL,
      1,
      1,
      NULL,
      NULL,
      NULL,
      NULL,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      56,
      contentservice_type_GENERICPARAMETERATTRIBUTES_None,
      contentservice_type_ATTRIBUTES_NotPublic,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      1,
      1,
      1
    );
  }

  return type;
}


#ifdef type_MAIN

void test_type(int include_optional) {
    type_t* type_1 = instantiate_type(include_optional);

	cJSON* jsontype_1 = type_convertToJSON(type_1);
	printf("type :\n%s\n", cJSON_Print(jsontype_1));
	type_t* type_2 = type_parseFromJSON(jsontype_1);
	cJSON* jsontype_2 = type_convertToJSON(type_2);
	printf("repeating type:\n%s\n", cJSON_Print(jsontype_2));
}

int main() {
  test_type(1);
  test_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // type_MAIN
#endif // type_TEST
