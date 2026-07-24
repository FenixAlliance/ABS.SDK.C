#ifndef trust_signing_request_dto_TEST
#define trust_signing_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_signing_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_signing_request_dto.h"
trust_signing_request_dto_t* instantiate_trust_signing_request_dto(int include_optional);



trust_signing_request_dto_t* instantiate_trust_signing_request_dto(int include_optional) {
  trust_signing_request_dto_t* trust_signing_request_dto = NULL;
  if (include_optional) {
    trust_signing_request_dto = trust_signing_request_dto_create(
      "0",
      "0",
      "0",
      "0",
      trustservice_trust_signing_request_dto_REQUESTEDFORMAT_Unknown,
      trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_Unknown,
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    trust_signing_request_dto = trust_signing_request_dto_create(
      "0",
      "0",
      "0",
      "0",
      trustservice_trust_signing_request_dto_REQUESTEDFORMAT_Unknown,
      trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_Unknown,
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return trust_signing_request_dto;
}


#ifdef trust_signing_request_dto_MAIN

void test_trust_signing_request_dto(int include_optional) {
    trust_signing_request_dto_t* trust_signing_request_dto_1 = instantiate_trust_signing_request_dto(include_optional);

	cJSON* jsontrust_signing_request_dto_1 = trust_signing_request_dto_convertToJSON(trust_signing_request_dto_1);
	printf("trust_signing_request_dto :\n%s\n", cJSON_Print(jsontrust_signing_request_dto_1));
	trust_signing_request_dto_t* trust_signing_request_dto_2 = trust_signing_request_dto_parseFromJSON(jsontrust_signing_request_dto_1);
	cJSON* jsontrust_signing_request_dto_2 = trust_signing_request_dto_convertToJSON(trust_signing_request_dto_2);
	printf("repeating trust_signing_request_dto:\n%s\n", cJSON_Print(jsontrust_signing_request_dto_2));
}

int main() {
  test_trust_signing_request_dto(1);
  test_trust_signing_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_signing_request_dto_MAIN
#endif // trust_signing_request_dto_TEST
