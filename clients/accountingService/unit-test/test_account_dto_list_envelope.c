#ifndef account_dto_list_envelope_TEST
#define account_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_dto_list_envelope.h"
account_dto_list_envelope_t* instantiate_account_dto_list_envelope(int include_optional);



account_dto_list_envelope_t* instantiate_account_dto_list_envelope(int include_optional) {
  account_dto_list_envelope_t* account_dto_list_envelope = NULL;
  if (include_optional) {
    account_dto_list_envelope = account_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    account_dto_list_envelope = account_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return account_dto_list_envelope;
}


#ifdef account_dto_list_envelope_MAIN

void test_account_dto_list_envelope(int include_optional) {
    account_dto_list_envelope_t* account_dto_list_envelope_1 = instantiate_account_dto_list_envelope(include_optional);

	cJSON* jsonaccount_dto_list_envelope_1 = account_dto_list_envelope_convertToJSON(account_dto_list_envelope_1);
	printf("account_dto_list_envelope :\n%s\n", cJSON_Print(jsonaccount_dto_list_envelope_1));
	account_dto_list_envelope_t* account_dto_list_envelope_2 = account_dto_list_envelope_parseFromJSON(jsonaccount_dto_list_envelope_1);
	cJSON* jsonaccount_dto_list_envelope_2 = account_dto_list_envelope_convertToJSON(account_dto_list_envelope_2);
	printf("repeating account_dto_list_envelope:\n%s\n", cJSON_Print(jsonaccount_dto_list_envelope_2));
}

int main() {
  test_account_dto_list_envelope(1);
  test_account_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_dto_list_envelope_MAIN
#endif // account_dto_list_envelope_TEST
