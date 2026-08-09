#ifndef provider_webhook_registration_created_dto_TEST
#define provider_webhook_registration_created_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define provider_webhook_registration_created_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/provider_webhook_registration_created_dto.h"
provider_webhook_registration_created_dto_t* instantiate_provider_webhook_registration_created_dto(int include_optional);



provider_webhook_registration_created_dto_t* instantiate_provider_webhook_registration_created_dto(int include_optional) {
  provider_webhook_registration_created_dto_t* provider_webhook_registration_created_dto = NULL;
  if (include_optional) {
    provider_webhook_registration_created_dto = provider_webhook_registration_created_dto_create(
      "0",
      "0",
      paymentsservice_provider_webhook_registration_created_dto_STATUS_Draft,
      "0",
      "0"
    );
  } else {
    provider_webhook_registration_created_dto = provider_webhook_registration_created_dto_create(
      "0",
      "0",
      paymentsservice_provider_webhook_registration_created_dto_STATUS_Draft,
      "0",
      "0"
    );
  }

  return provider_webhook_registration_created_dto;
}


#ifdef provider_webhook_registration_created_dto_MAIN

void test_provider_webhook_registration_created_dto(int include_optional) {
    provider_webhook_registration_created_dto_t* provider_webhook_registration_created_dto_1 = instantiate_provider_webhook_registration_created_dto(include_optional);

	cJSON* jsonprovider_webhook_registration_created_dto_1 = provider_webhook_registration_created_dto_convertToJSON(provider_webhook_registration_created_dto_1);
	printf("provider_webhook_registration_created_dto :\n%s\n", cJSON_Print(jsonprovider_webhook_registration_created_dto_1));
	provider_webhook_registration_created_dto_t* provider_webhook_registration_created_dto_2 = provider_webhook_registration_created_dto_parseFromJSON(jsonprovider_webhook_registration_created_dto_1);
	cJSON* jsonprovider_webhook_registration_created_dto_2 = provider_webhook_registration_created_dto_convertToJSON(provider_webhook_registration_created_dto_2);
	printf("repeating provider_webhook_registration_created_dto:\n%s\n", cJSON_Print(jsonprovider_webhook_registration_created_dto_2));
}

int main() {
  test_provider_webhook_registration_created_dto(1);
  test_provider_webhook_registration_created_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // provider_webhook_registration_created_dto_MAIN
#endif // provider_webhook_registration_created_dto_TEST
