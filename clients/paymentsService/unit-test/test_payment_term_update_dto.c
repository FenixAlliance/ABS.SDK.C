#ifndef payment_term_update_dto_TEST
#define payment_term_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_term_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_term_update_dto.h"
payment_term_update_dto_t* instantiate_payment_term_update_dto(int include_optional);



payment_term_update_dto_t* instantiate_payment_term_update_dto(int include_optional) {
  payment_term_update_dto_t* payment_term_update_dto = NULL;
  if (include_optional) {
    payment_term_update_dto = payment_term_update_dto_create(
      "0",
      "0",
      1,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0"
    );
  } else {
    payment_term_update_dto = payment_term_update_dto_create(
      "0",
      "0",
      1,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0"
    );
  }

  return payment_term_update_dto;
}


#ifdef payment_term_update_dto_MAIN

void test_payment_term_update_dto(int include_optional) {
    payment_term_update_dto_t* payment_term_update_dto_1 = instantiate_payment_term_update_dto(include_optional);

	cJSON* jsonpayment_term_update_dto_1 = payment_term_update_dto_convertToJSON(payment_term_update_dto_1);
	printf("payment_term_update_dto :\n%s\n", cJSON_Print(jsonpayment_term_update_dto_1));
	payment_term_update_dto_t* payment_term_update_dto_2 = payment_term_update_dto_parseFromJSON(jsonpayment_term_update_dto_1);
	cJSON* jsonpayment_term_update_dto_2 = payment_term_update_dto_convertToJSON(payment_term_update_dto_2);
	printf("repeating payment_term_update_dto:\n%s\n", cJSON_Print(jsonpayment_term_update_dto_2));
}

int main() {
  test_payment_term_update_dto(1);
  test_payment_term_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_term_update_dto_MAIN
#endif // payment_term_update_dto_TEST
