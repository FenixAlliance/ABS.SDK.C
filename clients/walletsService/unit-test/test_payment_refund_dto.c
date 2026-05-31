#ifndef payment_refund_dto_TEST
#define payment_refund_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_refund_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_refund_dto.h"
payment_refund_dto_t* instantiate_payment_refund_dto(int include_optional);



payment_refund_dto_t* instantiate_payment_refund_dto(int include_optional) {
  payment_refund_dto_t* payment_refund_dto = NULL;
  if (include_optional) {
    payment_refund_dto = payment_refund_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1.337
    );
  } else {
    payment_refund_dto = payment_refund_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1.337
    );
  }

  return payment_refund_dto;
}


#ifdef payment_refund_dto_MAIN

void test_payment_refund_dto(int include_optional) {
    payment_refund_dto_t* payment_refund_dto_1 = instantiate_payment_refund_dto(include_optional);

	cJSON* jsonpayment_refund_dto_1 = payment_refund_dto_convertToJSON(payment_refund_dto_1);
	printf("payment_refund_dto :\n%s\n", cJSON_Print(jsonpayment_refund_dto_1));
	payment_refund_dto_t* payment_refund_dto_2 = payment_refund_dto_parseFromJSON(jsonpayment_refund_dto_1);
	cJSON* jsonpayment_refund_dto_2 = payment_refund_dto_convertToJSON(payment_refund_dto_2);
	printf("repeating payment_refund_dto:\n%s\n", cJSON_Print(jsonpayment_refund_dto_2));
}

int main() {
  test_payment_refund_dto(1);
  test_payment_refund_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_refund_dto_MAIN
#endif // payment_refund_dto_TEST
