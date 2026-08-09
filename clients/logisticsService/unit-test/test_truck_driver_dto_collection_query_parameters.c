#ifndef truck_driver_dto_collection_query_parameters_TEST
#define truck_driver_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define truck_driver_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/truck_driver_dto_collection_query_parameters.h"
truck_driver_dto_collection_query_parameters_t* instantiate_truck_driver_dto_collection_query_parameters(int include_optional);



truck_driver_dto_collection_query_parameters_t* instantiate_truck_driver_dto_collection_query_parameters(int include_optional) {
  truck_driver_dto_collection_query_parameters_t* truck_driver_dto_collection_query_parameters = NULL;
  if (include_optional) {
    truck_driver_dto_collection_query_parameters = truck_driver_dto_collection_query_parameters_create(
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
    truck_driver_dto_collection_query_parameters = truck_driver_dto_collection_query_parameters_create(
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

  return truck_driver_dto_collection_query_parameters;
}


#ifdef truck_driver_dto_collection_query_parameters_MAIN

void test_truck_driver_dto_collection_query_parameters(int include_optional) {
    truck_driver_dto_collection_query_parameters_t* truck_driver_dto_collection_query_parameters_1 = instantiate_truck_driver_dto_collection_query_parameters(include_optional);

	cJSON* jsontruck_driver_dto_collection_query_parameters_1 = truck_driver_dto_collection_query_parameters_convertToJSON(truck_driver_dto_collection_query_parameters_1);
	printf("truck_driver_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontruck_driver_dto_collection_query_parameters_1));
	truck_driver_dto_collection_query_parameters_t* truck_driver_dto_collection_query_parameters_2 = truck_driver_dto_collection_query_parameters_parseFromJSON(jsontruck_driver_dto_collection_query_parameters_1);
	cJSON* jsontruck_driver_dto_collection_query_parameters_2 = truck_driver_dto_collection_query_parameters_convertToJSON(truck_driver_dto_collection_query_parameters_2);
	printf("repeating truck_driver_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontruck_driver_dto_collection_query_parameters_2));
}

int main() {
  test_truck_driver_dto_collection_query_parameters(1);
  test_truck_driver_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // truck_driver_dto_collection_query_parameters_MAIN
#endif // truck_driver_dto_collection_query_parameters_TEST
