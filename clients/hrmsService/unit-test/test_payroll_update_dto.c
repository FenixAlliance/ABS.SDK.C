#ifndef payroll_update_dto_TEST
#define payroll_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payroll_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payroll_update_dto.h"
payroll_update_dto_t* instantiate_payroll_update_dto(int include_optional);



payroll_update_dto_t* instantiate_payroll_update_dto(int include_optional) {
  payroll_update_dto_t* payroll_update_dto = NULL;
  if (include_optional) {
    payroll_update_dto = payroll_update_dto_create(
      "0"
    );
  } else {
    payroll_update_dto = payroll_update_dto_create(
      "0"
    );
  }

  return payroll_update_dto;
}


#ifdef payroll_update_dto_MAIN

void test_payroll_update_dto(int include_optional) {
    payroll_update_dto_t* payroll_update_dto_1 = instantiate_payroll_update_dto(include_optional);

	cJSON* jsonpayroll_update_dto_1 = payroll_update_dto_convertToJSON(payroll_update_dto_1);
	printf("payroll_update_dto :\n%s\n", cJSON_Print(jsonpayroll_update_dto_1));
	payroll_update_dto_t* payroll_update_dto_2 = payroll_update_dto_parseFromJSON(jsonpayroll_update_dto_1);
	cJSON* jsonpayroll_update_dto_2 = payroll_update_dto_convertToJSON(payroll_update_dto_2);
	printf("repeating payroll_update_dto:\n%s\n", cJSON_Print(jsonpayroll_update_dto_2));
}

int main() {
  test_payroll_update_dto(1);
  test_payroll_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payroll_update_dto_MAIN
#endif // payroll_update_dto_TEST
