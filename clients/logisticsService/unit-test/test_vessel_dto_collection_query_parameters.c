#ifndef vessel_dto_collection_query_parameters_TEST
#define vessel_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vessel_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vessel_dto_collection_query_parameters.h"
vessel_dto_collection_query_parameters_t* instantiate_vessel_dto_collection_query_parameters(int include_optional);



vessel_dto_collection_query_parameters_t* instantiate_vessel_dto_collection_query_parameters(int include_optional) {
  vessel_dto_collection_query_parameters_t* vessel_dto_collection_query_parameters = NULL;
  if (include_optional) {
    vessel_dto_collection_query_parameters = vessel_dto_collection_query_parameters_create(
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
    vessel_dto_collection_query_parameters = vessel_dto_collection_query_parameters_create(
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

  return vessel_dto_collection_query_parameters;
}


#ifdef vessel_dto_collection_query_parameters_MAIN

void test_vessel_dto_collection_query_parameters(int include_optional) {
    vessel_dto_collection_query_parameters_t* vessel_dto_collection_query_parameters_1 = instantiate_vessel_dto_collection_query_parameters(include_optional);

	cJSON* jsonvessel_dto_collection_query_parameters_1 = vessel_dto_collection_query_parameters_convertToJSON(vessel_dto_collection_query_parameters_1);
	printf("vessel_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonvessel_dto_collection_query_parameters_1));
	vessel_dto_collection_query_parameters_t* vessel_dto_collection_query_parameters_2 = vessel_dto_collection_query_parameters_parseFromJSON(jsonvessel_dto_collection_query_parameters_1);
	cJSON* jsonvessel_dto_collection_query_parameters_2 = vessel_dto_collection_query_parameters_convertToJSON(vessel_dto_collection_query_parameters_2);
	printf("repeating vessel_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonvessel_dto_collection_query_parameters_2));
}

int main() {
  test_vessel_dto_collection_query_parameters(1);
  test_vessel_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // vessel_dto_collection_query_parameters_MAIN
#endif // vessel_dto_collection_query_parameters_TEST
