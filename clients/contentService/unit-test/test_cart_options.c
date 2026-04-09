#ifndef cart_options_TEST
#define cart_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_options.h"
cart_options_t* instantiate_cart_options(int include_optional);



cart_options_t* instantiate_cart_options(int include_optional) {
  cart_options_t* cart_options = NULL;
  if (include_optional) {
    cart_options = cart_options_create(
      1,
      "0",
      1
    );
  } else {
    cart_options = cart_options_create(
      1,
      "0",
      1
    );
  }

  return cart_options;
}


#ifdef cart_options_MAIN

void test_cart_options(int include_optional) {
    cart_options_t* cart_options_1 = instantiate_cart_options(include_optional);

	cJSON* jsoncart_options_1 = cart_options_convertToJSON(cart_options_1);
	printf("cart_options :\n%s\n", cJSON_Print(jsoncart_options_1));
	cart_options_t* cart_options_2 = cart_options_parseFromJSON(jsoncart_options_1);
	cJSON* jsoncart_options_2 = cart_options_convertToJSON(cart_options_2);
	printf("repeating cart_options:\n%s\n", cJSON_Print(jsoncart_options_2));
}

int main() {
  test_cart_options(1);
  test_cart_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_options_MAIN
#endif // cart_options_TEST
