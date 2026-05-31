#ifndef payroll_period_dto_TEST
#define payroll_period_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payroll_period_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payroll_period_dto.h"
payroll_period_dto_t* instantiate_payroll_period_dto(int include_optional);



payroll_period_dto_t* instantiate_payroll_period_dto(int include_optional) {
  payroll_period_dto_t* payroll_period_dto = NULL;
  if (include_optional) {
    payroll_period_dto = payroll_period_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    payroll_period_dto = payroll_period_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return payroll_period_dto;
}


#ifdef payroll_period_dto_MAIN

void test_payroll_period_dto(int include_optional) {
    payroll_period_dto_t* payroll_period_dto_1 = instantiate_payroll_period_dto(include_optional);

	cJSON* jsonpayroll_period_dto_1 = payroll_period_dto_convertToJSON(payroll_period_dto_1);
	printf("payroll_period_dto :\n%s\n", cJSON_Print(jsonpayroll_period_dto_1));
	payroll_period_dto_t* payroll_period_dto_2 = payroll_period_dto_parseFromJSON(jsonpayroll_period_dto_1);
	cJSON* jsonpayroll_period_dto_2 = payroll_period_dto_convertToJSON(payroll_period_dto_2);
	printf("repeating payroll_period_dto:\n%s\n", cJSON_Print(jsonpayroll_period_dto_2));
}

int main() {
  test_payroll_period_dto(1);
  test_payroll_period_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payroll_period_dto_MAIN
#endif // payroll_period_dto_TEST
