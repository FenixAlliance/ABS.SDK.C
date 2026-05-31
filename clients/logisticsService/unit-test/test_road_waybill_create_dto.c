#ifndef road_waybill_create_dto_TEST
#define road_waybill_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define road_waybill_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/road_waybill_create_dto.h"
road_waybill_create_dto_t* instantiate_road_waybill_create_dto(int include_optional);



road_waybill_create_dto_t* instantiate_road_waybill_create_dto(int include_optional) {
  road_waybill_create_dto_t* road_waybill_create_dto = NULL;
  if (include_optional) {
    road_waybill_create_dto = road_waybill_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      56,
      1.337,
      1,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    road_waybill_create_dto = road_waybill_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      56,
      1.337,
      1,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return road_waybill_create_dto;
}


#ifdef road_waybill_create_dto_MAIN

void test_road_waybill_create_dto(int include_optional) {
    road_waybill_create_dto_t* road_waybill_create_dto_1 = instantiate_road_waybill_create_dto(include_optional);

	cJSON* jsonroad_waybill_create_dto_1 = road_waybill_create_dto_convertToJSON(road_waybill_create_dto_1);
	printf("road_waybill_create_dto :\n%s\n", cJSON_Print(jsonroad_waybill_create_dto_1));
	road_waybill_create_dto_t* road_waybill_create_dto_2 = road_waybill_create_dto_parseFromJSON(jsonroad_waybill_create_dto_1);
	cJSON* jsonroad_waybill_create_dto_2 = road_waybill_create_dto_convertToJSON(road_waybill_create_dto_2);
	printf("repeating road_waybill_create_dto:\n%s\n", cJSON_Print(jsonroad_waybill_create_dto_2));
}

int main() {
  test_road_waybill_create_dto(1);
  test_road_waybill_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // road_waybill_create_dto_MAIN
#endif // road_waybill_create_dto_TEST
