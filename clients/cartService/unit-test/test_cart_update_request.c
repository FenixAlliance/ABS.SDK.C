#ifndef cart_update_request_TEST
#define cart_update_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_update_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_update_request.h"
cart_update_request_t* instantiate_cart_update_request(int include_optional);



cart_update_request_t* instantiate_cart_update_request(int include_optional) {
  cart_update_request_t* cart_update_request = NULL;
  if (include_optional) {
    cart_update_request = cart_update_request_create(
      "0",
      "0"
    );
  } else {
    cart_update_request = cart_update_request_create(
      "0",
      "0"
    );
  }

  return cart_update_request;
}


#ifdef cart_update_request_MAIN

void test_cart_update_request(int include_optional) {
    cart_update_request_t* cart_update_request_1 = instantiate_cart_update_request(include_optional);

	cJSON* jsoncart_update_request_1 = cart_update_request_convertToJSON(cart_update_request_1);
	printf("cart_update_request :\n%s\n", cJSON_Print(jsoncart_update_request_1));
	cart_update_request_t* cart_update_request_2 = cart_update_request_parseFromJSON(jsoncart_update_request_1);
	cJSON* jsoncart_update_request_2 = cart_update_request_convertToJSON(cart_update_request_2);
	printf("repeating cart_update_request:\n%s\n", cJSON_Print(jsoncart_update_request_2));
}

int main() {
  test_cart_update_request(1);
  test_cart_update_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_update_request_MAIN
#endif // cart_update_request_TEST
