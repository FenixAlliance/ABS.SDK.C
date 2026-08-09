#ifndef road_waybill_dto_collection_query_parameters_TEST
#define road_waybill_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define road_waybill_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/road_waybill_dto_collection_query_parameters.h"
road_waybill_dto_collection_query_parameters_t* instantiate_road_waybill_dto_collection_query_parameters(int include_optional);



road_waybill_dto_collection_query_parameters_t* instantiate_road_waybill_dto_collection_query_parameters(int include_optional) {
  road_waybill_dto_collection_query_parameters_t* road_waybill_dto_collection_query_parameters = NULL;
  if (include_optional) {
    road_waybill_dto_collection_query_parameters = road_waybill_dto_collection_query_parameters_create(
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
    road_waybill_dto_collection_query_parameters = road_waybill_dto_collection_query_parameters_create(
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

  return road_waybill_dto_collection_query_parameters;
}


#ifdef road_waybill_dto_collection_query_parameters_MAIN

void test_road_waybill_dto_collection_query_parameters(int include_optional) {
    road_waybill_dto_collection_query_parameters_t* road_waybill_dto_collection_query_parameters_1 = instantiate_road_waybill_dto_collection_query_parameters(include_optional);

	cJSON* jsonroad_waybill_dto_collection_query_parameters_1 = road_waybill_dto_collection_query_parameters_convertToJSON(road_waybill_dto_collection_query_parameters_1);
	printf("road_waybill_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonroad_waybill_dto_collection_query_parameters_1));
	road_waybill_dto_collection_query_parameters_t* road_waybill_dto_collection_query_parameters_2 = road_waybill_dto_collection_query_parameters_parseFromJSON(jsonroad_waybill_dto_collection_query_parameters_1);
	cJSON* jsonroad_waybill_dto_collection_query_parameters_2 = road_waybill_dto_collection_query_parameters_convertToJSON(road_waybill_dto_collection_query_parameters_2);
	printf("repeating road_waybill_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonroad_waybill_dto_collection_query_parameters_2));
}

int main() {
  test_road_waybill_dto_collection_query_parameters(1);
  test_road_waybill_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // road_waybill_dto_collection_query_parameters_MAIN
#endif // road_waybill_dto_collection_query_parameters_TEST
