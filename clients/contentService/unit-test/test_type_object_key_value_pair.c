#ifndef type_object_key_value_pair_TEST
#define type_object_key_value_pair_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define type_object_key_value_pair_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/type_object_key_value_pair.h"
type_object_key_value_pair_t* instantiate_type_object_key_value_pair(int include_optional);

#include "test_type.c"


type_object_key_value_pair_t* instantiate_type_object_key_value_pair(int include_optional) {
  type_object_key_value_pair_t* type_object_key_value_pair = NULL;
  if (include_optional) {
    type_object_key_value_pair = type_object_key_value_pair_create(
       // false, not to have infinite recursion
      instantiate_type(0),
      null
    );
  } else {
    type_object_key_value_pair = type_object_key_value_pair_create(
      NULL,
      null
    );
  }

  return type_object_key_value_pair;
}


#ifdef type_object_key_value_pair_MAIN

void test_type_object_key_value_pair(int include_optional) {
    type_object_key_value_pair_t* type_object_key_value_pair_1 = instantiate_type_object_key_value_pair(include_optional);

	cJSON* jsontype_object_key_value_pair_1 = type_object_key_value_pair_convertToJSON(type_object_key_value_pair_1);
	printf("type_object_key_value_pair :\n%s\n", cJSON_Print(jsontype_object_key_value_pair_1));
	type_object_key_value_pair_t* type_object_key_value_pair_2 = type_object_key_value_pair_parseFromJSON(jsontype_object_key_value_pair_1);
	cJSON* jsontype_object_key_value_pair_2 = type_object_key_value_pair_convertToJSON(type_object_key_value_pair_2);
	printf("repeating type_object_key_value_pair:\n%s\n", cJSON_Print(jsontype_object_key_value_pair_2));
}

int main() {
  test_type_object_key_value_pair(1);
  test_type_object_key_value_pair(0);

  printf("Hello world \n");
  return 0;
}

#endif // type_object_key_value_pair_MAIN
#endif // type_object_key_value_pair_TEST
