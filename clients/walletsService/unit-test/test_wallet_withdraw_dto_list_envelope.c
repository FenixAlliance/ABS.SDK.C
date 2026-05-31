#ifndef wallet_withdraw_dto_list_envelope_TEST
#define wallet_withdraw_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wallet_withdraw_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wallet_withdraw_dto_list_envelope.h"
wallet_withdraw_dto_list_envelope_t* instantiate_wallet_withdraw_dto_list_envelope(int include_optional);



wallet_withdraw_dto_list_envelope_t* instantiate_wallet_withdraw_dto_list_envelope(int include_optional) {
  wallet_withdraw_dto_list_envelope_t* wallet_withdraw_dto_list_envelope = NULL;
  if (include_optional) {
    wallet_withdraw_dto_list_envelope = wallet_withdraw_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    wallet_withdraw_dto_list_envelope = wallet_withdraw_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return wallet_withdraw_dto_list_envelope;
}


#ifdef wallet_withdraw_dto_list_envelope_MAIN

void test_wallet_withdraw_dto_list_envelope(int include_optional) {
    wallet_withdraw_dto_list_envelope_t* wallet_withdraw_dto_list_envelope_1 = instantiate_wallet_withdraw_dto_list_envelope(include_optional);

	cJSON* jsonwallet_withdraw_dto_list_envelope_1 = wallet_withdraw_dto_list_envelope_convertToJSON(wallet_withdraw_dto_list_envelope_1);
	printf("wallet_withdraw_dto_list_envelope :\n%s\n", cJSON_Print(jsonwallet_withdraw_dto_list_envelope_1));
	wallet_withdraw_dto_list_envelope_t* wallet_withdraw_dto_list_envelope_2 = wallet_withdraw_dto_list_envelope_parseFromJSON(jsonwallet_withdraw_dto_list_envelope_1);
	cJSON* jsonwallet_withdraw_dto_list_envelope_2 = wallet_withdraw_dto_list_envelope_convertToJSON(wallet_withdraw_dto_list_envelope_2);
	printf("repeating wallet_withdraw_dto_list_envelope:\n%s\n", cJSON_Print(jsonwallet_withdraw_dto_list_envelope_2));
}

int main() {
  test_wallet_withdraw_dto_list_envelope(1);
  test_wallet_withdraw_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // wallet_withdraw_dto_list_envelope_MAIN
#endif // wallet_withdraw_dto_list_envelope_TEST
