#ifndef shipping_class_create_dto_TEST
#define shipping_class_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_class_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_class_create_dto.h"
shipping_class_create_dto_t* instantiate_shipping_class_create_dto(int include_optional);



shipping_class_create_dto_t* instantiate_shipping_class_create_dto(int include_optional) {
  shipping_class_create_dto_t* shipping_class_create_dto = NULL;
  if (include_optional) {
    shipping_class_create_dto = shipping_class_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    shipping_class_create_dto = shipping_class_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return shipping_class_create_dto;
}


#ifdef shipping_class_create_dto_MAIN

void test_shipping_class_create_dto(int include_optional) {
    shipping_class_create_dto_t* shipping_class_create_dto_1 = instantiate_shipping_class_create_dto(include_optional);

	cJSON* jsonshipping_class_create_dto_1 = shipping_class_create_dto_convertToJSON(shipping_class_create_dto_1);
	printf("shipping_class_create_dto :\n%s\n", cJSON_Print(jsonshipping_class_create_dto_1));
	shipping_class_create_dto_t* shipping_class_create_dto_2 = shipping_class_create_dto_parseFromJSON(jsonshipping_class_create_dto_1);
	cJSON* jsonshipping_class_create_dto_2 = shipping_class_create_dto_convertToJSON(shipping_class_create_dto_2);
	printf("repeating shipping_class_create_dto:\n%s\n", cJSON_Print(jsonshipping_class_create_dto_2));
}

int main() {
  test_shipping_class_create_dto(1);
  test_shipping_class_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_class_create_dto_MAIN
#endif // shipping_class_create_dto_TEST
