#ifndef signature_verification_dto_TEST
#define signature_verification_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_verification_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_verification_dto.h"
signature_verification_dto_t* instantiate_signature_verification_dto(int include_optional);



signature_verification_dto_t* instantiate_signature_verification_dto(int include_optional) {
  signature_verification_dto_t* signature_verification_dto = NULL;
  if (include_optional) {
    signature_verification_dto = signature_verification_dto_create(
      1,
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    signature_verification_dto = signature_verification_dto_create(
      1,
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return signature_verification_dto;
}


#ifdef signature_verification_dto_MAIN

void test_signature_verification_dto(int include_optional) {
    signature_verification_dto_t* signature_verification_dto_1 = instantiate_signature_verification_dto(include_optional);

	cJSON* jsonsignature_verification_dto_1 = signature_verification_dto_convertToJSON(signature_verification_dto_1);
	printf("signature_verification_dto :\n%s\n", cJSON_Print(jsonsignature_verification_dto_1));
	signature_verification_dto_t* signature_verification_dto_2 = signature_verification_dto_parseFromJSON(jsonsignature_verification_dto_1);
	cJSON* jsonsignature_verification_dto_2 = signature_verification_dto_convertToJSON(signature_verification_dto_2);
	printf("repeating signature_verification_dto:\n%s\n", cJSON_Print(jsonsignature_verification_dto_2));
}

int main() {
  test_signature_verification_dto(1);
  test_signature_verification_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_verification_dto_MAIN
#endif // signature_verification_dto_TEST
