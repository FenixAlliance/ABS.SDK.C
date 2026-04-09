#ifndef wallet_dto_TEST
#define wallet_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wallet_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wallet_dto.h"
wallet_dto_t* instantiate_wallet_dto(int include_optional);



wallet_dto_t* instantiate_wallet_dto(int include_optional) {
  wallet_dto_t* wallet_dto = NULL;
  if (include_optional) {
    wallet_dto = wallet_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1,
      1,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337
    );
  } else {
    wallet_dto = wallet_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1,
      1,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337
    );
  }

  return wallet_dto;
}


#ifdef wallet_dto_MAIN

void test_wallet_dto(int include_optional) {
    wallet_dto_t* wallet_dto_1 = instantiate_wallet_dto(include_optional);

	cJSON* jsonwallet_dto_1 = wallet_dto_convertToJSON(wallet_dto_1);
	printf("wallet_dto :\n%s\n", cJSON_Print(jsonwallet_dto_1));
	wallet_dto_t* wallet_dto_2 = wallet_dto_parseFromJSON(jsonwallet_dto_1);
	cJSON* jsonwallet_dto_2 = wallet_dto_convertToJSON(wallet_dto_2);
	printf("repeating wallet_dto:\n%s\n", cJSON_Print(jsonwallet_dto_2));
}

int main() {
  test_wallet_dto(1);
  test_wallet_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // wallet_dto_MAIN
#endif // wallet_dto_TEST
