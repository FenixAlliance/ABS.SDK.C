#ifndef payment_response_TEST
#define payment_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_response.h"
payment_response_t* instantiate_payment_response(int include_optional);



payment_response_t* instantiate_payment_response(int include_optional) {
  payment_response_t* payment_response = NULL;
  if (include_optional) {
    payment_response = payment_response_create(
      1,
      "0",
      "0",
      "0",
      null,
      "0",
      "0",
      "0",
      "0",
      "0",
      globeservice_payment_response_PAYMENTSTATUS_Unset
    );
  } else {
    payment_response = payment_response_create(
      1,
      "0",
      "0",
      "0",
      null,
      "0",
      "0",
      "0",
      "0",
      "0",
      globeservice_payment_response_PAYMENTSTATUS_Unset
    );
  }

  return payment_response;
}


#ifdef payment_response_MAIN

void test_payment_response(int include_optional) {
    payment_response_t* payment_response_1 = instantiate_payment_response(include_optional);

	cJSON* jsonpayment_response_1 = payment_response_convertToJSON(payment_response_1);
	printf("payment_response :\n%s\n", cJSON_Print(jsonpayment_response_1));
	payment_response_t* payment_response_2 = payment_response_parseFromJSON(jsonpayment_response_1);
	cJSON* jsonpayment_response_2 = payment_response_convertToJSON(payment_response_2);
	printf("repeating payment_response:\n%s\n", cJSON_Print(jsonpayment_response_2));
}

int main() {
  test_payment_response(1);
  test_payment_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_response_MAIN
#endif // payment_response_TEST
