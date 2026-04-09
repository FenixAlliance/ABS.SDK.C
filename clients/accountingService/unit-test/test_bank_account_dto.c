#ifndef bank_account_dto_TEST
#define bank_account_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_account_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_account_dto.h"
bank_account_dto_t* instantiate_bank_account_dto(int include_optional);

#include "test_money.c"
#include "test_money.c"
#include "test_money.c"


bank_account_dto_t* instantiate_bank_account_dto(int include_optional) {
  bank_account_dto_t* bank_account_dto = NULL;
  if (include_optional) {
    bank_account_dto = bank_account_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      56,
      accountingservice_bank_account_dto_ACCOUNTCATEGORY_Assets,
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    bank_account_dto = bank_account_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      56,
      accountingservice_bank_account_dto_ACCOUNTCATEGORY_Assets,
      NULL,
      NULL,
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return bank_account_dto;
}


#ifdef bank_account_dto_MAIN

void test_bank_account_dto(int include_optional) {
    bank_account_dto_t* bank_account_dto_1 = instantiate_bank_account_dto(include_optional);

	cJSON* jsonbank_account_dto_1 = bank_account_dto_convertToJSON(bank_account_dto_1);
	printf("bank_account_dto :\n%s\n", cJSON_Print(jsonbank_account_dto_1));
	bank_account_dto_t* bank_account_dto_2 = bank_account_dto_parseFromJSON(jsonbank_account_dto_1);
	cJSON* jsonbank_account_dto_2 = bank_account_dto_convertToJSON(bank_account_dto_2);
	printf("repeating bank_account_dto:\n%s\n", cJSON_Print(jsonbank_account_dto_2));
}

int main() {
  test_bank_account_dto(1);
  test_bank_account_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_account_dto_MAIN
#endif // bank_account_dto_TEST
