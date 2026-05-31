#ifndef additional_attribute_TEST
#define additional_attribute_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_attribute_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_attribute.h"
additional_attribute_t* instantiate_additional_attribute(int include_optional);



additional_attribute_t* instantiate_additional_attribute(int include_optional) {
  additional_attribute_t* additional_attribute = NULL;
  if (include_optional) {
    additional_attribute = additional_attribute_create(
      "0",
      "0"
    );
  } else {
    additional_attribute = additional_attribute_create(
      "0",
      "0"
    );
  }

  return additional_attribute;
}


#ifdef additional_attribute_MAIN

void test_additional_attribute(int include_optional) {
    additional_attribute_t* additional_attribute_1 = instantiate_additional_attribute(include_optional);

	cJSON* jsonadditional_attribute_1 = additional_attribute_convertToJSON(additional_attribute_1);
	printf("additional_attribute :\n%s\n", cJSON_Print(jsonadditional_attribute_1));
	additional_attribute_t* additional_attribute_2 = additional_attribute_parseFromJSON(jsonadditional_attribute_1);
	cJSON* jsonadditional_attribute_2 = additional_attribute_convertToJSON(additional_attribute_2);
	printf("repeating additional_attribute:\n%s\n", cJSON_Print(jsonadditional_attribute_2));
}

int main() {
  test_additional_attribute(1);
  test_additional_attribute(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_attribute_MAIN
#endif // additional_attribute_TEST
