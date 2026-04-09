#ifndef transaction_update_dto_TEST
#define transaction_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transaction_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transaction_update_dto.h"
transaction_update_dto_t* instantiate_transaction_update_dto(int include_optional);



transaction_update_dto_t* instantiate_transaction_update_dto(int include_optional) {
  transaction_update_dto_t* transaction_update_dto = NULL;
  if (include_optional) {
    transaction_update_dto = transaction_update_dto_create(
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
    transaction_update_dto = transaction_update_dto_create(
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

  return transaction_update_dto;
}


#ifdef transaction_update_dto_MAIN

void test_transaction_update_dto(int include_optional) {
    transaction_update_dto_t* transaction_update_dto_1 = instantiate_transaction_update_dto(include_optional);

	cJSON* jsontransaction_update_dto_1 = transaction_update_dto_convertToJSON(transaction_update_dto_1);
	printf("transaction_update_dto :\n%s\n", cJSON_Print(jsontransaction_update_dto_1));
	transaction_update_dto_t* transaction_update_dto_2 = transaction_update_dto_parseFromJSON(jsontransaction_update_dto_1);
	cJSON* jsontransaction_update_dto_2 = transaction_update_dto_convertToJSON(transaction_update_dto_2);
	printf("repeating transaction_update_dto:\n%s\n", cJSON_Print(jsontransaction_update_dto_2));
}

int main() {
  test_transaction_update_dto(1);
  test_transaction_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // transaction_update_dto_MAIN
#endif // transaction_update_dto_TEST
