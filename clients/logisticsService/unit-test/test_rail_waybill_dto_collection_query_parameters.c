#ifndef rail_waybill_dto_collection_query_parameters_TEST
#define rail_waybill_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rail_waybill_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rail_waybill_dto_collection_query_parameters.h"
rail_waybill_dto_collection_query_parameters_t* instantiate_rail_waybill_dto_collection_query_parameters(int include_optional);



rail_waybill_dto_collection_query_parameters_t* instantiate_rail_waybill_dto_collection_query_parameters(int include_optional) {
  rail_waybill_dto_collection_query_parameters_t* rail_waybill_dto_collection_query_parameters = NULL;
  if (include_optional) {
    rail_waybill_dto_collection_query_parameters = rail_waybill_dto_collection_query_parameters_create(
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
    rail_waybill_dto_collection_query_parameters = rail_waybill_dto_collection_query_parameters_create(
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

  return rail_waybill_dto_collection_query_parameters;
}


#ifdef rail_waybill_dto_collection_query_parameters_MAIN

void test_rail_waybill_dto_collection_query_parameters(int include_optional) {
    rail_waybill_dto_collection_query_parameters_t* rail_waybill_dto_collection_query_parameters_1 = instantiate_rail_waybill_dto_collection_query_parameters(include_optional);

	cJSON* jsonrail_waybill_dto_collection_query_parameters_1 = rail_waybill_dto_collection_query_parameters_convertToJSON(rail_waybill_dto_collection_query_parameters_1);
	printf("rail_waybill_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonrail_waybill_dto_collection_query_parameters_1));
	rail_waybill_dto_collection_query_parameters_t* rail_waybill_dto_collection_query_parameters_2 = rail_waybill_dto_collection_query_parameters_parseFromJSON(jsonrail_waybill_dto_collection_query_parameters_1);
	cJSON* jsonrail_waybill_dto_collection_query_parameters_2 = rail_waybill_dto_collection_query_parameters_convertToJSON(rail_waybill_dto_collection_query_parameters_2);
	printf("repeating rail_waybill_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonrail_waybill_dto_collection_query_parameters_2));
}

int main() {
  test_rail_waybill_dto_collection_query_parameters(1);
  test_rail_waybill_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // rail_waybill_dto_collection_query_parameters_MAIN
#endif // rail_waybill_dto_collection_query_parameters_TEST
