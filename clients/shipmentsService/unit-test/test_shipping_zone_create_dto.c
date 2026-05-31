#ifndef shipping_zone_create_dto_TEST
#define shipping_zone_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_zone_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_zone_create_dto.h"
shipping_zone_create_dto_t* instantiate_shipping_zone_create_dto(int include_optional);



shipping_zone_create_dto_t* instantiate_shipping_zone_create_dto(int include_optional) {
  shipping_zone_create_dto_t* shipping_zone_create_dto = NULL;
  if (include_optional) {
    shipping_zone_create_dto = shipping_zone_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "0",
      "0"
    );
  } else {
    shipping_zone_create_dto = shipping_zone_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "0",
      "0"
    );
  }

  return shipping_zone_create_dto;
}


#ifdef shipping_zone_create_dto_MAIN

void test_shipping_zone_create_dto(int include_optional) {
    shipping_zone_create_dto_t* shipping_zone_create_dto_1 = instantiate_shipping_zone_create_dto(include_optional);

	cJSON* jsonshipping_zone_create_dto_1 = shipping_zone_create_dto_convertToJSON(shipping_zone_create_dto_1);
	printf("shipping_zone_create_dto :\n%s\n", cJSON_Print(jsonshipping_zone_create_dto_1));
	shipping_zone_create_dto_t* shipping_zone_create_dto_2 = shipping_zone_create_dto_parseFromJSON(jsonshipping_zone_create_dto_1);
	cJSON* jsonshipping_zone_create_dto_2 = shipping_zone_create_dto_convertToJSON(shipping_zone_create_dto_2);
	printf("repeating shipping_zone_create_dto:\n%s\n", cJSON_Print(jsonshipping_zone_create_dto_2));
}

int main() {
  test_shipping_zone_create_dto(1);
  test_shipping_zone_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_zone_create_dto_MAIN
#endif // shipping_zone_create_dto_TEST
