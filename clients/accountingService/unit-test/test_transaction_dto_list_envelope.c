#ifndef transaction_dto_list_envelope_TEST
#define transaction_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transaction_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transaction_dto_list_envelope.h"
transaction_dto_list_envelope_t* instantiate_transaction_dto_list_envelope(int include_optional);



transaction_dto_list_envelope_t* instantiate_transaction_dto_list_envelope(int include_optional) {
  transaction_dto_list_envelope_t* transaction_dto_list_envelope = NULL;
  if (include_optional) {
    transaction_dto_list_envelope = transaction_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    transaction_dto_list_envelope = transaction_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return transaction_dto_list_envelope;
}


#ifdef transaction_dto_list_envelope_MAIN

void test_transaction_dto_list_envelope(int include_optional) {
    transaction_dto_list_envelope_t* transaction_dto_list_envelope_1 = instantiate_transaction_dto_list_envelope(include_optional);

	cJSON* jsontransaction_dto_list_envelope_1 = transaction_dto_list_envelope_convertToJSON(transaction_dto_list_envelope_1);
	printf("transaction_dto_list_envelope :\n%s\n", cJSON_Print(jsontransaction_dto_list_envelope_1));
	transaction_dto_list_envelope_t* transaction_dto_list_envelope_2 = transaction_dto_list_envelope_parseFromJSON(jsontransaction_dto_list_envelope_1);
	cJSON* jsontransaction_dto_list_envelope_2 = transaction_dto_list_envelope_convertToJSON(transaction_dto_list_envelope_2);
	printf("repeating transaction_dto_list_envelope:\n%s\n", cJSON_Print(jsontransaction_dto_list_envelope_2));
}

int main() {
  test_transaction_dto_list_envelope(1);
  test_transaction_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // transaction_dto_list_envelope_MAIN
#endif // transaction_dto_list_envelope_TEST
