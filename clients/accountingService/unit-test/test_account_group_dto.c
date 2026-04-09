#ifndef account_group_dto_TEST
#define account_group_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_group_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_group_dto.h"
account_group_dto_t* instantiate_account_group_dto(int include_optional);



account_group_dto_t* instantiate_account_group_dto(int include_optional) {
  account_group_dto_t* account_group_dto = NULL;
  if (include_optional) {
    account_group_dto = account_group_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    account_group_dto = account_group_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return account_group_dto;
}


#ifdef account_group_dto_MAIN

void test_account_group_dto(int include_optional) {
    account_group_dto_t* account_group_dto_1 = instantiate_account_group_dto(include_optional);

	cJSON* jsonaccount_group_dto_1 = account_group_dto_convertToJSON(account_group_dto_1);
	printf("account_group_dto :\n%s\n", cJSON_Print(jsonaccount_group_dto_1));
	account_group_dto_t* account_group_dto_2 = account_group_dto_parseFromJSON(jsonaccount_group_dto_1);
	cJSON* jsonaccount_group_dto_2 = account_group_dto_convertToJSON(account_group_dto_2);
	printf("repeating account_group_dto:\n%s\n", cJSON_Print(jsonaccount_group_dto_2));
}

int main() {
  test_account_group_dto(1);
  test_account_group_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_group_dto_MAIN
#endif // account_group_dto_TEST
