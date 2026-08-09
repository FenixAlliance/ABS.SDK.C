#ifndef private_message_dto_collection_query_parameters_TEST
#define private_message_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define private_message_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/private_message_dto_collection_query_parameters.h"
private_message_dto_collection_query_parameters_t* instantiate_private_message_dto_collection_query_parameters(int include_optional);



private_message_dto_collection_query_parameters_t* instantiate_private_message_dto_collection_query_parameters(int include_optional) {
  private_message_dto_collection_query_parameters_t* private_message_dto_collection_query_parameters = NULL;
  if (include_optional) {
    private_message_dto_collection_query_parameters = private_message_dto_collection_query_parameters_create(
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
    private_message_dto_collection_query_parameters = private_message_dto_collection_query_parameters_create(
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

  return private_message_dto_collection_query_parameters;
}


#ifdef private_message_dto_collection_query_parameters_MAIN

void test_private_message_dto_collection_query_parameters(int include_optional) {
    private_message_dto_collection_query_parameters_t* private_message_dto_collection_query_parameters_1 = instantiate_private_message_dto_collection_query_parameters(include_optional);

	cJSON* jsonprivate_message_dto_collection_query_parameters_1 = private_message_dto_collection_query_parameters_convertToJSON(private_message_dto_collection_query_parameters_1);
	printf("private_message_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonprivate_message_dto_collection_query_parameters_1));
	private_message_dto_collection_query_parameters_t* private_message_dto_collection_query_parameters_2 = private_message_dto_collection_query_parameters_parseFromJSON(jsonprivate_message_dto_collection_query_parameters_1);
	cJSON* jsonprivate_message_dto_collection_query_parameters_2 = private_message_dto_collection_query_parameters_convertToJSON(private_message_dto_collection_query_parameters_2);
	printf("repeating private_message_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonprivate_message_dto_collection_query_parameters_2));
}

int main() {
  test_private_message_dto_collection_query_parameters(1);
  test_private_message_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // private_message_dto_collection_query_parameters_MAIN
#endif // private_message_dto_collection_query_parameters_TEST
