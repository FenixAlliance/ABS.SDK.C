#ifndef inbox_message_dto_collection_query_parameters_TEST
#define inbox_message_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inbox_message_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inbox_message_dto_collection_query_parameters.h"
inbox_message_dto_collection_query_parameters_t* instantiate_inbox_message_dto_collection_query_parameters(int include_optional);



inbox_message_dto_collection_query_parameters_t* instantiate_inbox_message_dto_collection_query_parameters(int include_optional) {
  inbox_message_dto_collection_query_parameters_t* inbox_message_dto_collection_query_parameters = NULL;
  if (include_optional) {
    inbox_message_dto_collection_query_parameters = inbox_message_dto_collection_query_parameters_create(
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
    inbox_message_dto_collection_query_parameters = inbox_message_dto_collection_query_parameters_create(
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

  return inbox_message_dto_collection_query_parameters;
}


#ifdef inbox_message_dto_collection_query_parameters_MAIN

void test_inbox_message_dto_collection_query_parameters(int include_optional) {
    inbox_message_dto_collection_query_parameters_t* inbox_message_dto_collection_query_parameters_1 = instantiate_inbox_message_dto_collection_query_parameters(include_optional);

	cJSON* jsoninbox_message_dto_collection_query_parameters_1 = inbox_message_dto_collection_query_parameters_convertToJSON(inbox_message_dto_collection_query_parameters_1);
	printf("inbox_message_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoninbox_message_dto_collection_query_parameters_1));
	inbox_message_dto_collection_query_parameters_t* inbox_message_dto_collection_query_parameters_2 = inbox_message_dto_collection_query_parameters_parseFromJSON(jsoninbox_message_dto_collection_query_parameters_1);
	cJSON* jsoninbox_message_dto_collection_query_parameters_2 = inbox_message_dto_collection_query_parameters_convertToJSON(inbox_message_dto_collection_query_parameters_2);
	printf("repeating inbox_message_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoninbox_message_dto_collection_query_parameters_2));
}

int main() {
  test_inbox_message_dto_collection_query_parameters(1);
  test_inbox_message_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // inbox_message_dto_collection_query_parameters_MAIN
#endif // inbox_message_dto_collection_query_parameters_TEST
