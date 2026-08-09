#ifndef cart_dto_collection_query_parameters_TEST
#define cart_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_dto_collection_query_parameters.h"
cart_dto_collection_query_parameters_t* instantiate_cart_dto_collection_query_parameters(int include_optional);



cart_dto_collection_query_parameters_t* instantiate_cart_dto_collection_query_parameters(int include_optional) {
  cart_dto_collection_query_parameters_t* cart_dto_collection_query_parameters = NULL;
  if (include_optional) {
    cart_dto_collection_query_parameters = cart_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    cart_dto_collection_query_parameters = cart_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return cart_dto_collection_query_parameters;
}


#ifdef cart_dto_collection_query_parameters_MAIN

void test_cart_dto_collection_query_parameters(int include_optional) {
    cart_dto_collection_query_parameters_t* cart_dto_collection_query_parameters_1 = instantiate_cart_dto_collection_query_parameters(include_optional);

	cJSON* jsoncart_dto_collection_query_parameters_1 = cart_dto_collection_query_parameters_convertToJSON(cart_dto_collection_query_parameters_1);
	printf("cart_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncart_dto_collection_query_parameters_1));
	cart_dto_collection_query_parameters_t* cart_dto_collection_query_parameters_2 = cart_dto_collection_query_parameters_parseFromJSON(jsoncart_dto_collection_query_parameters_1);
	cJSON* jsoncart_dto_collection_query_parameters_2 = cart_dto_collection_query_parameters_convertToJSON(cart_dto_collection_query_parameters_2);
	printf("repeating cart_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncart_dto_collection_query_parameters_2));
}

int main() {
  test_cart_dto_collection_query_parameters(1);
  test_cart_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_dto_collection_query_parameters_MAIN
#endif // cart_dto_collection_query_parameters_TEST
