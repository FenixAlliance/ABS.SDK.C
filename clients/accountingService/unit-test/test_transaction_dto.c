#ifndef transaction_dto_TEST
#define transaction_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transaction_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transaction_dto.h"
transaction_dto_t* instantiate_transaction_dto(int include_optional);



transaction_dto_t* instantiate_transaction_dto(int include_optional) {
  transaction_dto_t* transaction_dto = NULL;
  if (include_optional) {
    transaction_dto = transaction_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    transaction_dto = transaction_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return transaction_dto;
}


#ifdef transaction_dto_MAIN

void test_transaction_dto(int include_optional) {
    transaction_dto_t* transaction_dto_1 = instantiate_transaction_dto(include_optional);

	cJSON* jsontransaction_dto_1 = transaction_dto_convertToJSON(transaction_dto_1);
	printf("transaction_dto :\n%s\n", cJSON_Print(jsontransaction_dto_1));
	transaction_dto_t* transaction_dto_2 = transaction_dto_parseFromJSON(jsontransaction_dto_1);
	cJSON* jsontransaction_dto_2 = transaction_dto_convertToJSON(transaction_dto_2);
	printf("repeating transaction_dto:\n%s\n", cJSON_Print(jsontransaction_dto_2));
}

int main() {
  test_transaction_dto(1);
  test_transaction_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // transaction_dto_MAIN
#endif // transaction_dto_TEST
