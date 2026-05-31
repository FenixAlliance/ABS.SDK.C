#ifndef truck_driver_update_dto_TEST
#define truck_driver_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define truck_driver_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/truck_driver_update_dto.h"
truck_driver_update_dto_t* instantiate_truck_driver_update_dto(int include_optional);



truck_driver_update_dto_t* instantiate_truck_driver_update_dto(int include_optional) {
  truck_driver_update_dto_t* truck_driver_update_dto = NULL;
  if (include_optional) {
    truck_driver_update_dto = truck_driver_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    truck_driver_update_dto = truck_driver_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return truck_driver_update_dto;
}


#ifdef truck_driver_update_dto_MAIN

void test_truck_driver_update_dto(int include_optional) {
    truck_driver_update_dto_t* truck_driver_update_dto_1 = instantiate_truck_driver_update_dto(include_optional);

	cJSON* jsontruck_driver_update_dto_1 = truck_driver_update_dto_convertToJSON(truck_driver_update_dto_1);
	printf("truck_driver_update_dto :\n%s\n", cJSON_Print(jsontruck_driver_update_dto_1));
	truck_driver_update_dto_t* truck_driver_update_dto_2 = truck_driver_update_dto_parseFromJSON(jsontruck_driver_update_dto_1);
	cJSON* jsontruck_driver_update_dto_2 = truck_driver_update_dto_convertToJSON(truck_driver_update_dto_2);
	printf("repeating truck_driver_update_dto:\n%s\n", cJSON_Print(jsontruck_driver_update_dto_2));
}

int main() {
  test_truck_driver_update_dto(1);
  test_truck_driver_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // truck_driver_update_dto_MAIN
#endif // truck_driver_update_dto_TEST
