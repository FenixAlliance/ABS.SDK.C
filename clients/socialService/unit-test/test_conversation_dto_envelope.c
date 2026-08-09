#ifndef conversation_dto_envelope_TEST
#define conversation_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define conversation_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/conversation_dto_envelope.h"
conversation_dto_envelope_t* instantiate_conversation_dto_envelope(int include_optional);

#include "test_conversation_dto.c"


conversation_dto_envelope_t* instantiate_conversation_dto_envelope(int include_optional) {
  conversation_dto_envelope_t* conversation_dto_envelope = NULL;
  if (include_optional) {
    conversation_dto_envelope = conversation_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_conversation_dto(0)
    );
  } else {
    conversation_dto_envelope = conversation_dto_envelope_create(
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

  return conversation_dto_envelope;
}


#ifdef conversation_dto_envelope_MAIN

void test_conversation_dto_envelope(int include_optional) {
    conversation_dto_envelope_t* conversation_dto_envelope_1 = instantiate_conversation_dto_envelope(include_optional);

	cJSON* jsonconversation_dto_envelope_1 = conversation_dto_envelope_convertToJSON(conversation_dto_envelope_1);
	printf("conversation_dto_envelope :\n%s\n", cJSON_Print(jsonconversation_dto_envelope_1));
	conversation_dto_envelope_t* conversation_dto_envelope_2 = conversation_dto_envelope_parseFromJSON(jsonconversation_dto_envelope_1);
	cJSON* jsonconversation_dto_envelope_2 = conversation_dto_envelope_convertToJSON(conversation_dto_envelope_2);
	printf("repeating conversation_dto_envelope:\n%s\n", cJSON_Print(jsonconversation_dto_envelope_2));
}

int main() {
  test_conversation_dto_envelope(1);
  test_conversation_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // conversation_dto_envelope_MAIN
#endif // conversation_dto_envelope_TEST
