#ifndef custom_attribute_data_TEST
#define custom_attribute_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_attribute_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_attribute_data.h"
custom_attribute_data_t* instantiate_custom_attribute_data(int include_optional);

#include "test_type.c"
#include "test_constructor_info.c"


custom_attribute_data_t* instantiate_custom_attribute_data(int include_optional) {
  custom_attribute_data_t* custom_attribute_data = NULL;
  if (include_optional) {
    custom_attribute_data = custom_attribute_data_create(
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_constructor_info(0),
      list_createList(),
      list_createList()
    );
  } else {
    custom_attribute_data = custom_attribute_data_create(
      NULL,
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return custom_attribute_data;
}


#ifdef custom_attribute_data_MAIN

void test_custom_attribute_data(int include_optional) {
    custom_attribute_data_t* custom_attribute_data_1 = instantiate_custom_attribute_data(include_optional);

	cJSON* jsoncustom_attribute_data_1 = custom_attribute_data_convertToJSON(custom_attribute_data_1);
	printf("custom_attribute_data :\n%s\n", cJSON_Print(jsoncustom_attribute_data_1));
	custom_attribute_data_t* custom_attribute_data_2 = custom_attribute_data_parseFromJSON(jsoncustom_attribute_data_1);
	cJSON* jsoncustom_attribute_data_2 = custom_attribute_data_convertToJSON(custom_attribute_data_2);
	printf("repeating custom_attribute_data:\n%s\n", cJSON_Print(jsoncustom_attribute_data_2));
}

int main() {
  test_custom_attribute_data(1);
  test_custom_attribute_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_attribute_data_MAIN
#endif // custom_attribute_data_TEST
