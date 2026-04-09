#ifndef wallet_dto_envelope_TEST
#define wallet_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wallet_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wallet_dto_envelope.h"
wallet_dto_envelope_t* instantiate_wallet_dto_envelope(int include_optional);

#include "test_wallet_dto.c"


wallet_dto_envelope_t* instantiate_wallet_dto_envelope(int include_optional) {
  wallet_dto_envelope_t* wallet_dto_envelope = NULL;
  if (include_optional) {
    wallet_dto_envelope = wallet_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_wallet_dto(0)
    );
  } else {
    wallet_dto_envelope = wallet_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return wallet_dto_envelope;
}


#ifdef wallet_dto_envelope_MAIN

void test_wallet_dto_envelope(int include_optional) {
    wallet_dto_envelope_t* wallet_dto_envelope_1 = instantiate_wallet_dto_envelope(include_optional);

	cJSON* jsonwallet_dto_envelope_1 = wallet_dto_envelope_convertToJSON(wallet_dto_envelope_1);
	printf("wallet_dto_envelope :\n%s\n", cJSON_Print(jsonwallet_dto_envelope_1));
	wallet_dto_envelope_t* wallet_dto_envelope_2 = wallet_dto_envelope_parseFromJSON(jsonwallet_dto_envelope_1);
	cJSON* jsonwallet_dto_envelope_2 = wallet_dto_envelope_convertToJSON(wallet_dto_envelope_2);
	printf("repeating wallet_dto_envelope:\n%s\n", cJSON_Print(jsonwallet_dto_envelope_2));
}

int main() {
  test_wallet_dto_envelope(1);
  test_wallet_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // wallet_dto_envelope_MAIN
#endif // wallet_dto_envelope_TEST
