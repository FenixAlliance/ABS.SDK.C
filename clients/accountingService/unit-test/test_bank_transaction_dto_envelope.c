#ifndef bank_transaction_dto_envelope_TEST
#define bank_transaction_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_transaction_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_transaction_dto_envelope.h"
bank_transaction_dto_envelope_t* instantiate_bank_transaction_dto_envelope(int include_optional);

#include "test_bank_transaction_dto.c"


bank_transaction_dto_envelope_t* instantiate_bank_transaction_dto_envelope(int include_optional) {
  bank_transaction_dto_envelope_t* bank_transaction_dto_envelope = NULL;
  if (include_optional) {
    bank_transaction_dto_envelope = bank_transaction_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_bank_transaction_dto(0)
    );
  } else {
    bank_transaction_dto_envelope = bank_transaction_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return bank_transaction_dto_envelope;
}


#ifdef bank_transaction_dto_envelope_MAIN

void test_bank_transaction_dto_envelope(int include_optional) {
    bank_transaction_dto_envelope_t* bank_transaction_dto_envelope_1 = instantiate_bank_transaction_dto_envelope(include_optional);

	cJSON* jsonbank_transaction_dto_envelope_1 = bank_transaction_dto_envelope_convertToJSON(bank_transaction_dto_envelope_1);
	printf("bank_transaction_dto_envelope :\n%s\n", cJSON_Print(jsonbank_transaction_dto_envelope_1));
	bank_transaction_dto_envelope_t* bank_transaction_dto_envelope_2 = bank_transaction_dto_envelope_parseFromJSON(jsonbank_transaction_dto_envelope_1);
	cJSON* jsonbank_transaction_dto_envelope_2 = bank_transaction_dto_envelope_convertToJSON(bank_transaction_dto_envelope_2);
	printf("repeating bank_transaction_dto_envelope:\n%s\n", cJSON_Print(jsonbank_transaction_dto_envelope_2));
}

int main() {
  test_bank_transaction_dto_envelope(1);
  test_bank_transaction_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_transaction_dto_envelope_MAIN
#endif // bank_transaction_dto_envelope_TEST
