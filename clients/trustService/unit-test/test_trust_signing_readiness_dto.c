#ifndef trust_signing_readiness_dto_TEST
#define trust_signing_readiness_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_signing_readiness_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_signing_readiness_dto.h"
trust_signing_readiness_dto_t* instantiate_trust_signing_readiness_dto(int include_optional);



trust_signing_readiness_dto_t* instantiate_trust_signing_readiness_dto(int include_optional) {
  trust_signing_readiness_dto_t* trust_signing_readiness_dto = NULL;
  if (include_optional) {
    trust_signing_readiness_dto = trust_signing_readiness_dto_create(
      1,
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_Unknown,
      trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  } else {
    trust_signing_readiness_dto = trust_signing_readiness_dto_create(
      1,
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_Unknown,
      trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  }

  return trust_signing_readiness_dto;
}


#ifdef trust_signing_readiness_dto_MAIN

void test_trust_signing_readiness_dto(int include_optional) {
    trust_signing_readiness_dto_t* trust_signing_readiness_dto_1 = instantiate_trust_signing_readiness_dto(include_optional);

	cJSON* jsontrust_signing_readiness_dto_1 = trust_signing_readiness_dto_convertToJSON(trust_signing_readiness_dto_1);
	printf("trust_signing_readiness_dto :\n%s\n", cJSON_Print(jsontrust_signing_readiness_dto_1));
	trust_signing_readiness_dto_t* trust_signing_readiness_dto_2 = trust_signing_readiness_dto_parseFromJSON(jsontrust_signing_readiness_dto_1);
	cJSON* jsontrust_signing_readiness_dto_2 = trust_signing_readiness_dto_convertToJSON(trust_signing_readiness_dto_2);
	printf("repeating trust_signing_readiness_dto:\n%s\n", cJSON_Print(jsontrust_signing_readiness_dto_2));
}

int main() {
  test_trust_signing_readiness_dto(1);
  test_trust_signing_readiness_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_signing_readiness_dto_MAIN
#endif // trust_signing_readiness_dto_TEST
