#ifndef conversation_dto_collection_query_parameters_TEST
#define conversation_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define conversation_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/conversation_dto_collection_query_parameters.h"
conversation_dto_collection_query_parameters_t* instantiate_conversation_dto_collection_query_parameters(int include_optional);



conversation_dto_collection_query_parameters_t* instantiate_conversation_dto_collection_query_parameters(int include_optional) {
  conversation_dto_collection_query_parameters_t* conversation_dto_collection_query_parameters = NULL;
  if (include_optional) {
    conversation_dto_collection_query_parameters = conversation_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    conversation_dto_collection_query_parameters = conversation_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return conversation_dto_collection_query_parameters;
}


#ifdef conversation_dto_collection_query_parameters_MAIN

void test_conversation_dto_collection_query_parameters(int include_optional) {
    conversation_dto_collection_query_parameters_t* conversation_dto_collection_query_parameters_1 = instantiate_conversation_dto_collection_query_parameters(include_optional);

	cJSON* jsonconversation_dto_collection_query_parameters_1 = conversation_dto_collection_query_parameters_convertToJSON(conversation_dto_collection_query_parameters_1);
	printf("conversation_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonconversation_dto_collection_query_parameters_1));
	conversation_dto_collection_query_parameters_t* conversation_dto_collection_query_parameters_2 = conversation_dto_collection_query_parameters_parseFromJSON(jsonconversation_dto_collection_query_parameters_1);
	cJSON* jsonconversation_dto_collection_query_parameters_2 = conversation_dto_collection_query_parameters_convertToJSON(conversation_dto_collection_query_parameters_2);
	printf("repeating conversation_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonconversation_dto_collection_query_parameters_2));
}

int main() {
  test_conversation_dto_collection_query_parameters(1);
  test_conversation_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // conversation_dto_collection_query_parameters_MAIN
#endif // conversation_dto_collection_query_parameters_TEST
