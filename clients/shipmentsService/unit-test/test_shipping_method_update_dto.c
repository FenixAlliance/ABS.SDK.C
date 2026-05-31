#ifndef shipping_method_update_dto_TEST
#define shipping_method_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_method_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_method_update_dto.h"
shipping_method_update_dto_t* instantiate_shipping_method_update_dto(int include_optional);



shipping_method_update_dto_t* instantiate_shipping_method_update_dto(int include_optional) {
  shipping_method_update_dto_t* shipping_method_update_dto = NULL;
  if (include_optional) {
    shipping_method_update_dto = shipping_method_update_dto_create(
      "0",
      "0",
      1.337,
      1,
      1,
      "0",
      shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_PerClass
    );
  } else {
    shipping_method_update_dto = shipping_method_update_dto_create(
      "0",
      "0",
      1.337,
      1,
      1,
      "0",
      shipmentsservice_shipping_method_update_dto_SHIPPINGCLASSCALCULATIONTYPE_PerClass
    );
  }

  return shipping_method_update_dto;
}


#ifdef shipping_method_update_dto_MAIN

void test_shipping_method_update_dto(int include_optional) {
    shipping_method_update_dto_t* shipping_method_update_dto_1 = instantiate_shipping_method_update_dto(include_optional);

	cJSON* jsonshipping_method_update_dto_1 = shipping_method_update_dto_convertToJSON(shipping_method_update_dto_1);
	printf("shipping_method_update_dto :\n%s\n", cJSON_Print(jsonshipping_method_update_dto_1));
	shipping_method_update_dto_t* shipping_method_update_dto_2 = shipping_method_update_dto_parseFromJSON(jsonshipping_method_update_dto_1);
	cJSON* jsonshipping_method_update_dto_2 = shipping_method_update_dto_convertToJSON(shipping_method_update_dto_2);
	printf("repeating shipping_method_update_dto:\n%s\n", cJSON_Print(jsonshipping_method_update_dto_2));
}

int main() {
  test_shipping_method_update_dto(1);
  test_shipping_method_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_method_update_dto_MAIN
#endif // shipping_method_update_dto_TEST
