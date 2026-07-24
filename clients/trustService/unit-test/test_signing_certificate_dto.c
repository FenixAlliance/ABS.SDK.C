#ifndef signing_certificate_dto_TEST
#define signing_certificate_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_certificate_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_certificate_dto.h"
signing_certificate_dto_t* instantiate_signing_certificate_dto(int include_optional);



signing_certificate_dto_t* instantiate_signing_certificate_dto(int include_optional) {
  signing_certificate_dto_t* signing_certificate_dto = NULL;
  if (include_optional) {
    signing_certificate_dto = signing_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      trustservice_signing_certificate_dto_CERTIFICATETYPE_AuthSignedCertificate,
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_certificate_dto_CERTIFICATESTATUS_Unknown,
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    signing_certificate_dto = signing_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      trustservice_signing_certificate_dto_CERTIFICATETYPE_AuthSignedCertificate,
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_certificate_dto_CERTIFICATESTATUS_Unknown,
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return signing_certificate_dto;
}


#ifdef signing_certificate_dto_MAIN

void test_signing_certificate_dto(int include_optional) {
    signing_certificate_dto_t* signing_certificate_dto_1 = instantiate_signing_certificate_dto(include_optional);

	cJSON* jsonsigning_certificate_dto_1 = signing_certificate_dto_convertToJSON(signing_certificate_dto_1);
	printf("signing_certificate_dto :\n%s\n", cJSON_Print(jsonsigning_certificate_dto_1));
	signing_certificate_dto_t* signing_certificate_dto_2 = signing_certificate_dto_parseFromJSON(jsonsigning_certificate_dto_1);
	cJSON* jsonsigning_certificate_dto_2 = signing_certificate_dto_convertToJSON(signing_certificate_dto_2);
	printf("repeating signing_certificate_dto:\n%s\n", cJSON_Print(jsonsigning_certificate_dto_2));
}

int main() {
  test_signing_certificate_dto(1);
  test_signing_certificate_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_certificate_dto_MAIN
#endif // signing_certificate_dto_TEST
