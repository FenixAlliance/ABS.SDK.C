#ifndef receipt_dto_TEST
#define receipt_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define receipt_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/receipt_dto.h"
receipt_dto_t* instantiate_receipt_dto(int include_optional);



receipt_dto_t* instantiate_receipt_dto(int include_optional) {
  receipt_dto_t* receipt_dto = NULL;
  if (include_optional) {
    receipt_dto = receipt_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      accountingservice_receipt_dto_RECEIPTTYPE_PaymentReceipt,
      "0",
      "0"
    );
  } else {
    receipt_dto = receipt_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      accountingservice_receipt_dto_RECEIPTTYPE_PaymentReceipt,
      "0",
      "0"
    );
  }

  return receipt_dto;
}


#ifdef receipt_dto_MAIN

void test_receipt_dto(int include_optional) {
    receipt_dto_t* receipt_dto_1 = instantiate_receipt_dto(include_optional);

	cJSON* jsonreceipt_dto_1 = receipt_dto_convertToJSON(receipt_dto_1);
	printf("receipt_dto :\n%s\n", cJSON_Print(jsonreceipt_dto_1));
	receipt_dto_t* receipt_dto_2 = receipt_dto_parseFromJSON(jsonreceipt_dto_1);
	cJSON* jsonreceipt_dto_2 = receipt_dto_convertToJSON(receipt_dto_2);
	printf("repeating receipt_dto:\n%s\n", cJSON_Print(jsonreceipt_dto_2));
}

int main() {
  test_receipt_dto(1);
  test_receipt_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // receipt_dto_MAIN
#endif // receipt_dto_TEST
