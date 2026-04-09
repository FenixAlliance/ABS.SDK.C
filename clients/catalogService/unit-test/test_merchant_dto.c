#ifndef merchant_dto_TEST
#define merchant_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define merchant_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/merchant_dto.h"
merchant_dto_t* instantiate_merchant_dto(int include_optional);



merchant_dto_t* instantiate_merchant_dto(int include_optional) {
  merchant_dto_t* merchant_dto = NULL;
  if (include_optional) {
    merchant_dto = merchant_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      1,
      "0",
      "0",
      "0",
      56,
      1.337
    );
  } else {
    merchant_dto = merchant_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      1,
      "0",
      "0",
      "0",
      56,
      1.337
    );
  }

  return merchant_dto;
}


#ifdef merchant_dto_MAIN

void test_merchant_dto(int include_optional) {
    merchant_dto_t* merchant_dto_1 = instantiate_merchant_dto(include_optional);

	cJSON* jsonmerchant_dto_1 = merchant_dto_convertToJSON(merchant_dto_1);
	printf("merchant_dto :\n%s\n", cJSON_Print(jsonmerchant_dto_1));
	merchant_dto_t* merchant_dto_2 = merchant_dto_parseFromJSON(jsonmerchant_dto_1);
	cJSON* jsonmerchant_dto_2 = merchant_dto_convertToJSON(merchant_dto_2);
	printf("repeating merchant_dto:\n%s\n", cJSON_Print(jsonmerchant_dto_2));
}

int main() {
  test_merchant_dto(1);
  test_merchant_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // merchant_dto_MAIN
#endif // merchant_dto_TEST
