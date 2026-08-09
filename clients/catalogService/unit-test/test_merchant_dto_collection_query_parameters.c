#ifndef merchant_dto_collection_query_parameters_TEST
#define merchant_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define merchant_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/merchant_dto_collection_query_parameters.h"
merchant_dto_collection_query_parameters_t* instantiate_merchant_dto_collection_query_parameters(int include_optional);



merchant_dto_collection_query_parameters_t* instantiate_merchant_dto_collection_query_parameters(int include_optional) {
  merchant_dto_collection_query_parameters_t* merchant_dto_collection_query_parameters = NULL;
  if (include_optional) {
    merchant_dto_collection_query_parameters = merchant_dto_collection_query_parameters_create(
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
    merchant_dto_collection_query_parameters = merchant_dto_collection_query_parameters_create(
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

  return merchant_dto_collection_query_parameters;
}


#ifdef merchant_dto_collection_query_parameters_MAIN

void test_merchant_dto_collection_query_parameters(int include_optional) {
    merchant_dto_collection_query_parameters_t* merchant_dto_collection_query_parameters_1 = instantiate_merchant_dto_collection_query_parameters(include_optional);

	cJSON* jsonmerchant_dto_collection_query_parameters_1 = merchant_dto_collection_query_parameters_convertToJSON(merchant_dto_collection_query_parameters_1);
	printf("merchant_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonmerchant_dto_collection_query_parameters_1));
	merchant_dto_collection_query_parameters_t* merchant_dto_collection_query_parameters_2 = merchant_dto_collection_query_parameters_parseFromJSON(jsonmerchant_dto_collection_query_parameters_1);
	cJSON* jsonmerchant_dto_collection_query_parameters_2 = merchant_dto_collection_query_parameters_convertToJSON(merchant_dto_collection_query_parameters_2);
	printf("repeating merchant_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonmerchant_dto_collection_query_parameters_2));
}

int main() {
  test_merchant_dto_collection_query_parameters(1);
  test_merchant_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // merchant_dto_collection_query_parameters_MAIN
#endif // merchant_dto_collection_query_parameters_TEST
