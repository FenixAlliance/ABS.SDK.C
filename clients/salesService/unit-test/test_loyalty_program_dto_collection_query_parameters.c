#ifndef loyalty_program_dto_collection_query_parameters_TEST
#define loyalty_program_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loyalty_program_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loyalty_program_dto_collection_query_parameters.h"
loyalty_program_dto_collection_query_parameters_t* instantiate_loyalty_program_dto_collection_query_parameters(int include_optional);



loyalty_program_dto_collection_query_parameters_t* instantiate_loyalty_program_dto_collection_query_parameters(int include_optional) {
  loyalty_program_dto_collection_query_parameters_t* loyalty_program_dto_collection_query_parameters = NULL;
  if (include_optional) {
    loyalty_program_dto_collection_query_parameters = loyalty_program_dto_collection_query_parameters_create(
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
    loyalty_program_dto_collection_query_parameters = loyalty_program_dto_collection_query_parameters_create(
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

  return loyalty_program_dto_collection_query_parameters;
}


#ifdef loyalty_program_dto_collection_query_parameters_MAIN

void test_loyalty_program_dto_collection_query_parameters(int include_optional) {
    loyalty_program_dto_collection_query_parameters_t* loyalty_program_dto_collection_query_parameters_1 = instantiate_loyalty_program_dto_collection_query_parameters(include_optional);

	cJSON* jsonloyalty_program_dto_collection_query_parameters_1 = loyalty_program_dto_collection_query_parameters_convertToJSON(loyalty_program_dto_collection_query_parameters_1);
	printf("loyalty_program_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonloyalty_program_dto_collection_query_parameters_1));
	loyalty_program_dto_collection_query_parameters_t* loyalty_program_dto_collection_query_parameters_2 = loyalty_program_dto_collection_query_parameters_parseFromJSON(jsonloyalty_program_dto_collection_query_parameters_1);
	cJSON* jsonloyalty_program_dto_collection_query_parameters_2 = loyalty_program_dto_collection_query_parameters_convertToJSON(loyalty_program_dto_collection_query_parameters_2);
	printf("repeating loyalty_program_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonloyalty_program_dto_collection_query_parameters_2));
}

int main() {
  test_loyalty_program_dto_collection_query_parameters(1);
  test_loyalty_program_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // loyalty_program_dto_collection_query_parameters_MAIN
#endif // loyalty_program_dto_collection_query_parameters_TEST
