#ifndef field_info_TEST
#define field_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_info.h"
field_info_t* instantiate_field_info(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"
#include "test_type.c"
#include "test_runtime_field_handle.c"


field_info_t* instantiate_field_info(int include_optional) {
  field_info_t* field_info = NULL;
  if (include_optional) {
    field_info = field_info_create(
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
      blockchainsservice_field_info_MEMBERTYPE_Constructor,
      blockchainsservice_field_info_ATTRIBUTES_PrivateScope,
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
       // false, not to have infinite recursion
      instantiate_runtime_field_handle(0)
    );
  } else {
    field_info = field_info_create(
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56,
      blockchainsservice_field_info_MEMBERTYPE_Constructor,
      blockchainsservice_field_info_ATTRIBUTES_PrivateScope,
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
      NULL
    );
  }

  return field_info;
}


#ifdef field_info_MAIN

void test_field_info(int include_optional) {
    field_info_t* field_info_1 = instantiate_field_info(include_optional);

	cJSON* jsonfield_info_1 = field_info_convertToJSON(field_info_1);
	printf("field_info :\n%s\n", cJSON_Print(jsonfield_info_1));
	field_info_t* field_info_2 = field_info_parseFromJSON(jsonfield_info_1);
	cJSON* jsonfield_info_2 = field_info_convertToJSON(field_info_2);
	printf("repeating field_info:\n%s\n", cJSON_Print(jsonfield_info_2));
}

int main() {
  test_field_info(1);
  test_field_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_info_MAIN
#endif // field_info_TEST
