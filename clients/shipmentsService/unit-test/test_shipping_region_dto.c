#ifndef shipping_region_dto_TEST
#define shipping_region_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_region_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_region_dto.h"
shipping_region_dto_t* instantiate_shipping_region_dto(int include_optional);



shipping_region_dto_t* instantiate_shipping_region_dto(int include_optional) {
  shipping_region_dto_t* shipping_region_dto = NULL;
  if (include_optional) {
    shipping_region_dto = shipping_region_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    shipping_region_dto = shipping_region_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return shipping_region_dto;
}


#ifdef shipping_region_dto_MAIN

void test_shipping_region_dto(int include_optional) {
    shipping_region_dto_t* shipping_region_dto_1 = instantiate_shipping_region_dto(include_optional);

	cJSON* jsonshipping_region_dto_1 = shipping_region_dto_convertToJSON(shipping_region_dto_1);
	printf("shipping_region_dto :\n%s\n", cJSON_Print(jsonshipping_region_dto_1));
	shipping_region_dto_t* shipping_region_dto_2 = shipping_region_dto_parseFromJSON(jsonshipping_region_dto_1);
	cJSON* jsonshipping_region_dto_2 = shipping_region_dto_convertToJSON(shipping_region_dto_2);
	printf("repeating shipping_region_dto:\n%s\n", cJSON_Print(jsonshipping_region_dto_2));
}

int main() {
  test_shipping_region_dto(1);
  test_shipping_region_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_region_dto_MAIN
#endif // shipping_region_dto_TEST
