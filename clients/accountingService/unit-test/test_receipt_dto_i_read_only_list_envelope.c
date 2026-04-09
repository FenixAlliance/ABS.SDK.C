#ifndef receipt_dto_i_read_only_list_envelope_TEST
#define receipt_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define receipt_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/receipt_dto_i_read_only_list_envelope.h"
receipt_dto_i_read_only_list_envelope_t* instantiate_receipt_dto_i_read_only_list_envelope(int include_optional);



receipt_dto_i_read_only_list_envelope_t* instantiate_receipt_dto_i_read_only_list_envelope(int include_optional) {
  receipt_dto_i_read_only_list_envelope_t* receipt_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    receipt_dto_i_read_only_list_envelope = receipt_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    receipt_dto_i_read_only_list_envelope = receipt_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return receipt_dto_i_read_only_list_envelope;
}


#ifdef receipt_dto_i_read_only_list_envelope_MAIN

void test_receipt_dto_i_read_only_list_envelope(int include_optional) {
    receipt_dto_i_read_only_list_envelope_t* receipt_dto_i_read_only_list_envelope_1 = instantiate_receipt_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonreceipt_dto_i_read_only_list_envelope_1 = receipt_dto_i_read_only_list_envelope_convertToJSON(receipt_dto_i_read_only_list_envelope_1);
	printf("receipt_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonreceipt_dto_i_read_only_list_envelope_1));
	receipt_dto_i_read_only_list_envelope_t* receipt_dto_i_read_only_list_envelope_2 = receipt_dto_i_read_only_list_envelope_parseFromJSON(jsonreceipt_dto_i_read_only_list_envelope_1);
	cJSON* jsonreceipt_dto_i_read_only_list_envelope_2 = receipt_dto_i_read_only_list_envelope_convertToJSON(receipt_dto_i_read_only_list_envelope_2);
	printf("repeating receipt_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonreceipt_dto_i_read_only_list_envelope_2));
}

int main() {
  test_receipt_dto_i_read_only_list_envelope(1);
  test_receipt_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // receipt_dto_i_read_only_list_envelope_MAIN
#endif // receipt_dto_i_read_only_list_envelope_TEST
