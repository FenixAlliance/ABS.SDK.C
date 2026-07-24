#ifndef signed_document_dto_TEST
#define signed_document_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signed_document_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signed_document_dto.h"
signed_document_dto_t* instantiate_signed_document_dto(int include_optional);



signed_document_dto_t* instantiate_signed_document_dto(int include_optional) {
  signed_document_dto_t* signed_document_dto = NULL;
  if (include_optional) {
    signed_document_dto = signed_document_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      trustservice_signed_document_dto_DOCUMENTSTANDARD_None,
      trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Unknown,
      trustservice_signed_document_dto_SIGNINGSTATUS_Unknown,
      trustservice_signed_document_dto_VERIFICATIONSTATUS_Unknown,
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
      "0",
      "0",
      trustservice_signed_document_dto_LOCKSTATE_Draft,
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    signed_document_dto = signed_document_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      trustservice_signed_document_dto_DOCUMENTSTANDARD_None,
      trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Unknown,
      trustservice_signed_document_dto_SIGNINGSTATUS_Unknown,
      trustservice_signed_document_dto_VERIFICATIONSTATUS_Unknown,
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
      "0",
      "0",
      trustservice_signed_document_dto_LOCKSTATE_Draft,
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return signed_document_dto;
}


#ifdef signed_document_dto_MAIN

void test_signed_document_dto(int include_optional) {
    signed_document_dto_t* signed_document_dto_1 = instantiate_signed_document_dto(include_optional);

	cJSON* jsonsigned_document_dto_1 = signed_document_dto_convertToJSON(signed_document_dto_1);
	printf("signed_document_dto :\n%s\n", cJSON_Print(jsonsigned_document_dto_1));
	signed_document_dto_t* signed_document_dto_2 = signed_document_dto_parseFromJSON(jsonsigned_document_dto_1);
	cJSON* jsonsigned_document_dto_2 = signed_document_dto_convertToJSON(signed_document_dto_2);
	printf("repeating signed_document_dto:\n%s\n", cJSON_Print(jsonsigned_document_dto_2));
}

int main() {
  test_signed_document_dto(1);
  test_signed_document_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signed_document_dto_MAIN
#endif // signed_document_dto_TEST
