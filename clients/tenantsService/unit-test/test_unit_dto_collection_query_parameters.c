#ifndef unit_dto_collection_query_parameters_TEST
#define unit_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unit_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unit_dto_collection_query_parameters.h"
unit_dto_collection_query_parameters_t* instantiate_unit_dto_collection_query_parameters(int include_optional);



unit_dto_collection_query_parameters_t* instantiate_unit_dto_collection_query_parameters(int include_optional) {
  unit_dto_collection_query_parameters_t* unit_dto_collection_query_parameters = NULL;
  if (include_optional) {
    unit_dto_collection_query_parameters = unit_dto_collection_query_parameters_create(
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
    unit_dto_collection_query_parameters = unit_dto_collection_query_parameters_create(
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

  return unit_dto_collection_query_parameters;
}


#ifdef unit_dto_collection_query_parameters_MAIN

void test_unit_dto_collection_query_parameters(int include_optional) {
    unit_dto_collection_query_parameters_t* unit_dto_collection_query_parameters_1 = instantiate_unit_dto_collection_query_parameters(include_optional);

	cJSON* jsonunit_dto_collection_query_parameters_1 = unit_dto_collection_query_parameters_convertToJSON(unit_dto_collection_query_parameters_1);
	printf("unit_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonunit_dto_collection_query_parameters_1));
	unit_dto_collection_query_parameters_t* unit_dto_collection_query_parameters_2 = unit_dto_collection_query_parameters_parseFromJSON(jsonunit_dto_collection_query_parameters_1);
	cJSON* jsonunit_dto_collection_query_parameters_2 = unit_dto_collection_query_parameters_convertToJSON(unit_dto_collection_query_parameters_2);
	printf("repeating unit_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonunit_dto_collection_query_parameters_2));
}

int main() {
  test_unit_dto_collection_query_parameters(1);
  test_unit_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // unit_dto_collection_query_parameters_MAIN
#endif // unit_dto_collection_query_parameters_TEST
