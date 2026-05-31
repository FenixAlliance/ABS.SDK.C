#ifndef road_waybill_dto_list_envelope_TEST
#define road_waybill_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define road_waybill_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/road_waybill_dto_list_envelope.h"
road_waybill_dto_list_envelope_t* instantiate_road_waybill_dto_list_envelope(int include_optional);



road_waybill_dto_list_envelope_t* instantiate_road_waybill_dto_list_envelope(int include_optional) {
  road_waybill_dto_list_envelope_t* road_waybill_dto_list_envelope = NULL;
  if (include_optional) {
    road_waybill_dto_list_envelope = road_waybill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    road_waybill_dto_list_envelope = road_waybill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return road_waybill_dto_list_envelope;
}


#ifdef road_waybill_dto_list_envelope_MAIN

void test_road_waybill_dto_list_envelope(int include_optional) {
    road_waybill_dto_list_envelope_t* road_waybill_dto_list_envelope_1 = instantiate_road_waybill_dto_list_envelope(include_optional);

	cJSON* jsonroad_waybill_dto_list_envelope_1 = road_waybill_dto_list_envelope_convertToJSON(road_waybill_dto_list_envelope_1);
	printf("road_waybill_dto_list_envelope :\n%s\n", cJSON_Print(jsonroad_waybill_dto_list_envelope_1));
	road_waybill_dto_list_envelope_t* road_waybill_dto_list_envelope_2 = road_waybill_dto_list_envelope_parseFromJSON(jsonroad_waybill_dto_list_envelope_1);
	cJSON* jsonroad_waybill_dto_list_envelope_2 = road_waybill_dto_list_envelope_convertToJSON(road_waybill_dto_list_envelope_2);
	printf("repeating road_waybill_dto_list_envelope:\n%s\n", cJSON_Print(jsonroad_waybill_dto_list_envelope_2));
}

int main() {
  test_road_waybill_dto_list_envelope(1);
  test_road_waybill_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // road_waybill_dto_list_envelope_MAIN
#endif // road_waybill_dto_list_envelope_TEST
