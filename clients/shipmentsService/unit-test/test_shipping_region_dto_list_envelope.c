#ifndef shipping_region_dto_list_envelope_TEST
#define shipping_region_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_region_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_region_dto_list_envelope.h"
shipping_region_dto_list_envelope_t* instantiate_shipping_region_dto_list_envelope(int include_optional);



shipping_region_dto_list_envelope_t* instantiate_shipping_region_dto_list_envelope(int include_optional) {
  shipping_region_dto_list_envelope_t* shipping_region_dto_list_envelope = NULL;
  if (include_optional) {
    shipping_region_dto_list_envelope = shipping_region_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    shipping_region_dto_list_envelope = shipping_region_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return shipping_region_dto_list_envelope;
}


#ifdef shipping_region_dto_list_envelope_MAIN

void test_shipping_region_dto_list_envelope(int include_optional) {
    shipping_region_dto_list_envelope_t* shipping_region_dto_list_envelope_1 = instantiate_shipping_region_dto_list_envelope(include_optional);

	cJSON* jsonshipping_region_dto_list_envelope_1 = shipping_region_dto_list_envelope_convertToJSON(shipping_region_dto_list_envelope_1);
	printf("shipping_region_dto_list_envelope :\n%s\n", cJSON_Print(jsonshipping_region_dto_list_envelope_1));
	shipping_region_dto_list_envelope_t* shipping_region_dto_list_envelope_2 = shipping_region_dto_list_envelope_parseFromJSON(jsonshipping_region_dto_list_envelope_1);
	cJSON* jsonshipping_region_dto_list_envelope_2 = shipping_region_dto_list_envelope_convertToJSON(shipping_region_dto_list_envelope_2);
	printf("repeating shipping_region_dto_list_envelope:\n%s\n", cJSON_Print(jsonshipping_region_dto_list_envelope_2));
}

int main() {
  test_shipping_region_dto_list_envelope(1);
  test_shipping_region_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_region_dto_list_envelope_MAIN
#endif // shipping_region_dto_list_envelope_TEST
