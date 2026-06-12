#ifndef bulk_product_TEST
#define bulk_product_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bulk_product_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bulk_product.h"
bulk_product_t* instantiate_bulk_product(int include_optional);



bulk_product_t* instantiate_bulk_product(int include_optional) {
  bulk_product_t* bulk_product = NULL;
  if (include_optional) {
    bulk_product = bulk_product_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    bulk_product = bulk_product_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return bulk_product;
}


#ifdef bulk_product_MAIN

void test_bulk_product(int include_optional) {
    bulk_product_t* bulk_product_1 = instantiate_bulk_product(include_optional);

	cJSON* jsonbulk_product_1 = bulk_product_convertToJSON(bulk_product_1);
	printf("bulk_product :\n%s\n", cJSON_Print(jsonbulk_product_1));
	bulk_product_t* bulk_product_2 = bulk_product_parseFromJSON(jsonbulk_product_1);
	cJSON* jsonbulk_product_2 = bulk_product_convertToJSON(bulk_product_2);
	printf("repeating bulk_product:\n%s\n", cJSON_Print(jsonbulk_product_2));
}

int main() {
  test_bulk_product(1);
  test_bulk_product(0);

  printf("Hello world \n");
  return 0;
}

#endif // bulk_product_MAIN
#endif // bulk_product_TEST
