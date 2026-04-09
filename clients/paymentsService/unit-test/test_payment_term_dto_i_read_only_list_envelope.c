#ifndef payment_term_dto_i_read_only_list_envelope_TEST
#define payment_term_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_term_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_term_dto_i_read_only_list_envelope.h"
payment_term_dto_i_read_only_list_envelope_t* instantiate_payment_term_dto_i_read_only_list_envelope(int include_optional);



payment_term_dto_i_read_only_list_envelope_t* instantiate_payment_term_dto_i_read_only_list_envelope(int include_optional) {
  payment_term_dto_i_read_only_list_envelope_t* payment_term_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    payment_term_dto_i_read_only_list_envelope = payment_term_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    payment_term_dto_i_read_only_list_envelope = payment_term_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return payment_term_dto_i_read_only_list_envelope;
}


#ifdef payment_term_dto_i_read_only_list_envelope_MAIN

void test_payment_term_dto_i_read_only_list_envelope(int include_optional) {
    payment_term_dto_i_read_only_list_envelope_t* payment_term_dto_i_read_only_list_envelope_1 = instantiate_payment_term_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonpayment_term_dto_i_read_only_list_envelope_1 = payment_term_dto_i_read_only_list_envelope_convertToJSON(payment_term_dto_i_read_only_list_envelope_1);
	printf("payment_term_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonpayment_term_dto_i_read_only_list_envelope_1));
	payment_term_dto_i_read_only_list_envelope_t* payment_term_dto_i_read_only_list_envelope_2 = payment_term_dto_i_read_only_list_envelope_parseFromJSON(jsonpayment_term_dto_i_read_only_list_envelope_1);
	cJSON* jsonpayment_term_dto_i_read_only_list_envelope_2 = payment_term_dto_i_read_only_list_envelope_convertToJSON(payment_term_dto_i_read_only_list_envelope_2);
	printf("repeating payment_term_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonpayment_term_dto_i_read_only_list_envelope_2));
}

int main() {
  test_payment_term_dto_i_read_only_list_envelope(1);
  test_payment_term_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_term_dto_i_read_only_list_envelope_MAIN
#endif // payment_term_dto_i_read_only_list_envelope_TEST
