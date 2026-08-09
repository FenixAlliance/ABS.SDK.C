#ifndef return_request_dto_collection_query_parameters_TEST
#define return_request_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_request_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_request_dto_collection_query_parameters.h"
return_request_dto_collection_query_parameters_t* instantiate_return_request_dto_collection_query_parameters(int include_optional);



return_request_dto_collection_query_parameters_t* instantiate_return_request_dto_collection_query_parameters(int include_optional) {
  return_request_dto_collection_query_parameters_t* return_request_dto_collection_query_parameters = NULL;
  if (include_optional) {
    return_request_dto_collection_query_parameters = return_request_dto_collection_query_parameters_create(
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
    return_request_dto_collection_query_parameters = return_request_dto_collection_query_parameters_create(
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

  return return_request_dto_collection_query_parameters;
}


#ifdef return_request_dto_collection_query_parameters_MAIN

void test_return_request_dto_collection_query_parameters(int include_optional) {
    return_request_dto_collection_query_parameters_t* return_request_dto_collection_query_parameters_1 = instantiate_return_request_dto_collection_query_parameters(include_optional);

	cJSON* jsonreturn_request_dto_collection_query_parameters_1 = return_request_dto_collection_query_parameters_convertToJSON(return_request_dto_collection_query_parameters_1);
	printf("return_request_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonreturn_request_dto_collection_query_parameters_1));
	return_request_dto_collection_query_parameters_t* return_request_dto_collection_query_parameters_2 = return_request_dto_collection_query_parameters_parseFromJSON(jsonreturn_request_dto_collection_query_parameters_1);
	cJSON* jsonreturn_request_dto_collection_query_parameters_2 = return_request_dto_collection_query_parameters_convertToJSON(return_request_dto_collection_query_parameters_2);
	printf("repeating return_request_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonreturn_request_dto_collection_query_parameters_2));
}

int main() {
  test_return_request_dto_collection_query_parameters(1);
  test_return_request_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_request_dto_collection_query_parameters_MAIN
#endif // return_request_dto_collection_query_parameters_TEST
