#ifndef account_create_dto_TEST
#define account_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_create_dto.h"
account_create_dto_t* instantiate_account_create_dto(int include_optional);



account_create_dto_t* instantiate_account_create_dto(int include_optional) {
  account_create_dto_t* account_create_dto = NULL;
  if (include_optional) {
    account_create_dto = account_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_account_create_dto_ACCOUNTCATEGORY_Assets
    );
  } else {
    account_create_dto = account_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_account_create_dto_ACCOUNTCATEGORY_Assets
    );
  }

  return account_create_dto;
}


#ifdef account_create_dto_MAIN

void test_account_create_dto(int include_optional) {
    account_create_dto_t* account_create_dto_1 = instantiate_account_create_dto(include_optional);

	cJSON* jsonaccount_create_dto_1 = account_create_dto_convertToJSON(account_create_dto_1);
	printf("account_create_dto :\n%s\n", cJSON_Print(jsonaccount_create_dto_1));
	account_create_dto_t* account_create_dto_2 = account_create_dto_parseFromJSON(jsonaccount_create_dto_1);
	cJSON* jsonaccount_create_dto_2 = account_create_dto_convertToJSON(account_create_dto_2);
	printf("repeating account_create_dto:\n%s\n", cJSON_Print(jsonaccount_create_dto_2));
}

int main() {
  test_account_create_dto(1);
  test_account_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_create_dto_MAIN
#endif // account_create_dto_TEST
