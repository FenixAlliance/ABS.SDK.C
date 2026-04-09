#ifndef payment_commission_dto_envelope_TEST
#define payment_commission_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_commission_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_commission_dto_envelope.h"
payment_commission_dto_envelope_t* instantiate_payment_commission_dto_envelope(int include_optional);

#include "test_payment_commission_dto.c"


payment_commission_dto_envelope_t* instantiate_payment_commission_dto_envelope(int include_optional) {
  payment_commission_dto_envelope_t* payment_commission_dto_envelope = NULL;
  if (include_optional) {
    payment_commission_dto_envelope = payment_commission_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_payment_commission_dto(0)
    );
  } else {
    payment_commission_dto_envelope = payment_commission_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return payment_commission_dto_envelope;
}


#ifdef payment_commission_dto_envelope_MAIN

void test_payment_commission_dto_envelope(int include_optional) {
    payment_commission_dto_envelope_t* payment_commission_dto_envelope_1 = instantiate_payment_commission_dto_envelope(include_optional);

	cJSON* jsonpayment_commission_dto_envelope_1 = payment_commission_dto_envelope_convertToJSON(payment_commission_dto_envelope_1);
	printf("payment_commission_dto_envelope :\n%s\n", cJSON_Print(jsonpayment_commission_dto_envelope_1));
	payment_commission_dto_envelope_t* payment_commission_dto_envelope_2 = payment_commission_dto_envelope_parseFromJSON(jsonpayment_commission_dto_envelope_1);
	cJSON* jsonpayment_commission_dto_envelope_2 = payment_commission_dto_envelope_convertToJSON(payment_commission_dto_envelope_2);
	printf("repeating payment_commission_dto_envelope:\n%s\n", cJSON_Print(jsonpayment_commission_dto_envelope_2));
}

int main() {
  test_payment_commission_dto_envelope(1);
  test_payment_commission_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_commission_dto_envelope_MAIN
#endif // payment_commission_dto_envelope_TEST
