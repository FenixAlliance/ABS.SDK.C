#ifndef payroll_dto_list_envelope_TEST
#define payroll_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payroll_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payroll_dto_list_envelope.h"
payroll_dto_list_envelope_t* instantiate_payroll_dto_list_envelope(int include_optional);



payroll_dto_list_envelope_t* instantiate_payroll_dto_list_envelope(int include_optional) {
  payroll_dto_list_envelope_t* payroll_dto_list_envelope = NULL;
  if (include_optional) {
    payroll_dto_list_envelope = payroll_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    payroll_dto_list_envelope = payroll_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return payroll_dto_list_envelope;
}


#ifdef payroll_dto_list_envelope_MAIN

void test_payroll_dto_list_envelope(int include_optional) {
    payroll_dto_list_envelope_t* payroll_dto_list_envelope_1 = instantiate_payroll_dto_list_envelope(include_optional);

	cJSON* jsonpayroll_dto_list_envelope_1 = payroll_dto_list_envelope_convertToJSON(payroll_dto_list_envelope_1);
	printf("payroll_dto_list_envelope :\n%s\n", cJSON_Print(jsonpayroll_dto_list_envelope_1));
	payroll_dto_list_envelope_t* payroll_dto_list_envelope_2 = payroll_dto_list_envelope_parseFromJSON(jsonpayroll_dto_list_envelope_1);
	cJSON* jsonpayroll_dto_list_envelope_2 = payroll_dto_list_envelope_convertToJSON(payroll_dto_list_envelope_2);
	printf("repeating payroll_dto_list_envelope:\n%s\n", cJSON_Print(jsonpayroll_dto_list_envelope_2));
}

int main() {
  test_payroll_dto_list_envelope(1);
  test_payroll_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // payroll_dto_list_envelope_MAIN
#endif // payroll_dto_list_envelope_TEST
