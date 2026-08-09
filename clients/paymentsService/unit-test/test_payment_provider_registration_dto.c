#ifndef payment_provider_registration_dto_TEST
#define payment_provider_registration_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_provider_registration_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_provider_registration_dto.h"
payment_provider_registration_dto_t* instantiate_payment_provider_registration_dto(int include_optional);



payment_provider_registration_dto_t* instantiate_payment_provider_registration_dto(int include_optional) {
  payment_provider_registration_dto_t* payment_provider_registration_dto = NULL;
  if (include_optional) {
    payment_provider_registration_dto = payment_provider_registration_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1,
      paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_TenantManaged,
      "0",
      paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_None,
      paymentsservice_payment_provider_registration_dto_STATUS_Draft
    );
  } else {
    payment_provider_registration_dto = payment_provider_registration_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1,
      paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_TenantManaged,
      "0",
      paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_None,
      paymentsservice_payment_provider_registration_dto_STATUS_Draft
    );
  }

  return payment_provider_registration_dto;
}


#ifdef payment_provider_registration_dto_MAIN

void test_payment_provider_registration_dto(int include_optional) {
    payment_provider_registration_dto_t* payment_provider_registration_dto_1 = instantiate_payment_provider_registration_dto(include_optional);

	cJSON* jsonpayment_provider_registration_dto_1 = payment_provider_registration_dto_convertToJSON(payment_provider_registration_dto_1);
	printf("payment_provider_registration_dto :\n%s\n", cJSON_Print(jsonpayment_provider_registration_dto_1));
	payment_provider_registration_dto_t* payment_provider_registration_dto_2 = payment_provider_registration_dto_parseFromJSON(jsonpayment_provider_registration_dto_1);
	cJSON* jsonpayment_provider_registration_dto_2 = payment_provider_registration_dto_convertToJSON(payment_provider_registration_dto_2);
	printf("repeating payment_provider_registration_dto:\n%s\n", cJSON_Print(jsonpayment_provider_registration_dto_2));
}

int main() {
  test_payment_provider_registration_dto(1);
  test_payment_provider_registration_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_provider_registration_dto_MAIN
#endif // payment_provider_registration_dto_TEST
