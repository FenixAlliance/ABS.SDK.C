#ifndef conversation_attachment_upload_result_dto_envelope_TEST
#define conversation_attachment_upload_result_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define conversation_attachment_upload_result_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/conversation_attachment_upload_result_dto_envelope.h"
conversation_attachment_upload_result_dto_envelope_t* instantiate_conversation_attachment_upload_result_dto_envelope(int include_optional);

#include "test_conversation_attachment_upload_result_dto.c"


conversation_attachment_upload_result_dto_envelope_t* instantiate_conversation_attachment_upload_result_dto_envelope(int include_optional) {
  conversation_attachment_upload_result_dto_envelope_t* conversation_attachment_upload_result_dto_envelope = NULL;
  if (include_optional) {
    conversation_attachment_upload_result_dto_envelope = conversation_attachment_upload_result_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_conversation_attachment_upload_result_dto(0)
    );
  } else {
    conversation_attachment_upload_result_dto_envelope = conversation_attachment_upload_result_dto_envelope_create(
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

  return conversation_attachment_upload_result_dto_envelope;
}


#ifdef conversation_attachment_upload_result_dto_envelope_MAIN

void test_conversation_attachment_upload_result_dto_envelope(int include_optional) {
    conversation_attachment_upload_result_dto_envelope_t* conversation_attachment_upload_result_dto_envelope_1 = instantiate_conversation_attachment_upload_result_dto_envelope(include_optional);

	cJSON* jsonconversation_attachment_upload_result_dto_envelope_1 = conversation_attachment_upload_result_dto_envelope_convertToJSON(conversation_attachment_upload_result_dto_envelope_1);
	printf("conversation_attachment_upload_result_dto_envelope :\n%s\n", cJSON_Print(jsonconversation_attachment_upload_result_dto_envelope_1));
	conversation_attachment_upload_result_dto_envelope_t* conversation_attachment_upload_result_dto_envelope_2 = conversation_attachment_upload_result_dto_envelope_parseFromJSON(jsonconversation_attachment_upload_result_dto_envelope_1);
	cJSON* jsonconversation_attachment_upload_result_dto_envelope_2 = conversation_attachment_upload_result_dto_envelope_convertToJSON(conversation_attachment_upload_result_dto_envelope_2);
	printf("repeating conversation_attachment_upload_result_dto_envelope:\n%s\n", cJSON_Print(jsonconversation_attachment_upload_result_dto_envelope_2));
}

int main() {
  test_conversation_attachment_upload_result_dto_envelope(1);
  test_conversation_attachment_upload_result_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // conversation_attachment_upload_result_dto_envelope_MAIN
#endif // conversation_attachment_upload_result_dto_envelope_TEST
