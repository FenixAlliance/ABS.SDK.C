#ifndef account_update_dto_TEST
#define account_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_update_dto.h"
account_update_dto_t* instantiate_account_update_dto(int include_optional);



account_update_dto_t* instantiate_account_update_dto(int include_optional) {
  account_update_dto_t* account_update_dto = NULL;
  if (include_optional) {
    account_update_dto = account_update_dto_create(
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_account_update_dto_ACCOUNTCATEGORY_Assets
    );
  } else {
    account_update_dto = account_update_dto_create(
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_account_update_dto_ACCOUNTCATEGORY_Assets
    );
  }

  return account_update_dto;
}


#ifdef account_update_dto_MAIN

void test_account_update_dto(int include_optional) {
    account_update_dto_t* account_update_dto_1 = instantiate_account_update_dto(include_optional);

	cJSON* jsonaccount_update_dto_1 = account_update_dto_convertToJSON(account_update_dto_1);
	printf("account_update_dto :\n%s\n", cJSON_Print(jsonaccount_update_dto_1));
	account_update_dto_t* account_update_dto_2 = account_update_dto_parseFromJSON(jsonaccount_update_dto_1);
	cJSON* jsonaccount_update_dto_2 = account_update_dto_convertToJSON(account_update_dto_2);
	printf("repeating account_update_dto:\n%s\n", cJSON_Print(jsonaccount_update_dto_2));
}

int main() {
  test_account_update_dto(1);
  test_account_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_update_dto_MAIN
#endif // account_update_dto_TEST
