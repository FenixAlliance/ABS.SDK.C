#ifndef location_dto_collection_query_parameters_TEST
#define location_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_dto_collection_query_parameters.h"
location_dto_collection_query_parameters_t* instantiate_location_dto_collection_query_parameters(int include_optional);



location_dto_collection_query_parameters_t* instantiate_location_dto_collection_query_parameters(int include_optional) {
  location_dto_collection_query_parameters_t* location_dto_collection_query_parameters = NULL;
  if (include_optional) {
    location_dto_collection_query_parameters = location_dto_collection_query_parameters_create(
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
    location_dto_collection_query_parameters = location_dto_collection_query_parameters_create(
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

  return location_dto_collection_query_parameters;
}


#ifdef location_dto_collection_query_parameters_MAIN

void test_location_dto_collection_query_parameters(int include_optional) {
    location_dto_collection_query_parameters_t* location_dto_collection_query_parameters_1 = instantiate_location_dto_collection_query_parameters(include_optional);

	cJSON* jsonlocation_dto_collection_query_parameters_1 = location_dto_collection_query_parameters_convertToJSON(location_dto_collection_query_parameters_1);
	printf("location_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonlocation_dto_collection_query_parameters_1));
	location_dto_collection_query_parameters_t* location_dto_collection_query_parameters_2 = location_dto_collection_query_parameters_parseFromJSON(jsonlocation_dto_collection_query_parameters_1);
	cJSON* jsonlocation_dto_collection_query_parameters_2 = location_dto_collection_query_parameters_convertToJSON(location_dto_collection_query_parameters_2);
	printf("repeating location_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonlocation_dto_collection_query_parameters_2));
}

int main() {
  test_location_dto_collection_query_parameters(1);
  test_location_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_dto_collection_query_parameters_MAIN
#endif // location_dto_collection_query_parameters_TEST
