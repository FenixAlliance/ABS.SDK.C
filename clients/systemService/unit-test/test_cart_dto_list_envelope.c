#ifndef cart_dto_list_envelope_TEST
#define cart_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_dto_list_envelope.h"
cart_dto_list_envelope_t* instantiate_cart_dto_list_envelope(int include_optional);



cart_dto_list_envelope_t* instantiate_cart_dto_list_envelope(int include_optional) {
  cart_dto_list_envelope_t* cart_dto_list_envelope = NULL;
  if (include_optional) {
    cart_dto_list_envelope = cart_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    cart_dto_list_envelope = cart_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return cart_dto_list_envelope;
}


#ifdef cart_dto_list_envelope_MAIN

void test_cart_dto_list_envelope(int include_optional) {
    cart_dto_list_envelope_t* cart_dto_list_envelope_1 = instantiate_cart_dto_list_envelope(include_optional);

	cJSON* jsoncart_dto_list_envelope_1 = cart_dto_list_envelope_convertToJSON(cart_dto_list_envelope_1);
	printf("cart_dto_list_envelope :\n%s\n", cJSON_Print(jsoncart_dto_list_envelope_1));
	cart_dto_list_envelope_t* cart_dto_list_envelope_2 = cart_dto_list_envelope_parseFromJSON(jsoncart_dto_list_envelope_1);
	cJSON* jsoncart_dto_list_envelope_2 = cart_dto_list_envelope_convertToJSON(cart_dto_list_envelope_2);
	printf("repeating cart_dto_list_envelope:\n%s\n", cJSON_Print(jsoncart_dto_list_envelope_2));
}

int main() {
  test_cart_dto_list_envelope(1);
  test_cart_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_dto_list_envelope_MAIN
#endif // cart_dto_list_envelope_TEST
