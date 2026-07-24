#ifndef signed_document_update_dto_TEST
#define signed_document_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signed_document_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signed_document_update_dto.h"
signed_document_update_dto_t* instantiate_signed_document_update_dto(int include_optional);



signed_document_update_dto_t* instantiate_signed_document_update_dto(int include_optional) {
  signed_document_update_dto_t* signed_document_update_dto = NULL;
  if (include_optional) {
    signed_document_update_dto = signed_document_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signed_document_update_dto_DOCUMENTSTANDARD_None,
      trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_Unknown,
      "0",
      "0"
    );
  } else {
    signed_document_update_dto = signed_document_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signed_document_update_dto_DOCUMENTSTANDARD_None,
      trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_Unknown,
      "0",
      "0"
    );
  }

  return signed_document_update_dto;
}


#ifdef signed_document_update_dto_MAIN

void test_signed_document_update_dto(int include_optional) {
    signed_document_update_dto_t* signed_document_update_dto_1 = instantiate_signed_document_update_dto(include_optional);

	cJSON* jsonsigned_document_update_dto_1 = signed_document_update_dto_convertToJSON(signed_document_update_dto_1);
	printf("signed_document_update_dto :\n%s\n", cJSON_Print(jsonsigned_document_update_dto_1));
	signed_document_update_dto_t* signed_document_update_dto_2 = signed_document_update_dto_parseFromJSON(jsonsigned_document_update_dto_1);
	cJSON* jsonsigned_document_update_dto_2 = signed_document_update_dto_convertToJSON(signed_document_update_dto_2);
	printf("repeating signed_document_update_dto:\n%s\n", cJSON_Print(jsonsigned_document_update_dto_2));
}

int main() {
  test_signed_document_update_dto(1);
  test_signed_document_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signed_document_update_dto_MAIN
#endif // signed_document_update_dto_TEST
