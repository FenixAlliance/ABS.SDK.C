#ifndef custom_attribute_named_argument_TEST
#define custom_attribute_named_argument_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_attribute_named_argument_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_attribute_named_argument.h"
custom_attribute_named_argument_t* instantiate_custom_attribute_named_argument(int include_optional);

#include "test_member_info.c"
#include "test_custom_attribute_typed_argument.c"


custom_attribute_named_argument_t* instantiate_custom_attribute_named_argument(int include_optional) {
  custom_attribute_named_argument_t* custom_attribute_named_argument = NULL;
  if (include_optional) {
    custom_attribute_named_argument = custom_attribute_named_argument_create(
       // false, not to have infinite recursion
      instantiate_member_info(0),
       // false, not to have infinite recursion
      instantiate_custom_attribute_typed_argument(0),
      "0",
      1
    );
  } else {
    custom_attribute_named_argument = custom_attribute_named_argument_create(
      NULL,
      NULL,
      "0",
      1
    );
  }

  return custom_attribute_named_argument;
}


#ifdef custom_attribute_named_argument_MAIN

void test_custom_attribute_named_argument(int include_optional) {
    custom_attribute_named_argument_t* custom_attribute_named_argument_1 = instantiate_custom_attribute_named_argument(include_optional);

	cJSON* jsoncustom_attribute_named_argument_1 = custom_attribute_named_argument_convertToJSON(custom_attribute_named_argument_1);
	printf("custom_attribute_named_argument :\n%s\n", cJSON_Print(jsoncustom_attribute_named_argument_1));
	custom_attribute_named_argument_t* custom_attribute_named_argument_2 = custom_attribute_named_argument_parseFromJSON(jsoncustom_attribute_named_argument_1);
	cJSON* jsoncustom_attribute_named_argument_2 = custom_attribute_named_argument_convertToJSON(custom_attribute_named_argument_2);
	printf("repeating custom_attribute_named_argument:\n%s\n", cJSON_Print(jsoncustom_attribute_named_argument_2));
}

int main() {
  test_custom_attribute_named_argument(1);
  test_custom_attribute_named_argument(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_attribute_named_argument_MAIN
#endif // custom_attribute_named_argument_TEST
