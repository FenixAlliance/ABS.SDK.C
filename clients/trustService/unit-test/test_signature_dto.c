#ifndef signature_dto_TEST
#define signature_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_dto.h"
signature_dto_t* instantiate_signature_dto(int include_optional);



signature_dto_t* instantiate_signature_dto(int include_optional) {
  signature_dto_t* signature_dto = NULL;
  if (include_optional) {
    signature_dto = signature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      trustservice_signature_dto_SIGNINGSTATUS_Unknown,
      trustservice_signature_dto_VERIFICATIONSTATUS_Unknown,
      trustservice_signature_dto_SIGNATUREFORMAT_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    signature_dto = signature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      trustservice_signature_dto_SIGNINGSTATUS_Unknown,
      trustservice_signature_dto_VERIFICATIONSTATUS_Unknown,
      trustservice_signature_dto_SIGNATUREFORMAT_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return signature_dto;
}


#ifdef signature_dto_MAIN

void test_signature_dto(int include_optional) {
    signature_dto_t* signature_dto_1 = instantiate_signature_dto(include_optional);

	cJSON* jsonsignature_dto_1 = signature_dto_convertToJSON(signature_dto_1);
	printf("signature_dto :\n%s\n", cJSON_Print(jsonsignature_dto_1));
	signature_dto_t* signature_dto_2 = signature_dto_parseFromJSON(jsonsignature_dto_1);
	cJSON* jsonsignature_dto_2 = signature_dto_convertToJSON(signature_dto_2);
	printf("repeating signature_dto:\n%s\n", cJSON_Print(jsonsignature_dto_2));
}

int main() {
  test_signature_dto(1);
  test_signature_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_dto_MAIN
#endif // signature_dto_TEST
