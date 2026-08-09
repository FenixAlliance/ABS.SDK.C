#ifndef grant_dto_collection_query_parameters_TEST
#define grant_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define grant_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/grant_dto_collection_query_parameters.h"
grant_dto_collection_query_parameters_t* instantiate_grant_dto_collection_query_parameters(int include_optional);



grant_dto_collection_query_parameters_t* instantiate_grant_dto_collection_query_parameters(int include_optional) {
  grant_dto_collection_query_parameters_t* grant_dto_collection_query_parameters = NULL;
  if (include_optional) {
    grant_dto_collection_query_parameters = grant_dto_collection_query_parameters_create(
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
    grant_dto_collection_query_parameters = grant_dto_collection_query_parameters_create(
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

  return grant_dto_collection_query_parameters;
}


#ifdef grant_dto_collection_query_parameters_MAIN

void test_grant_dto_collection_query_parameters(int include_optional) {
    grant_dto_collection_query_parameters_t* grant_dto_collection_query_parameters_1 = instantiate_grant_dto_collection_query_parameters(include_optional);

	cJSON* jsongrant_dto_collection_query_parameters_1 = grant_dto_collection_query_parameters_convertToJSON(grant_dto_collection_query_parameters_1);
	printf("grant_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsongrant_dto_collection_query_parameters_1));
	grant_dto_collection_query_parameters_t* grant_dto_collection_query_parameters_2 = grant_dto_collection_query_parameters_parseFromJSON(jsongrant_dto_collection_query_parameters_1);
	cJSON* jsongrant_dto_collection_query_parameters_2 = grant_dto_collection_query_parameters_convertToJSON(grant_dto_collection_query_parameters_2);
	printf("repeating grant_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsongrant_dto_collection_query_parameters_2));
}

int main() {
  test_grant_dto_collection_query_parameters(1);
  test_grant_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // grant_dto_collection_query_parameters_MAIN
#endif // grant_dto_collection_query_parameters_TEST
