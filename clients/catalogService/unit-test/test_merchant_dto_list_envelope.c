#ifndef merchant_dto_list_envelope_TEST
#define merchant_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define merchant_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/merchant_dto_list_envelope.h"
merchant_dto_list_envelope_t* instantiate_merchant_dto_list_envelope(int include_optional);



merchant_dto_list_envelope_t* instantiate_merchant_dto_list_envelope(int include_optional) {
  merchant_dto_list_envelope_t* merchant_dto_list_envelope = NULL;
  if (include_optional) {
    merchant_dto_list_envelope = merchant_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    merchant_dto_list_envelope = merchant_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return merchant_dto_list_envelope;
}


#ifdef merchant_dto_list_envelope_MAIN

void test_merchant_dto_list_envelope(int include_optional) {
    merchant_dto_list_envelope_t* merchant_dto_list_envelope_1 = instantiate_merchant_dto_list_envelope(include_optional);

	cJSON* jsonmerchant_dto_list_envelope_1 = merchant_dto_list_envelope_convertToJSON(merchant_dto_list_envelope_1);
	printf("merchant_dto_list_envelope :\n%s\n", cJSON_Print(jsonmerchant_dto_list_envelope_1));
	merchant_dto_list_envelope_t* merchant_dto_list_envelope_2 = merchant_dto_list_envelope_parseFromJSON(jsonmerchant_dto_list_envelope_1);
	cJSON* jsonmerchant_dto_list_envelope_2 = merchant_dto_list_envelope_convertToJSON(merchant_dto_list_envelope_2);
	printf("repeating merchant_dto_list_envelope:\n%s\n", cJSON_Print(jsonmerchant_dto_list_envelope_2));
}

int main() {
  test_merchant_dto_list_envelope(1);
  test_merchant_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // merchant_dto_list_envelope_MAIN
#endif // merchant_dto_list_envelope_TEST
