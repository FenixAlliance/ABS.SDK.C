#ifndef outbox_message_dto_collection_query_parameters_TEST
#define outbox_message_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define outbox_message_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/outbox_message_dto_collection_query_parameters.h"
outbox_message_dto_collection_query_parameters_t* instantiate_outbox_message_dto_collection_query_parameters(int include_optional);



outbox_message_dto_collection_query_parameters_t* instantiate_outbox_message_dto_collection_query_parameters(int include_optional) {
  outbox_message_dto_collection_query_parameters_t* outbox_message_dto_collection_query_parameters = NULL;
  if (include_optional) {
    outbox_message_dto_collection_query_parameters = outbox_message_dto_collection_query_parameters_create(
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
    outbox_message_dto_collection_query_parameters = outbox_message_dto_collection_query_parameters_create(
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

  return outbox_message_dto_collection_query_parameters;
}


#ifdef outbox_message_dto_collection_query_parameters_MAIN

void test_outbox_message_dto_collection_query_parameters(int include_optional) {
    outbox_message_dto_collection_query_parameters_t* outbox_message_dto_collection_query_parameters_1 = instantiate_outbox_message_dto_collection_query_parameters(include_optional);

	cJSON* jsonoutbox_message_dto_collection_query_parameters_1 = outbox_message_dto_collection_query_parameters_convertToJSON(outbox_message_dto_collection_query_parameters_1);
	printf("outbox_message_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonoutbox_message_dto_collection_query_parameters_1));
	outbox_message_dto_collection_query_parameters_t* outbox_message_dto_collection_query_parameters_2 = outbox_message_dto_collection_query_parameters_parseFromJSON(jsonoutbox_message_dto_collection_query_parameters_1);
	cJSON* jsonoutbox_message_dto_collection_query_parameters_2 = outbox_message_dto_collection_query_parameters_convertToJSON(outbox_message_dto_collection_query_parameters_2);
	printf("repeating outbox_message_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonoutbox_message_dto_collection_query_parameters_2));
}

int main() {
  test_outbox_message_dto_collection_query_parameters(1);
  test_outbox_message_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // outbox_message_dto_collection_query_parameters_MAIN
#endif // outbox_message_dto_collection_query_parameters_TEST
