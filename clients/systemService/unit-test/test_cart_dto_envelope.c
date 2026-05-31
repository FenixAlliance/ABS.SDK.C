#ifndef cart_dto_envelope_TEST
#define cart_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_dto_envelope.h"
cart_dto_envelope_t* instantiate_cart_dto_envelope(int include_optional);

#include "test_cart_dto.c"


cart_dto_envelope_t* instantiate_cart_dto_envelope(int include_optional) {
  cart_dto_envelope_t* cart_dto_envelope = NULL;
  if (include_optional) {
    cart_dto_envelope = cart_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_cart_dto(0)
    );
  } else {
    cart_dto_envelope = cart_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return cart_dto_envelope;
}


#ifdef cart_dto_envelope_MAIN

void test_cart_dto_envelope(int include_optional) {
    cart_dto_envelope_t* cart_dto_envelope_1 = instantiate_cart_dto_envelope(include_optional);

	cJSON* jsoncart_dto_envelope_1 = cart_dto_envelope_convertToJSON(cart_dto_envelope_1);
	printf("cart_dto_envelope :\n%s\n", cJSON_Print(jsoncart_dto_envelope_1));
	cart_dto_envelope_t* cart_dto_envelope_2 = cart_dto_envelope_parseFromJSON(jsoncart_dto_envelope_1);
	cJSON* jsoncart_dto_envelope_2 = cart_dto_envelope_convertToJSON(cart_dto_envelope_2);
	printf("repeating cart_dto_envelope:\n%s\n", cJSON_Print(jsoncart_dto_envelope_2));
}

int main() {
  test_cart_dto_envelope(1);
  test_cart_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_dto_envelope_MAIN
#endif // cart_dto_envelope_TEST
