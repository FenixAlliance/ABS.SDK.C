#ifndef payment_commission_create_dto_TEST
#define payment_commission_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_commission_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_commission_create_dto.h"
payment_commission_create_dto_t* instantiate_payment_commission_create_dto(int include_optional);



payment_commission_create_dto_t* instantiate_payment_commission_create_dto(int include_optional) {
  payment_commission_create_dto_t* payment_commission_create_dto = NULL;
  if (include_optional) {
    payment_commission_create_dto = payment_commission_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    payment_commission_create_dto = payment_commission_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return payment_commission_create_dto;
}


#ifdef payment_commission_create_dto_MAIN

void test_payment_commission_create_dto(int include_optional) {
    payment_commission_create_dto_t* payment_commission_create_dto_1 = instantiate_payment_commission_create_dto(include_optional);

	cJSON* jsonpayment_commission_create_dto_1 = payment_commission_create_dto_convertToJSON(payment_commission_create_dto_1);
	printf("payment_commission_create_dto :\n%s\n", cJSON_Print(jsonpayment_commission_create_dto_1));
	payment_commission_create_dto_t* payment_commission_create_dto_2 = payment_commission_create_dto_parseFromJSON(jsonpayment_commission_create_dto_1);
	cJSON* jsonpayment_commission_create_dto_2 = payment_commission_create_dto_convertToJSON(payment_commission_create_dto_2);
	printf("repeating payment_commission_create_dto:\n%s\n", cJSON_Print(jsonpayment_commission_create_dto_2));
}

int main() {
  test_payment_commission_create_dto(1);
  test_payment_commission_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_commission_create_dto_MAIN
#endif // payment_commission_create_dto_TEST
