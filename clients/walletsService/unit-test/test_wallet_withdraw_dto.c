#ifndef wallet_withdraw_dto_TEST
#define wallet_withdraw_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wallet_withdraw_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wallet_withdraw_dto.h"
wallet_withdraw_dto_t* instantiate_wallet_withdraw_dto(int include_optional);



wallet_withdraw_dto_t* instantiate_wallet_withdraw_dto(int include_optional) {
  wallet_withdraw_dto_t* wallet_withdraw_dto = NULL;
  if (include_optional) {
    wallet_withdraw_dto = wallet_withdraw_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_OnHold,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      "0"
    );
  } else {
    wallet_withdraw_dto = wallet_withdraw_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_OnHold,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      "0"
    );
  }

  return wallet_withdraw_dto;
}


#ifdef wallet_withdraw_dto_MAIN

void test_wallet_withdraw_dto(int include_optional) {
    wallet_withdraw_dto_t* wallet_withdraw_dto_1 = instantiate_wallet_withdraw_dto(include_optional);

	cJSON* jsonwallet_withdraw_dto_1 = wallet_withdraw_dto_convertToJSON(wallet_withdraw_dto_1);
	printf("wallet_withdraw_dto :\n%s\n", cJSON_Print(jsonwallet_withdraw_dto_1));
	wallet_withdraw_dto_t* wallet_withdraw_dto_2 = wallet_withdraw_dto_parseFromJSON(jsonwallet_withdraw_dto_1);
	cJSON* jsonwallet_withdraw_dto_2 = wallet_withdraw_dto_convertToJSON(wallet_withdraw_dto_2);
	printf("repeating wallet_withdraw_dto:\n%s\n", cJSON_Print(jsonwallet_withdraw_dto_2));
}

int main() {
  test_wallet_withdraw_dto(1);
  test_wallet_withdraw_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // wallet_withdraw_dto_MAIN
#endif // wallet_withdraw_dto_TEST
