#ifndef shift_dto_collection_query_parameters_TEST
#define shift_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shift_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shift_dto_collection_query_parameters.h"
shift_dto_collection_query_parameters_t* instantiate_shift_dto_collection_query_parameters(int include_optional);



shift_dto_collection_query_parameters_t* instantiate_shift_dto_collection_query_parameters(int include_optional) {
  shift_dto_collection_query_parameters_t* shift_dto_collection_query_parameters = NULL;
  if (include_optional) {
    shift_dto_collection_query_parameters = shift_dto_collection_query_parameters_create(
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
    shift_dto_collection_query_parameters = shift_dto_collection_query_parameters_create(
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

  return shift_dto_collection_query_parameters;
}


#ifdef shift_dto_collection_query_parameters_MAIN

void test_shift_dto_collection_query_parameters(int include_optional) {
    shift_dto_collection_query_parameters_t* shift_dto_collection_query_parameters_1 = instantiate_shift_dto_collection_query_parameters(include_optional);

	cJSON* jsonshift_dto_collection_query_parameters_1 = shift_dto_collection_query_parameters_convertToJSON(shift_dto_collection_query_parameters_1);
	printf("shift_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonshift_dto_collection_query_parameters_1));
	shift_dto_collection_query_parameters_t* shift_dto_collection_query_parameters_2 = shift_dto_collection_query_parameters_parseFromJSON(jsonshift_dto_collection_query_parameters_1);
	cJSON* jsonshift_dto_collection_query_parameters_2 = shift_dto_collection_query_parameters_convertToJSON(shift_dto_collection_query_parameters_2);
	printf("repeating shift_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonshift_dto_collection_query_parameters_2));
}

int main() {
  test_shift_dto_collection_query_parameters(1);
  test_shift_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // shift_dto_collection_query_parameters_MAIN
#endif // shift_dto_collection_query_parameters_TEST
