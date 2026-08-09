#ifndef receipt_dto_collection_query_parameters_TEST
#define receipt_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define receipt_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/receipt_dto_collection_query_parameters.h"
receipt_dto_collection_query_parameters_t* instantiate_receipt_dto_collection_query_parameters(int include_optional);



receipt_dto_collection_query_parameters_t* instantiate_receipt_dto_collection_query_parameters(int include_optional) {
  receipt_dto_collection_query_parameters_t* receipt_dto_collection_query_parameters = NULL;
  if (include_optional) {
    receipt_dto_collection_query_parameters = receipt_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    receipt_dto_collection_query_parameters = receipt_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return receipt_dto_collection_query_parameters;
}


#ifdef receipt_dto_collection_query_parameters_MAIN

void test_receipt_dto_collection_query_parameters(int include_optional) {
    receipt_dto_collection_query_parameters_t* receipt_dto_collection_query_parameters_1 = instantiate_receipt_dto_collection_query_parameters(include_optional);

	cJSON* jsonreceipt_dto_collection_query_parameters_1 = receipt_dto_collection_query_parameters_convertToJSON(receipt_dto_collection_query_parameters_1);
	printf("receipt_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonreceipt_dto_collection_query_parameters_1));
	receipt_dto_collection_query_parameters_t* receipt_dto_collection_query_parameters_2 = receipt_dto_collection_query_parameters_parseFromJSON(jsonreceipt_dto_collection_query_parameters_1);
	cJSON* jsonreceipt_dto_collection_query_parameters_2 = receipt_dto_collection_query_parameters_convertToJSON(receipt_dto_collection_query_parameters_2);
	printf("repeating receipt_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonreceipt_dto_collection_query_parameters_2));
}

int main() {
  test_receipt_dto_collection_query_parameters(1);
  test_receipt_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // receipt_dto_collection_query_parameters_MAIN
#endif // receipt_dto_collection_query_parameters_TEST
