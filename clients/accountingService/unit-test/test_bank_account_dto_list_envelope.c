#ifndef bank_account_dto_list_envelope_TEST
#define bank_account_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_account_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_account_dto_list_envelope.h"
bank_account_dto_list_envelope_t* instantiate_bank_account_dto_list_envelope(int include_optional);



bank_account_dto_list_envelope_t* instantiate_bank_account_dto_list_envelope(int include_optional) {
  bank_account_dto_list_envelope_t* bank_account_dto_list_envelope = NULL;
  if (include_optional) {
    bank_account_dto_list_envelope = bank_account_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    bank_account_dto_list_envelope = bank_account_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return bank_account_dto_list_envelope;
}


#ifdef bank_account_dto_list_envelope_MAIN

void test_bank_account_dto_list_envelope(int include_optional) {
    bank_account_dto_list_envelope_t* bank_account_dto_list_envelope_1 = instantiate_bank_account_dto_list_envelope(include_optional);

	cJSON* jsonbank_account_dto_list_envelope_1 = bank_account_dto_list_envelope_convertToJSON(bank_account_dto_list_envelope_1);
	printf("bank_account_dto_list_envelope :\n%s\n", cJSON_Print(jsonbank_account_dto_list_envelope_1));
	bank_account_dto_list_envelope_t* bank_account_dto_list_envelope_2 = bank_account_dto_list_envelope_parseFromJSON(jsonbank_account_dto_list_envelope_1);
	cJSON* jsonbank_account_dto_list_envelope_2 = bank_account_dto_list_envelope_convertToJSON(bank_account_dto_list_envelope_2);
	printf("repeating bank_account_dto_list_envelope:\n%s\n", cJSON_Print(jsonbank_account_dto_list_envelope_2));
}

int main() {
  test_bank_account_dto_list_envelope(1);
  test_bank_account_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_account_dto_list_envelope_MAIN
#endif // bank_account_dto_list_envelope_TEST
