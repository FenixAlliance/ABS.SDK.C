#ifndef payment_dto_TEST
#define payment_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_dto.h"
payment_dto_t* instantiate_payment_dto(int include_optional);



payment_dto_t* instantiate_payment_dto(int include_optional) {
  payment_dto_t* payment_dto = NULL;
  if (include_optional) {
    payment_dto = payment_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      invoicingservice_payment_dto_ONBEHALFOF_Self,
      invoicingservice_payment_dto_PAYMENTTYPE_Paid,
      invoicingservice_payment_dto_PAYMENTSTATUS_Unset,
      1.337,
      "0",
      1,
      1,
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
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
      "0",
      1,
      1,
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
      "0",
      "0"
    );
  } else {
    payment_dto = payment_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      invoicingservice_payment_dto_ONBEHALFOF_Self,
      invoicingservice_payment_dto_PAYMENTTYPE_Paid,
      invoicingservice_payment_dto_PAYMENTSTATUS_Unset,
      1.337,
      "0",
      1,
      1,
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
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
      "0",
      1,
      1,
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
      "0",
      "0"
    );
  }

  return payment_dto;
}


#ifdef payment_dto_MAIN

void test_payment_dto(int include_optional) {
    payment_dto_t* payment_dto_1 = instantiate_payment_dto(include_optional);

	cJSON* jsonpayment_dto_1 = payment_dto_convertToJSON(payment_dto_1);
	printf("payment_dto :\n%s\n", cJSON_Print(jsonpayment_dto_1));
	payment_dto_t* payment_dto_2 = payment_dto_parseFromJSON(jsonpayment_dto_1);
	cJSON* jsonpayment_dto_2 = payment_dto_convertToJSON(payment_dto_2);
	printf("repeating payment_dto:\n%s\n", cJSON_Print(jsonpayment_dto_2));
}

int main() {
  test_payment_dto(1);
  test_payment_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_dto_MAIN
#endif // payment_dto_TEST
