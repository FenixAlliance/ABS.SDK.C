#ifndef conversation_attachment_upload_result_dto_TEST
#define conversation_attachment_upload_result_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define conversation_attachment_upload_result_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/conversation_attachment_upload_result_dto.h"
conversation_attachment_upload_result_dto_t* instantiate_conversation_attachment_upload_result_dto(int include_optional);



conversation_attachment_upload_result_dto_t* instantiate_conversation_attachment_upload_result_dto(int include_optional) {
  conversation_attachment_upload_result_dto_t* conversation_attachment_upload_result_dto = NULL;
  if (include_optional) {
    conversation_attachment_upload_result_dto = conversation_attachment_upload_result_dto_create(
      "0",
      "0",
      "0",
      56
    );
  } else {
    conversation_attachment_upload_result_dto = conversation_attachment_upload_result_dto_create(
      "0",
      "0",
      "0",
      56
    );
  }

  return conversation_attachment_upload_result_dto;
}


#ifdef conversation_attachment_upload_result_dto_MAIN

void test_conversation_attachment_upload_result_dto(int include_optional) {
    conversation_attachment_upload_result_dto_t* conversation_attachment_upload_result_dto_1 = instantiate_conversation_attachment_upload_result_dto(include_optional);

	cJSON* jsonconversation_attachment_upload_result_dto_1 = conversation_attachment_upload_result_dto_convertToJSON(conversation_attachment_upload_result_dto_1);
	printf("conversation_attachment_upload_result_dto :\n%s\n", cJSON_Print(jsonconversation_attachment_upload_result_dto_1));
	conversation_attachment_upload_result_dto_t* conversation_attachment_upload_result_dto_2 = conversation_attachment_upload_result_dto_parseFromJSON(jsonconversation_attachment_upload_result_dto_1);
	cJSON* jsonconversation_attachment_upload_result_dto_2 = conversation_attachment_upload_result_dto_convertToJSON(conversation_attachment_upload_result_dto_2);
	printf("repeating conversation_attachment_upload_result_dto:\n%s\n", cJSON_Print(jsonconversation_attachment_upload_result_dto_2));
}

int main() {
  test_conversation_attachment_upload_result_dto(1);
  test_conversation_attachment_upload_result_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // conversation_attachment_upload_result_dto_MAIN
#endif // conversation_attachment_upload_result_dto_TEST
