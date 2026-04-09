#ifndef add_product_to_compare_request_TEST
#define add_product_to_compare_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define add_product_to_compare_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/add_product_to_compare_request.h"
add_product_to_compare_request_t* instantiate_add_product_to_compare_request(int include_optional);



add_product_to_compare_request_t* instantiate_add_product_to_compare_request(int include_optional) {
  add_product_to_compare_request_t* add_product_to_compare_request = NULL;
  if (include_optional) {
    add_product_to_compare_request = add_product_to_compare_request_create(
      "0",
      "0",
      "0"
    );
  } else {
    add_product_to_compare_request = add_product_to_compare_request_create(
      "0",
      "0",
      "0"
    );
  }

  return add_product_to_compare_request;
}


#ifdef add_product_to_compare_request_MAIN

void test_add_product_to_compare_request(int include_optional) {
    add_product_to_compare_request_t* add_product_to_compare_request_1 = instantiate_add_product_to_compare_request(include_optional);

	cJSON* jsonadd_product_to_compare_request_1 = add_product_to_compare_request_convertToJSON(add_product_to_compare_request_1);
	printf("add_product_to_compare_request :\n%s\n", cJSON_Print(jsonadd_product_to_compare_request_1));
	add_product_to_compare_request_t* add_product_to_compare_request_2 = add_product_to_compare_request_parseFromJSON(jsonadd_product_to_compare_request_1);
	cJSON* jsonadd_product_to_compare_request_2 = add_product_to_compare_request_convertToJSON(add_product_to_compare_request_2);
	printf("repeating add_product_to_compare_request:\n%s\n", cJSON_Print(jsonadd_product_to_compare_request_2));
}

int main() {
  test_add_product_to_compare_request(1);
  test_add_product_to_compare_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // add_product_to_compare_request_MAIN
#endif // add_product_to_compare_request_TEST
