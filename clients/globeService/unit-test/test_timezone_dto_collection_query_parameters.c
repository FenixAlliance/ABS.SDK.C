#ifndef timezone_dto_collection_query_parameters_TEST
#define timezone_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_dto_collection_query_parameters.h"
timezone_dto_collection_query_parameters_t* instantiate_timezone_dto_collection_query_parameters(int include_optional);



timezone_dto_collection_query_parameters_t* instantiate_timezone_dto_collection_query_parameters(int include_optional) {
  timezone_dto_collection_query_parameters_t* timezone_dto_collection_query_parameters = NULL;
  if (include_optional) {
    timezone_dto_collection_query_parameters = timezone_dto_collection_query_parameters_create(
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
    timezone_dto_collection_query_parameters = timezone_dto_collection_query_parameters_create(
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

  return timezone_dto_collection_query_parameters;
}


#ifdef timezone_dto_collection_query_parameters_MAIN

void test_timezone_dto_collection_query_parameters(int include_optional) {
    timezone_dto_collection_query_parameters_t* timezone_dto_collection_query_parameters_1 = instantiate_timezone_dto_collection_query_parameters(include_optional);

	cJSON* jsontimezone_dto_collection_query_parameters_1 = timezone_dto_collection_query_parameters_convertToJSON(timezone_dto_collection_query_parameters_1);
	printf("timezone_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontimezone_dto_collection_query_parameters_1));
	timezone_dto_collection_query_parameters_t* timezone_dto_collection_query_parameters_2 = timezone_dto_collection_query_parameters_parseFromJSON(jsontimezone_dto_collection_query_parameters_1);
	cJSON* jsontimezone_dto_collection_query_parameters_2 = timezone_dto_collection_query_parameters_convertToJSON(timezone_dto_collection_query_parameters_2);
	printf("repeating timezone_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontimezone_dto_collection_query_parameters_2));
}

int main() {
  test_timezone_dto_collection_query_parameters(1);
  test_timezone_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_dto_collection_query_parameters_MAIN
#endif // timezone_dto_collection_query_parameters_TEST
