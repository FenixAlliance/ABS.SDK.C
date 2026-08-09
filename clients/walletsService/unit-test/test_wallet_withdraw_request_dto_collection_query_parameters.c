#ifndef wallet_withdraw_request_dto_collection_query_parameters_TEST
#define wallet_withdraw_request_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wallet_withdraw_request_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wallet_withdraw_request_dto_collection_query_parameters.h"
wallet_withdraw_request_dto_collection_query_parameters_t* instantiate_wallet_withdraw_request_dto_collection_query_parameters(int include_optional);



wallet_withdraw_request_dto_collection_query_parameters_t* instantiate_wallet_withdraw_request_dto_collection_query_parameters(int include_optional) {
  wallet_withdraw_request_dto_collection_query_parameters_t* wallet_withdraw_request_dto_collection_query_parameters = NULL;
  if (include_optional) {
    wallet_withdraw_request_dto_collection_query_parameters = wallet_withdraw_request_dto_collection_query_parameters_create(
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
    wallet_withdraw_request_dto_collection_query_parameters = wallet_withdraw_request_dto_collection_query_parameters_create(
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

  return wallet_withdraw_request_dto_collection_query_parameters;
}


#ifdef wallet_withdraw_request_dto_collection_query_parameters_MAIN

void test_wallet_withdraw_request_dto_collection_query_parameters(int include_optional) {
    wallet_withdraw_request_dto_collection_query_parameters_t* wallet_withdraw_request_dto_collection_query_parameters_1 = instantiate_wallet_withdraw_request_dto_collection_query_parameters(include_optional);

	cJSON* jsonwallet_withdraw_request_dto_collection_query_parameters_1 = wallet_withdraw_request_dto_collection_query_parameters_convertToJSON(wallet_withdraw_request_dto_collection_query_parameters_1);
	printf("wallet_withdraw_request_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwallet_withdraw_request_dto_collection_query_parameters_1));
	wallet_withdraw_request_dto_collection_query_parameters_t* wallet_withdraw_request_dto_collection_query_parameters_2 = wallet_withdraw_request_dto_collection_query_parameters_parseFromJSON(jsonwallet_withdraw_request_dto_collection_query_parameters_1);
	cJSON* jsonwallet_withdraw_request_dto_collection_query_parameters_2 = wallet_withdraw_request_dto_collection_query_parameters_convertToJSON(wallet_withdraw_request_dto_collection_query_parameters_2);
	printf("repeating wallet_withdraw_request_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwallet_withdraw_request_dto_collection_query_parameters_2));
}

int main() {
  test_wallet_withdraw_request_dto_collection_query_parameters(1);
  test_wallet_withdraw_request_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // wallet_withdraw_request_dto_collection_query_parameters_MAIN
#endif // wallet_withdraw_request_dto_collection_query_parameters_TEST
