#ifndef shipping_region_dto_envelope_TEST
#define shipping_region_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_region_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_region_dto_envelope.h"
shipping_region_dto_envelope_t* instantiate_shipping_region_dto_envelope(int include_optional);

#include "test_shipping_region_dto.c"


shipping_region_dto_envelope_t* instantiate_shipping_region_dto_envelope(int include_optional) {
  shipping_region_dto_envelope_t* shipping_region_dto_envelope = NULL;
  if (include_optional) {
    shipping_region_dto_envelope = shipping_region_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_shipping_region_dto(0)
    );
  } else {
    shipping_region_dto_envelope = shipping_region_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return shipping_region_dto_envelope;
}


#ifdef shipping_region_dto_envelope_MAIN

void test_shipping_region_dto_envelope(int include_optional) {
    shipping_region_dto_envelope_t* shipping_region_dto_envelope_1 = instantiate_shipping_region_dto_envelope(include_optional);

	cJSON* jsonshipping_region_dto_envelope_1 = shipping_region_dto_envelope_convertToJSON(shipping_region_dto_envelope_1);
	printf("shipping_region_dto_envelope :\n%s\n", cJSON_Print(jsonshipping_region_dto_envelope_1));
	shipping_region_dto_envelope_t* shipping_region_dto_envelope_2 = shipping_region_dto_envelope_parseFromJSON(jsonshipping_region_dto_envelope_1);
	cJSON* jsonshipping_region_dto_envelope_2 = shipping_region_dto_envelope_convertToJSON(shipping_region_dto_envelope_2);
	printf("repeating shipping_region_dto_envelope:\n%s\n", cJSON_Print(jsonshipping_region_dto_envelope_2));
}

int main() {
  test_shipping_region_dto_envelope(1);
  test_shipping_region_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_region_dto_envelope_MAIN
#endif // shipping_region_dto_envelope_TEST
