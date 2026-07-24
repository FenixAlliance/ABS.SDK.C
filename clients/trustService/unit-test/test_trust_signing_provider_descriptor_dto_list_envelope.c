#ifndef trust_signing_provider_descriptor_dto_list_envelope_TEST
#define trust_signing_provider_descriptor_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_signing_provider_descriptor_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_signing_provider_descriptor_dto_list_envelope.h"
trust_signing_provider_descriptor_dto_list_envelope_t* instantiate_trust_signing_provider_descriptor_dto_list_envelope(int include_optional);



trust_signing_provider_descriptor_dto_list_envelope_t* instantiate_trust_signing_provider_descriptor_dto_list_envelope(int include_optional) {
  trust_signing_provider_descriptor_dto_list_envelope_t* trust_signing_provider_descriptor_dto_list_envelope = NULL;
  if (include_optional) {
    trust_signing_provider_descriptor_dto_list_envelope = trust_signing_provider_descriptor_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    trust_signing_provider_descriptor_dto_list_envelope = trust_signing_provider_descriptor_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return trust_signing_provider_descriptor_dto_list_envelope;
}


#ifdef trust_signing_provider_descriptor_dto_list_envelope_MAIN

void test_trust_signing_provider_descriptor_dto_list_envelope(int include_optional) {
    trust_signing_provider_descriptor_dto_list_envelope_t* trust_signing_provider_descriptor_dto_list_envelope_1 = instantiate_trust_signing_provider_descriptor_dto_list_envelope(include_optional);

	cJSON* jsontrust_signing_provider_descriptor_dto_list_envelope_1 = trust_signing_provider_descriptor_dto_list_envelope_convertToJSON(trust_signing_provider_descriptor_dto_list_envelope_1);
	printf("trust_signing_provider_descriptor_dto_list_envelope :\n%s\n", cJSON_Print(jsontrust_signing_provider_descriptor_dto_list_envelope_1));
	trust_signing_provider_descriptor_dto_list_envelope_t* trust_signing_provider_descriptor_dto_list_envelope_2 = trust_signing_provider_descriptor_dto_list_envelope_parseFromJSON(jsontrust_signing_provider_descriptor_dto_list_envelope_1);
	cJSON* jsontrust_signing_provider_descriptor_dto_list_envelope_2 = trust_signing_provider_descriptor_dto_list_envelope_convertToJSON(trust_signing_provider_descriptor_dto_list_envelope_2);
	printf("repeating trust_signing_provider_descriptor_dto_list_envelope:\n%s\n", cJSON_Print(jsontrust_signing_provider_descriptor_dto_list_envelope_2));
}

int main() {
  test_trust_signing_provider_descriptor_dto_list_envelope(1);
  test_trust_signing_provider_descriptor_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_signing_provider_descriptor_dto_list_envelope_MAIN
#endif // trust_signing_provider_descriptor_dto_list_envelope_TEST
