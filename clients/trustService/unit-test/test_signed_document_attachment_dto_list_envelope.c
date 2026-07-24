#ifndef signed_document_attachment_dto_list_envelope_TEST
#define signed_document_attachment_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signed_document_attachment_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signed_document_attachment_dto_list_envelope.h"
signed_document_attachment_dto_list_envelope_t* instantiate_signed_document_attachment_dto_list_envelope(int include_optional);



signed_document_attachment_dto_list_envelope_t* instantiate_signed_document_attachment_dto_list_envelope(int include_optional) {
  signed_document_attachment_dto_list_envelope_t* signed_document_attachment_dto_list_envelope = NULL;
  if (include_optional) {
    signed_document_attachment_dto_list_envelope = signed_document_attachment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    signed_document_attachment_dto_list_envelope = signed_document_attachment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return signed_document_attachment_dto_list_envelope;
}


#ifdef signed_document_attachment_dto_list_envelope_MAIN

void test_signed_document_attachment_dto_list_envelope(int include_optional) {
    signed_document_attachment_dto_list_envelope_t* signed_document_attachment_dto_list_envelope_1 = instantiate_signed_document_attachment_dto_list_envelope(include_optional);

	cJSON* jsonsigned_document_attachment_dto_list_envelope_1 = signed_document_attachment_dto_list_envelope_convertToJSON(signed_document_attachment_dto_list_envelope_1);
	printf("signed_document_attachment_dto_list_envelope :\n%s\n", cJSON_Print(jsonsigned_document_attachment_dto_list_envelope_1));
	signed_document_attachment_dto_list_envelope_t* signed_document_attachment_dto_list_envelope_2 = signed_document_attachment_dto_list_envelope_parseFromJSON(jsonsigned_document_attachment_dto_list_envelope_1);
	cJSON* jsonsigned_document_attachment_dto_list_envelope_2 = signed_document_attachment_dto_list_envelope_convertToJSON(signed_document_attachment_dto_list_envelope_2);
	printf("repeating signed_document_attachment_dto_list_envelope:\n%s\n", cJSON_Print(jsonsigned_document_attachment_dto_list_envelope_2));
}

int main() {
  test_signed_document_attachment_dto_list_envelope(1);
  test_signed_document_attachment_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // signed_document_attachment_dto_list_envelope_MAIN
#endif // signed_document_attachment_dto_list_envelope_TEST
