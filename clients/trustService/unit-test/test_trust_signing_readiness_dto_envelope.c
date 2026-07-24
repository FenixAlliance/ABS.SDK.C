#ifndef trust_signing_readiness_dto_envelope_TEST
#define trust_signing_readiness_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_signing_readiness_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_signing_readiness_dto_envelope.h"
trust_signing_readiness_dto_envelope_t* instantiate_trust_signing_readiness_dto_envelope(int include_optional);

#include "test_trust_signing_readiness_dto.c"


trust_signing_readiness_dto_envelope_t* instantiate_trust_signing_readiness_dto_envelope(int include_optional) {
  trust_signing_readiness_dto_envelope_t* trust_signing_readiness_dto_envelope = NULL;
  if (include_optional) {
    trust_signing_readiness_dto_envelope = trust_signing_readiness_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_trust_signing_readiness_dto(0)
    );
  } else {
    trust_signing_readiness_dto_envelope = trust_signing_readiness_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return trust_signing_readiness_dto_envelope;
}


#ifdef trust_signing_readiness_dto_envelope_MAIN

void test_trust_signing_readiness_dto_envelope(int include_optional) {
    trust_signing_readiness_dto_envelope_t* trust_signing_readiness_dto_envelope_1 = instantiate_trust_signing_readiness_dto_envelope(include_optional);

	cJSON* jsontrust_signing_readiness_dto_envelope_1 = trust_signing_readiness_dto_envelope_convertToJSON(trust_signing_readiness_dto_envelope_1);
	printf("trust_signing_readiness_dto_envelope :\n%s\n", cJSON_Print(jsontrust_signing_readiness_dto_envelope_1));
	trust_signing_readiness_dto_envelope_t* trust_signing_readiness_dto_envelope_2 = trust_signing_readiness_dto_envelope_parseFromJSON(jsontrust_signing_readiness_dto_envelope_1);
	cJSON* jsontrust_signing_readiness_dto_envelope_2 = trust_signing_readiness_dto_envelope_convertToJSON(trust_signing_readiness_dto_envelope_2);
	printf("repeating trust_signing_readiness_dto_envelope:\n%s\n", cJSON_Print(jsontrust_signing_readiness_dto_envelope_2));
}

int main() {
  test_trust_signing_readiness_dto_envelope(1);
  test_trust_signing_readiness_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_signing_readiness_dto_envelope_MAIN
#endif // trust_signing_readiness_dto_envelope_TEST
