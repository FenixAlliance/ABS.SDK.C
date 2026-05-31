#ifndef payroll_create_dto_TEST
#define payroll_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payroll_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payroll_create_dto.h"
payroll_create_dto_t* instantiate_payroll_create_dto(int include_optional);



payroll_create_dto_t* instantiate_payroll_create_dto(int include_optional) {
  payroll_create_dto_t* payroll_create_dto = NULL;
  if (include_optional) {
    payroll_create_dto = payroll_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    payroll_create_dto = payroll_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return payroll_create_dto;
}


#ifdef payroll_create_dto_MAIN

void test_payroll_create_dto(int include_optional) {
    payroll_create_dto_t* payroll_create_dto_1 = instantiate_payroll_create_dto(include_optional);

	cJSON* jsonpayroll_create_dto_1 = payroll_create_dto_convertToJSON(payroll_create_dto_1);
	printf("payroll_create_dto :\n%s\n", cJSON_Print(jsonpayroll_create_dto_1));
	payroll_create_dto_t* payroll_create_dto_2 = payroll_create_dto_parseFromJSON(jsonpayroll_create_dto_1);
	cJSON* jsonpayroll_create_dto_2 = payroll_create_dto_convertToJSON(payroll_create_dto_2);
	printf("repeating payroll_create_dto:\n%s\n", cJSON_Print(jsonpayroll_create_dto_2));
}

int main() {
  test_payroll_create_dto(1);
  test_payroll_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payroll_create_dto_MAIN
#endif // payroll_create_dto_TEST
