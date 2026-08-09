#ifndef follow_record_dto_collection_query_parameters_TEST
#define follow_record_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define follow_record_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/follow_record_dto_collection_query_parameters.h"
follow_record_dto_collection_query_parameters_t* instantiate_follow_record_dto_collection_query_parameters(int include_optional);



follow_record_dto_collection_query_parameters_t* instantiate_follow_record_dto_collection_query_parameters(int include_optional) {
  follow_record_dto_collection_query_parameters_t* follow_record_dto_collection_query_parameters = NULL;
  if (include_optional) {
    follow_record_dto_collection_query_parameters = follow_record_dto_collection_query_parameters_create(
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
    follow_record_dto_collection_query_parameters = follow_record_dto_collection_query_parameters_create(
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

  return follow_record_dto_collection_query_parameters;
}


#ifdef follow_record_dto_collection_query_parameters_MAIN

void test_follow_record_dto_collection_query_parameters(int include_optional) {
    follow_record_dto_collection_query_parameters_t* follow_record_dto_collection_query_parameters_1 = instantiate_follow_record_dto_collection_query_parameters(include_optional);

	cJSON* jsonfollow_record_dto_collection_query_parameters_1 = follow_record_dto_collection_query_parameters_convertToJSON(follow_record_dto_collection_query_parameters_1);
	printf("follow_record_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonfollow_record_dto_collection_query_parameters_1));
	follow_record_dto_collection_query_parameters_t* follow_record_dto_collection_query_parameters_2 = follow_record_dto_collection_query_parameters_parseFromJSON(jsonfollow_record_dto_collection_query_parameters_1);
	cJSON* jsonfollow_record_dto_collection_query_parameters_2 = follow_record_dto_collection_query_parameters_convertToJSON(follow_record_dto_collection_query_parameters_2);
	printf("repeating follow_record_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonfollow_record_dto_collection_query_parameters_2));
}

int main() {
  test_follow_record_dto_collection_query_parameters(1);
  test_follow_record_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // follow_record_dto_collection_query_parameters_MAIN
#endif // follow_record_dto_collection_query_parameters_TEST
