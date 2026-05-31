#ifndef rail_waybill_create_dto_TEST
#define rail_waybill_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rail_waybill_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rail_waybill_create_dto.h"
rail_waybill_create_dto_t* instantiate_rail_waybill_create_dto(int include_optional);



rail_waybill_create_dto_t* instantiate_rail_waybill_create_dto(int include_optional) {
  rail_waybill_create_dto_t* rail_waybill_create_dto = NULL;
  if (include_optional) {
    rail_waybill_create_dto = rail_waybill_create_dto_create(
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
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      56,
      1.337,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    rail_waybill_create_dto = rail_waybill_create_dto_create(
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
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      56,
      1.337,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return rail_waybill_create_dto;
}


#ifdef rail_waybill_create_dto_MAIN

void test_rail_waybill_create_dto(int include_optional) {
    rail_waybill_create_dto_t* rail_waybill_create_dto_1 = instantiate_rail_waybill_create_dto(include_optional);

	cJSON* jsonrail_waybill_create_dto_1 = rail_waybill_create_dto_convertToJSON(rail_waybill_create_dto_1);
	printf("rail_waybill_create_dto :\n%s\n", cJSON_Print(jsonrail_waybill_create_dto_1));
	rail_waybill_create_dto_t* rail_waybill_create_dto_2 = rail_waybill_create_dto_parseFromJSON(jsonrail_waybill_create_dto_1);
	cJSON* jsonrail_waybill_create_dto_2 = rail_waybill_create_dto_convertToJSON(rail_waybill_create_dto_2);
	printf("repeating rail_waybill_create_dto:\n%s\n", cJSON_Print(jsonrail_waybill_create_dto_2));
}

int main() {
  test_rail_waybill_create_dto(1);
  test_rail_waybill_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // rail_waybill_create_dto_MAIN
#endif // rail_waybill_create_dto_TEST
