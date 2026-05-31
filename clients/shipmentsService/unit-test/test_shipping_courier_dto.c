#ifndef shipping_courier_dto_TEST
#define shipping_courier_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_courier_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_courier_dto.h"
shipping_courier_dto_t* instantiate_shipping_courier_dto(int include_optional);



shipping_courier_dto_t* instantiate_shipping_courier_dto(int include_optional) {
  shipping_courier_dto_t* shipping_courier_dto = NULL;
  if (include_optional) {
    shipping_courier_dto = shipping_courier_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    shipping_courier_dto = shipping_courier_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return shipping_courier_dto;
}


#ifdef shipping_courier_dto_MAIN

void test_shipping_courier_dto(int include_optional) {
    shipping_courier_dto_t* shipping_courier_dto_1 = instantiate_shipping_courier_dto(include_optional);

	cJSON* jsonshipping_courier_dto_1 = shipping_courier_dto_convertToJSON(shipping_courier_dto_1);
	printf("shipping_courier_dto :\n%s\n", cJSON_Print(jsonshipping_courier_dto_1));
	shipping_courier_dto_t* shipping_courier_dto_2 = shipping_courier_dto_parseFromJSON(jsonshipping_courier_dto_1);
	cJSON* jsonshipping_courier_dto_2 = shipping_courier_dto_convertToJSON(shipping_courier_dto_2);
	printf("repeating shipping_courier_dto:\n%s\n", cJSON_Print(jsonshipping_courier_dto_2));
}

int main() {
  test_shipping_courier_dto(1);
  test_shipping_courier_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_courier_dto_MAIN
#endif // shipping_courier_dto_TEST
