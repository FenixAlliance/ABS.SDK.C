#ifndef user_dto_collection_query_parameters_TEST
#define user_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_dto_collection_query_parameters.h"
user_dto_collection_query_parameters_t* instantiate_user_dto_collection_query_parameters(int include_optional);



user_dto_collection_query_parameters_t* instantiate_user_dto_collection_query_parameters(int include_optional) {
  user_dto_collection_query_parameters_t* user_dto_collection_query_parameters = NULL;
  if (include_optional) {
    user_dto_collection_query_parameters = user_dto_collection_query_parameters_create(
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
    user_dto_collection_query_parameters = user_dto_collection_query_parameters_create(
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

  return user_dto_collection_query_parameters;
}


#ifdef user_dto_collection_query_parameters_MAIN

void test_user_dto_collection_query_parameters(int include_optional) {
    user_dto_collection_query_parameters_t* user_dto_collection_query_parameters_1 = instantiate_user_dto_collection_query_parameters(include_optional);

	cJSON* jsonuser_dto_collection_query_parameters_1 = user_dto_collection_query_parameters_convertToJSON(user_dto_collection_query_parameters_1);
	printf("user_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonuser_dto_collection_query_parameters_1));
	user_dto_collection_query_parameters_t* user_dto_collection_query_parameters_2 = user_dto_collection_query_parameters_parseFromJSON(jsonuser_dto_collection_query_parameters_1);
	cJSON* jsonuser_dto_collection_query_parameters_2 = user_dto_collection_query_parameters_convertToJSON(user_dto_collection_query_parameters_2);
	printf("repeating user_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonuser_dto_collection_query_parameters_2));
}

int main() {
  test_user_dto_collection_query_parameters(1);
  test_user_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_dto_collection_query_parameters_MAIN
#endif // user_dto_collection_query_parameters_TEST
