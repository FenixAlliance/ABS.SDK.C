#ifndef provider_webhook_registration_created_dto_envelope_TEST
#define provider_webhook_registration_created_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define provider_webhook_registration_created_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/provider_webhook_registration_created_dto_envelope.h"
provider_webhook_registration_created_dto_envelope_t* instantiate_provider_webhook_registration_created_dto_envelope(int include_optional);

#include "test_provider_webhook_registration_created_dto.c"


provider_webhook_registration_created_dto_envelope_t* instantiate_provider_webhook_registration_created_dto_envelope(int include_optional) {
  provider_webhook_registration_created_dto_envelope_t* provider_webhook_registration_created_dto_envelope = NULL;
  if (include_optional) {
    provider_webhook_registration_created_dto_envelope = provider_webhook_registration_created_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_provider_webhook_registration_created_dto(0)
    );
  } else {
    provider_webhook_registration_created_dto_envelope = provider_webhook_registration_created_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      NULL
    );
  }

  return provider_webhook_registration_created_dto_envelope;
}


#ifdef provider_webhook_registration_created_dto_envelope_MAIN

void test_provider_webhook_registration_created_dto_envelope(int include_optional) {
    provider_webhook_registration_created_dto_envelope_t* provider_webhook_registration_created_dto_envelope_1 = instantiate_provider_webhook_registration_created_dto_envelope(include_optional);

	cJSON* jsonprovider_webhook_registration_created_dto_envelope_1 = provider_webhook_registration_created_dto_envelope_convertToJSON(provider_webhook_registration_created_dto_envelope_1);
	printf("provider_webhook_registration_created_dto_envelope :\n%s\n", cJSON_Print(jsonprovider_webhook_registration_created_dto_envelope_1));
	provider_webhook_registration_created_dto_envelope_t* provider_webhook_registration_created_dto_envelope_2 = provider_webhook_registration_created_dto_envelope_parseFromJSON(jsonprovider_webhook_registration_created_dto_envelope_1);
	cJSON* jsonprovider_webhook_registration_created_dto_envelope_2 = provider_webhook_registration_created_dto_envelope_convertToJSON(provider_webhook_registration_created_dto_envelope_2);
	printf("repeating provider_webhook_registration_created_dto_envelope:\n%s\n", cJSON_Print(jsonprovider_webhook_registration_created_dto_envelope_2));
}

int main() {
  test_provider_webhook_registration_created_dto_envelope(1);
  test_provider_webhook_registration_created_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // provider_webhook_registration_created_dto_envelope_MAIN
#endif // provider_webhook_registration_created_dto_envelope_TEST
