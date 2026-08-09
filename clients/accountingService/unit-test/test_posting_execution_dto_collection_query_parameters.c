#ifndef posting_execution_dto_collection_query_parameters_TEST
#define posting_execution_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define posting_execution_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/posting_execution_dto_collection_query_parameters.h"
posting_execution_dto_collection_query_parameters_t* instantiate_posting_execution_dto_collection_query_parameters(int include_optional);



posting_execution_dto_collection_query_parameters_t* instantiate_posting_execution_dto_collection_query_parameters(int include_optional) {
  posting_execution_dto_collection_query_parameters_t* posting_execution_dto_collection_query_parameters = NULL;
  if (include_optional) {
    posting_execution_dto_collection_query_parameters = posting_execution_dto_collection_query_parameters_create(
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
    posting_execution_dto_collection_query_parameters = posting_execution_dto_collection_query_parameters_create(
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

  return posting_execution_dto_collection_query_parameters;
}


#ifdef posting_execution_dto_collection_query_parameters_MAIN

void test_posting_execution_dto_collection_query_parameters(int include_optional) {
    posting_execution_dto_collection_query_parameters_t* posting_execution_dto_collection_query_parameters_1 = instantiate_posting_execution_dto_collection_query_parameters(include_optional);

	cJSON* jsonposting_execution_dto_collection_query_parameters_1 = posting_execution_dto_collection_query_parameters_convertToJSON(posting_execution_dto_collection_query_parameters_1);
	printf("posting_execution_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonposting_execution_dto_collection_query_parameters_1));
	posting_execution_dto_collection_query_parameters_t* posting_execution_dto_collection_query_parameters_2 = posting_execution_dto_collection_query_parameters_parseFromJSON(jsonposting_execution_dto_collection_query_parameters_1);
	cJSON* jsonposting_execution_dto_collection_query_parameters_2 = posting_execution_dto_collection_query_parameters_convertToJSON(posting_execution_dto_collection_query_parameters_2);
	printf("repeating posting_execution_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonposting_execution_dto_collection_query_parameters_2));
}

int main() {
  test_posting_execution_dto_collection_query_parameters(1);
  test_posting_execution_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // posting_execution_dto_collection_query_parameters_MAIN
#endif // posting_execution_dto_collection_query_parameters_TEST
