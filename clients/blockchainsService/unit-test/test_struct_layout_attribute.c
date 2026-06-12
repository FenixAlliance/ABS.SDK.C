#ifndef struct_layout_attribute_TEST
#define struct_layout_attribute_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define struct_layout_attribute_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/struct_layout_attribute.h"
struct_layout_attribute_t* instantiate_struct_layout_attribute(int include_optional);



struct_layout_attribute_t* instantiate_struct_layout_attribute(int include_optional) {
  struct_layout_attribute_t* struct_layout_attribute = NULL;
  if (include_optional) {
    struct_layout_attribute = struct_layout_attribute_create(
      null,
      blockchainsservice_struct_layout_attribute_VALUE_Sequential
    );
  } else {
    struct_layout_attribute = struct_layout_attribute_create(
      null,
      blockchainsservice_struct_layout_attribute_VALUE_Sequential
    );
  }

  return struct_layout_attribute;
}


#ifdef struct_layout_attribute_MAIN

void test_struct_layout_attribute(int include_optional) {
    struct_layout_attribute_t* struct_layout_attribute_1 = instantiate_struct_layout_attribute(include_optional);

	cJSON* jsonstruct_layout_attribute_1 = struct_layout_attribute_convertToJSON(struct_layout_attribute_1);
	printf("struct_layout_attribute :\n%s\n", cJSON_Print(jsonstruct_layout_attribute_1));
	struct_layout_attribute_t* struct_layout_attribute_2 = struct_layout_attribute_parseFromJSON(jsonstruct_layout_attribute_1);
	cJSON* jsonstruct_layout_attribute_2 = struct_layout_attribute_convertToJSON(struct_layout_attribute_2);
	printf("repeating struct_layout_attribute:\n%s\n", cJSON_Print(jsonstruct_layout_attribute_2));
}

int main() {
  test_struct_layout_attribute(1);
  test_struct_layout_attribute(0);

  printf("Hello world \n");
  return 0;
}

#endif // struct_layout_attribute_MAIN
#endif // struct_layout_attribute_TEST
