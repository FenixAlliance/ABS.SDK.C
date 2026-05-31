#ifndef payroll_dto_TEST
#define payroll_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payroll_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payroll_dto.h"
payroll_dto_t* instantiate_payroll_dto(int include_optional);



payroll_dto_t* instantiate_payroll_dto(int include_optional) {
  payroll_dto_t* payroll_dto = NULL;
  if (include_optional) {
    payroll_dto = payroll_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    payroll_dto = payroll_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return payroll_dto;
}


#ifdef payroll_dto_MAIN

void test_payroll_dto(int include_optional) {
    payroll_dto_t* payroll_dto_1 = instantiate_payroll_dto(include_optional);

	cJSON* jsonpayroll_dto_1 = payroll_dto_convertToJSON(payroll_dto_1);
	printf("payroll_dto :\n%s\n", cJSON_Print(jsonpayroll_dto_1));
	payroll_dto_t* payroll_dto_2 = payroll_dto_parseFromJSON(jsonpayroll_dto_1);
	cJSON* jsonpayroll_dto_2 = payroll_dto_convertToJSON(payroll_dto_2);
	printf("repeating payroll_dto:\n%s\n", cJSON_Print(jsonpayroll_dto_2));
}

int main() {
  test_payroll_dto(1);
  test_payroll_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payroll_dto_MAIN
#endif // payroll_dto_TEST
