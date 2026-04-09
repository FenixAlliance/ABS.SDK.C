#ifndef receipt_update_dto_TEST
#define receipt_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define receipt_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/receipt_update_dto.h"
receipt_update_dto_t* instantiate_receipt_update_dto(int include_optional);



receipt_update_dto_t* instantiate_receipt_update_dto(int include_optional) {
  receipt_update_dto_t* receipt_update_dto = NULL;
  if (include_optional) {
    receipt_update_dto = receipt_update_dto_create(
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    receipt_update_dto = receipt_update_dto_create(
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return receipt_update_dto;
}


#ifdef receipt_update_dto_MAIN

void test_receipt_update_dto(int include_optional) {
    receipt_update_dto_t* receipt_update_dto_1 = instantiate_receipt_update_dto(include_optional);

	cJSON* jsonreceipt_update_dto_1 = receipt_update_dto_convertToJSON(receipt_update_dto_1);
	printf("receipt_update_dto :\n%s\n", cJSON_Print(jsonreceipt_update_dto_1));
	receipt_update_dto_t* receipt_update_dto_2 = receipt_update_dto_parseFromJSON(jsonreceipt_update_dto_1);
	cJSON* jsonreceipt_update_dto_2 = receipt_update_dto_convertToJSON(receipt_update_dto_2);
	printf("repeating receipt_update_dto:\n%s\n", cJSON_Print(jsonreceipt_update_dto_2));
}

int main() {
  test_receipt_update_dto(1);
  test_receipt_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // receipt_update_dto_MAIN
#endif // receipt_update_dto_TEST
