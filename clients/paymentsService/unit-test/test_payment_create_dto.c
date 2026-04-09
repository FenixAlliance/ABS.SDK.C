#ifndef payment_create_dto_TEST
#define payment_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_create_dto.h"
payment_create_dto_t* instantiate_payment_create_dto(int include_optional);



payment_create_dto_t* instantiate_payment_create_dto(int include_optional) {
  payment_create_dto_t* payment_create_dto = NULL;
  if (include_optional) {
    payment_create_dto = payment_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      paymentsservice_payment_create_dto_ONBEHALFOF_Self,
      paymentsservice_payment_create_dto_PAYMENTTYPE_Paid,
      paymentsservice_payment_create_dto_PAYMENTSTATUS_Unset,
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
      "0",
      "0",
      "0"
    );
  } else {
    payment_create_dto = payment_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      paymentsservice_payment_create_dto_ONBEHALFOF_Self,
      paymentsservice_payment_create_dto_PAYMENTTYPE_Paid,
      paymentsservice_payment_create_dto_PAYMENTSTATUS_Unset,
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
      "0",
      "0",
      "0"
    );
  }

  return payment_create_dto;
}


#ifdef payment_create_dto_MAIN

void test_payment_create_dto(int include_optional) {
    payment_create_dto_t* payment_create_dto_1 = instantiate_payment_create_dto(include_optional);

	cJSON* jsonpayment_create_dto_1 = payment_create_dto_convertToJSON(payment_create_dto_1);
	printf("payment_create_dto :\n%s\n", cJSON_Print(jsonpayment_create_dto_1));
	payment_create_dto_t* payment_create_dto_2 = payment_create_dto_parseFromJSON(jsonpayment_create_dto_1);
	cJSON* jsonpayment_create_dto_2 = payment_create_dto_convertToJSON(payment_create_dto_2);
	printf("repeating payment_create_dto:\n%s\n", cJSON_Print(jsonpayment_create_dto_2));
}

int main() {
  test_payment_create_dto(1);
  test_payment_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_create_dto_MAIN
#endif // payment_create_dto_TEST
