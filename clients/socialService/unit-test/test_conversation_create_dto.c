#ifndef conversation_create_dto_TEST
#define conversation_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define conversation_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/conversation_create_dto.h"
conversation_create_dto_t* instantiate_conversation_create_dto(int include_optional);



conversation_create_dto_t* instantiate_conversation_create_dto(int include_optional) {
  conversation_create_dto_t* conversation_create_dto = NULL;
  if (include_optional) {
    conversation_create_dto = conversation_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    conversation_create_dto = conversation_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return conversation_create_dto;
}


#ifdef conversation_create_dto_MAIN

void test_conversation_create_dto(int include_optional) {
    conversation_create_dto_t* conversation_create_dto_1 = instantiate_conversation_create_dto(include_optional);

	cJSON* jsonconversation_create_dto_1 = conversation_create_dto_convertToJSON(conversation_create_dto_1);
	printf("conversation_create_dto :\n%s\n", cJSON_Print(jsonconversation_create_dto_1));
	conversation_create_dto_t* conversation_create_dto_2 = conversation_create_dto_parseFromJSON(jsonconversation_create_dto_1);
	cJSON* jsonconversation_create_dto_2 = conversation_create_dto_convertToJSON(conversation_create_dto_2);
	printf("repeating conversation_create_dto:\n%s\n", cJSON_Print(jsonconversation_create_dto_2));
}

int main() {
  test_conversation_create_dto(1);
  test_conversation_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // conversation_create_dto_MAIN
#endif // conversation_create_dto_TEST
