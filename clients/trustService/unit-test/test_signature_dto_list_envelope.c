#ifndef signature_dto_list_envelope_TEST
#define signature_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_dto_list_envelope.h"
signature_dto_list_envelope_t* instantiate_signature_dto_list_envelope(int include_optional);



signature_dto_list_envelope_t* instantiate_signature_dto_list_envelope(int include_optional) {
  signature_dto_list_envelope_t* signature_dto_list_envelope = NULL;
  if (include_optional) {
    signature_dto_list_envelope = signature_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    signature_dto_list_envelope = signature_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return signature_dto_list_envelope;
}


#ifdef signature_dto_list_envelope_MAIN

void test_signature_dto_list_envelope(int include_optional) {
    signature_dto_list_envelope_t* signature_dto_list_envelope_1 = instantiate_signature_dto_list_envelope(include_optional);

	cJSON* jsonsignature_dto_list_envelope_1 = signature_dto_list_envelope_convertToJSON(signature_dto_list_envelope_1);
	printf("signature_dto_list_envelope :\n%s\n", cJSON_Print(jsonsignature_dto_list_envelope_1));
	signature_dto_list_envelope_t* signature_dto_list_envelope_2 = signature_dto_list_envelope_parseFromJSON(jsonsignature_dto_list_envelope_1);
	cJSON* jsonsignature_dto_list_envelope_2 = signature_dto_list_envelope_convertToJSON(signature_dto_list_envelope_2);
	printf("repeating signature_dto_list_envelope:\n%s\n", cJSON_Print(jsonsignature_dto_list_envelope_2));
}

int main() {
  test_signature_dto_list_envelope(1);
  test_signature_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_dto_list_envelope_MAIN
#endif // signature_dto_list_envelope_TEST
