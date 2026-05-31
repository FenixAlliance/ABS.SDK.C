#ifndef road_waybill_dto_envelope_TEST
#define road_waybill_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define road_waybill_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/road_waybill_dto_envelope.h"
road_waybill_dto_envelope_t* instantiate_road_waybill_dto_envelope(int include_optional);

#include "test_road_waybill_dto.c"


road_waybill_dto_envelope_t* instantiate_road_waybill_dto_envelope(int include_optional) {
  road_waybill_dto_envelope_t* road_waybill_dto_envelope = NULL;
  if (include_optional) {
    road_waybill_dto_envelope = road_waybill_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_road_waybill_dto(0)
    );
  } else {
    road_waybill_dto_envelope = road_waybill_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return road_waybill_dto_envelope;
}


#ifdef road_waybill_dto_envelope_MAIN

void test_road_waybill_dto_envelope(int include_optional) {
    road_waybill_dto_envelope_t* road_waybill_dto_envelope_1 = instantiate_road_waybill_dto_envelope(include_optional);

	cJSON* jsonroad_waybill_dto_envelope_1 = road_waybill_dto_envelope_convertToJSON(road_waybill_dto_envelope_1);
	printf("road_waybill_dto_envelope :\n%s\n", cJSON_Print(jsonroad_waybill_dto_envelope_1));
	road_waybill_dto_envelope_t* road_waybill_dto_envelope_2 = road_waybill_dto_envelope_parseFromJSON(jsonroad_waybill_dto_envelope_1);
	cJSON* jsonroad_waybill_dto_envelope_2 = road_waybill_dto_envelope_convertToJSON(road_waybill_dto_envelope_2);
	printf("repeating road_waybill_dto_envelope:\n%s\n", cJSON_Print(jsonroad_waybill_dto_envelope_2));
}

int main() {
  test_road_waybill_dto_envelope(1);
  test_road_waybill_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // road_waybill_dto_envelope_MAIN
#endif // road_waybill_dto_envelope_TEST
