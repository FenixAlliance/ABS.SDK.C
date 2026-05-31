#ifndef payment_chargeback_dto_TEST
#define payment_chargeback_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_chargeback_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_chargeback_dto.h"
payment_chargeback_dto_t* instantiate_payment_chargeback_dto(int include_optional);



payment_chargeback_dto_t* instantiate_payment_chargeback_dto(int include_optional) {
  payment_chargeback_dto_t* payment_chargeback_dto = NULL;
  if (include_optional) {
    payment_chargeback_dto = payment_chargeback_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1.337
    );
  } else {
    payment_chargeback_dto = payment_chargeback_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1.337
    );
  }

  return payment_chargeback_dto;
}


#ifdef payment_chargeback_dto_MAIN

void test_payment_chargeback_dto(int include_optional) {
    payment_chargeback_dto_t* payment_chargeback_dto_1 = instantiate_payment_chargeback_dto(include_optional);

	cJSON* jsonpayment_chargeback_dto_1 = payment_chargeback_dto_convertToJSON(payment_chargeback_dto_1);
	printf("payment_chargeback_dto :\n%s\n", cJSON_Print(jsonpayment_chargeback_dto_1));
	payment_chargeback_dto_t* payment_chargeback_dto_2 = payment_chargeback_dto_parseFromJSON(jsonpayment_chargeback_dto_1);
	cJSON* jsonpayment_chargeback_dto_2 = payment_chargeback_dto_convertToJSON(payment_chargeback_dto_2);
	printf("repeating payment_chargeback_dto:\n%s\n", cJSON_Print(jsonpayment_chargeback_dto_2));
}

int main() {
  test_payment_chargeback_dto(1);
  test_payment_chargeback_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_chargeback_dto_MAIN
#endif // payment_chargeback_dto_TEST
