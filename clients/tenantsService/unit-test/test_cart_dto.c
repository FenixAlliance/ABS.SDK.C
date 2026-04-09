#ifndef cart_dto_TEST
#define cart_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_dto.h"
cart_dto_t* instantiate_cart_dto(int include_optional);



cart_dto_t* instantiate_cart_dto(int include_optional) {
  cart_dto_t* cart_dto = NULL;
  if (include_optional) {
    cart_dto = cart_dto_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      56,
      56
    );
  } else {
    cart_dto = cart_dto_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      56,
      56
    );
  }

  return cart_dto;
}


#ifdef cart_dto_MAIN

void test_cart_dto(int include_optional) {
    cart_dto_t* cart_dto_1 = instantiate_cart_dto(include_optional);

	cJSON* jsoncart_dto_1 = cart_dto_convertToJSON(cart_dto_1);
	printf("cart_dto :\n%s\n", cJSON_Print(jsoncart_dto_1));
	cart_dto_t* cart_dto_2 = cart_dto_parseFromJSON(jsoncart_dto_1);
	cJSON* jsoncart_dto_2 = cart_dto_convertToJSON(cart_dto_2);
	printf("repeating cart_dto:\n%s\n", cJSON_Print(jsoncart_dto_2));
}

int main() {
  test_cart_dto(1);
  test_cart_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_dto_MAIN
#endif // cart_dto_TEST
