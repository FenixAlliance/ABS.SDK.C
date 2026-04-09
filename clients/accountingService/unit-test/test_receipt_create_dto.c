#ifndef receipt_create_dto_TEST
#define receipt_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define receipt_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/receipt_create_dto.h"
receipt_create_dto_t* instantiate_receipt_create_dto(int include_optional);



receipt_create_dto_t* instantiate_receipt_create_dto(int include_optional) {
  receipt_create_dto_t* receipt_create_dto = NULL;
  if (include_optional) {
    receipt_create_dto = receipt_create_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_Automatic,
      accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0",
      accountingservice_receipt_create_dto_RECEIPTTYPE_PaymentReceipt,
      "0",
      "0"
    );
  } else {
    receipt_create_dto = receipt_create_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_Automatic,
      accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0",
      accountingservice_receipt_create_dto_RECEIPTTYPE_PaymentReceipt,
      "0",
      "0"
    );
  }

  return receipt_create_dto;
}


#ifdef receipt_create_dto_MAIN

void test_receipt_create_dto(int include_optional) {
    receipt_create_dto_t* receipt_create_dto_1 = instantiate_receipt_create_dto(include_optional);

	cJSON* jsonreceipt_create_dto_1 = receipt_create_dto_convertToJSON(receipt_create_dto_1);
	printf("receipt_create_dto :\n%s\n", cJSON_Print(jsonreceipt_create_dto_1));
	receipt_create_dto_t* receipt_create_dto_2 = receipt_create_dto_parseFromJSON(jsonreceipt_create_dto_1);
	cJSON* jsonreceipt_create_dto_2 = receipt_create_dto_convertToJSON(receipt_create_dto_2);
	printf("repeating receipt_create_dto:\n%s\n", cJSON_Print(jsonreceipt_create_dto_2));
}

int main() {
  test_receipt_create_dto(1);
  test_receipt_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // receipt_create_dto_MAIN
#endif // receipt_create_dto_TEST
