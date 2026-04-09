#ifndef merchant_dto_envelope_TEST
#define merchant_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define merchant_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/merchant_dto_envelope.h"
merchant_dto_envelope_t* instantiate_merchant_dto_envelope(int include_optional);

#include "test_merchant_dto.c"


merchant_dto_envelope_t* instantiate_merchant_dto_envelope(int include_optional) {
  merchant_dto_envelope_t* merchant_dto_envelope = NULL;
  if (include_optional) {
    merchant_dto_envelope = merchant_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_merchant_dto(0)
    );
  } else {
    merchant_dto_envelope = merchant_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return merchant_dto_envelope;
}


#ifdef merchant_dto_envelope_MAIN

void test_merchant_dto_envelope(int include_optional) {
    merchant_dto_envelope_t* merchant_dto_envelope_1 = instantiate_merchant_dto_envelope(include_optional);

	cJSON* jsonmerchant_dto_envelope_1 = merchant_dto_envelope_convertToJSON(merchant_dto_envelope_1);
	printf("merchant_dto_envelope :\n%s\n", cJSON_Print(jsonmerchant_dto_envelope_1));
	merchant_dto_envelope_t* merchant_dto_envelope_2 = merchant_dto_envelope_parseFromJSON(jsonmerchant_dto_envelope_1);
	cJSON* jsonmerchant_dto_envelope_2 = merchant_dto_envelope_convertToJSON(merchant_dto_envelope_2);
	printf("repeating merchant_dto_envelope:\n%s\n", cJSON_Print(jsonmerchant_dto_envelope_2));
}

int main() {
  test_merchant_dto_envelope(1);
  test_merchant_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // merchant_dto_envelope_MAIN
#endif // merchant_dto_envelope_TEST
