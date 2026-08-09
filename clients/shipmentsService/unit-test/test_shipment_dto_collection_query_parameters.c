#ifndef shipment_dto_collection_query_parameters_TEST
#define shipment_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipment_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipment_dto_collection_query_parameters.h"
shipment_dto_collection_query_parameters_t* instantiate_shipment_dto_collection_query_parameters(int include_optional);



shipment_dto_collection_query_parameters_t* instantiate_shipment_dto_collection_query_parameters(int include_optional) {
  shipment_dto_collection_query_parameters_t* shipment_dto_collection_query_parameters = NULL;
  if (include_optional) {
    shipment_dto_collection_query_parameters = shipment_dto_collection_query_parameters_create(
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
    shipment_dto_collection_query_parameters = shipment_dto_collection_query_parameters_create(
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

  return shipment_dto_collection_query_parameters;
}


#ifdef shipment_dto_collection_query_parameters_MAIN

void test_shipment_dto_collection_query_parameters(int include_optional) {
    shipment_dto_collection_query_parameters_t* shipment_dto_collection_query_parameters_1 = instantiate_shipment_dto_collection_query_parameters(include_optional);

	cJSON* jsonshipment_dto_collection_query_parameters_1 = shipment_dto_collection_query_parameters_convertToJSON(shipment_dto_collection_query_parameters_1);
	printf("shipment_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonshipment_dto_collection_query_parameters_1));
	shipment_dto_collection_query_parameters_t* shipment_dto_collection_query_parameters_2 = shipment_dto_collection_query_parameters_parseFromJSON(jsonshipment_dto_collection_query_parameters_1);
	cJSON* jsonshipment_dto_collection_query_parameters_2 = shipment_dto_collection_query_parameters_convertToJSON(shipment_dto_collection_query_parameters_2);
	printf("repeating shipment_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonshipment_dto_collection_query_parameters_2));
}

int main() {
  test_shipment_dto_collection_query_parameters(1);
  test_shipment_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipment_dto_collection_query_parameters_MAIN
#endif // shipment_dto_collection_query_parameters_TEST
