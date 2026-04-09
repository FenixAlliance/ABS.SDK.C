#ifndef bank_account_update_dto_TEST
#define bank_account_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_account_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_account_update_dto.h"
bank_account_update_dto_t* instantiate_bank_account_update_dto(int include_optional);



bank_account_update_dto_t* instantiate_bank_account_update_dto(int include_optional) {
  bank_account_update_dto_t* bank_account_update_dto = NULL;
  if (include_optional) {
    bank_account_update_dto = bank_account_update_dto_create(
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_bank_account_update_dto_ACCOUNTCATEGORY_Assets,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    bank_account_update_dto = bank_account_update_dto_create(
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_bank_account_update_dto_ACCOUNTCATEGORY_Assets,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return bank_account_update_dto;
}


#ifdef bank_account_update_dto_MAIN

void test_bank_account_update_dto(int include_optional) {
    bank_account_update_dto_t* bank_account_update_dto_1 = instantiate_bank_account_update_dto(include_optional);

	cJSON* jsonbank_account_update_dto_1 = bank_account_update_dto_convertToJSON(bank_account_update_dto_1);
	printf("bank_account_update_dto :\n%s\n", cJSON_Print(jsonbank_account_update_dto_1));
	bank_account_update_dto_t* bank_account_update_dto_2 = bank_account_update_dto_parseFromJSON(jsonbank_account_update_dto_1);
	cJSON* jsonbank_account_update_dto_2 = bank_account_update_dto_convertToJSON(bank_account_update_dto_2);
	printf("repeating bank_account_update_dto:\n%s\n", cJSON_Print(jsonbank_account_update_dto_2));
}

int main() {
  test_bank_account_update_dto(1);
  test_bank_account_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_account_update_dto_MAIN
#endif // bank_account_update_dto_TEST
