#ifndef type_info_TEST
#define type_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define type_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/type_info.h"
type_info_t* instantiate_type_info(int include_optional);

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


type_info_t* instantiate_type_info(int include_optional) {
  type_info_t* type_info = NULL;
  if (include_optional) {
    type_info = type_info_create(
      "0",
      list_createList(),
      1,
      56,
      contentservice_type_info_MEMBERTYPE_Constructor,
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
      contentservice_type_info_GENERICPARAMETERATTRIBUTES_None,
      contentservice_type_info_ATTRIBUTES_NotPublic,
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
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    type_info = type_info_create(
      "0",
      list_createList(),
      1,
      56,
      contentservice_type_info_MEMBERTYPE_Constructor,
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
      contentservice_type_info_GENERICPARAMETERATTRIBUTES_None,
      contentservice_type_info_ATTRIBUTES_NotPublic,
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
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return type_info;
}


#ifdef type_info_MAIN

void test_type_info(int include_optional) {
    type_info_t* type_info_1 = instantiate_type_info(include_optional);

	cJSON* jsontype_info_1 = type_info_convertToJSON(type_info_1);
	printf("type_info :\n%s\n", cJSON_Print(jsontype_info_1));
	type_info_t* type_info_2 = type_info_parseFromJSON(jsontype_info_1);
	cJSON* jsontype_info_2 = type_info_convertToJSON(type_info_2);
	printf("repeating type_info:\n%s\n", cJSON_Print(jsontype_info_2));
}

int main() {
  test_type_info(1);
  test_type_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // type_info_MAIN
#endif // type_info_TEST
