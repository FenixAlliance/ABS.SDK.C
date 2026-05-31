#ifndef shipping_label_dto_list_envelope_TEST
#define shipping_label_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipping_label_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipping_label_dto_list_envelope.h"
shipping_label_dto_list_envelope_t* instantiate_shipping_label_dto_list_envelope(int include_optional);



shipping_label_dto_list_envelope_t* instantiate_shipping_label_dto_list_envelope(int include_optional) {
  shipping_label_dto_list_envelope_t* shipping_label_dto_list_envelope = NULL;
  if (include_optional) {
    shipping_label_dto_list_envelope = shipping_label_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    shipping_label_dto_list_envelope = shipping_label_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return shipping_label_dto_list_envelope;
}


#ifdef shipping_label_dto_list_envelope_MAIN

void test_shipping_label_dto_list_envelope(int include_optional) {
    shipping_label_dto_list_envelope_t* shipping_label_dto_list_envelope_1 = instantiate_shipping_label_dto_list_envelope(include_optional);

	cJSON* jsonshipping_label_dto_list_envelope_1 = shipping_label_dto_list_envelope_convertToJSON(shipping_label_dto_list_envelope_1);
	printf("shipping_label_dto_list_envelope :\n%s\n", cJSON_Print(jsonshipping_label_dto_list_envelope_1));
	shipping_label_dto_list_envelope_t* shipping_label_dto_list_envelope_2 = shipping_label_dto_list_envelope_parseFromJSON(jsonshipping_label_dto_list_envelope_1);
	cJSON* jsonshipping_label_dto_list_envelope_2 = shipping_label_dto_list_envelope_convertToJSON(shipping_label_dto_list_envelope_2);
	printf("repeating shipping_label_dto_list_envelope:\n%s\n", cJSON_Print(jsonshipping_label_dto_list_envelope_2));
}

int main() {
  test_shipping_label_dto_list_envelope(1);
  test_shipping_label_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipping_label_dto_list_envelope_MAIN
#endif // shipping_label_dto_list_envelope_TEST
