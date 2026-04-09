#ifndef product_to_wish_list_request_TEST
#define product_to_wish_list_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_to_wish_list_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_to_wish_list_request.h"
product_to_wish_list_request_t* instantiate_product_to_wish_list_request(int include_optional);



product_to_wish_list_request_t* instantiate_product_to_wish_list_request(int include_optional) {
  product_to_wish_list_request_t* product_to_wish_list_request = NULL;
  if (include_optional) {
    product_to_wish_list_request = product_to_wish_list_request_create(
      "0",
      "0"
    );
  } else {
    product_to_wish_list_request = product_to_wish_list_request_create(
      "0",
      "0"
    );
  }

  return product_to_wish_list_request;
}


#ifdef product_to_wish_list_request_MAIN

void test_product_to_wish_list_request(int include_optional) {
    product_to_wish_list_request_t* product_to_wish_list_request_1 = instantiate_product_to_wish_list_request(include_optional);

	cJSON* jsonproduct_to_wish_list_request_1 = product_to_wish_list_request_convertToJSON(product_to_wish_list_request_1);
	printf("product_to_wish_list_request :\n%s\n", cJSON_Print(jsonproduct_to_wish_list_request_1));
	product_to_wish_list_request_t* product_to_wish_list_request_2 = product_to_wish_list_request_parseFromJSON(jsonproduct_to_wish_list_request_1);
	cJSON* jsonproduct_to_wish_list_request_2 = product_to_wish_list_request_convertToJSON(product_to_wish_list_request_2);
	printf("repeating product_to_wish_list_request:\n%s\n", cJSON_Print(jsonproduct_to_wish_list_request_2));
}

int main() {
  test_product_to_wish_list_request(1);
  test_product_to_wish_list_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_to_wish_list_request_MAIN
#endif // product_to_wish_list_request_TEST
