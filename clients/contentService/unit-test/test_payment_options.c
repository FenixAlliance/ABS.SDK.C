#ifndef payment_options_TEST
#define payment_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_options.h"
payment_options_t* instantiate_payment_options(int include_optional);



payment_options_t* instantiate_payment_options(int include_optional) {
  payment_options_t* payment_options = NULL;
  if (include_optional) {
    payment_options = payment_options_create(
      list_createList()
    );
  } else {
    payment_options = payment_options_create(
      list_createList()
    );
  }

  return payment_options;
}


#ifdef payment_options_MAIN

void test_payment_options(int include_optional) {
    payment_options_t* payment_options_1 = instantiate_payment_options(include_optional);

	cJSON* jsonpayment_options_1 = payment_options_convertToJSON(payment_options_1);
	printf("payment_options :\n%s\n", cJSON_Print(jsonpayment_options_1));
	payment_options_t* payment_options_2 = payment_options_parseFromJSON(jsonpayment_options_1);
	cJSON* jsonpayment_options_2 = payment_options_convertToJSON(payment_options_2);
	printf("repeating payment_options:\n%s\n", cJSON_Print(jsonpayment_options_2));
}

int main() {
  test_payment_options(1);
  test_payment_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_options_MAIN
#endif // payment_options_TEST
