#ifndef truck_create_dto_TEST
#define truck_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define truck_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/truck_create_dto.h"
truck_create_dto_t* instantiate_truck_create_dto(int include_optional);



truck_create_dto_t* instantiate_truck_create_dto(int include_optional) {
  truck_create_dto_t* truck_create_dto = NULL;
  if (include_optional) {
    truck_create_dto = truck_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1.337,
      56,
      "0",
      "0",
      "0",
      1,
      1,
      "0"
    );
  } else {
    truck_create_dto = truck_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1.337,
      56,
      "0",
      "0",
      "0",
      1,
      1,
      "0"
    );
  }

  return truck_create_dto;
}


#ifdef truck_create_dto_MAIN

void test_truck_create_dto(int include_optional) {
    truck_create_dto_t* truck_create_dto_1 = instantiate_truck_create_dto(include_optional);

	cJSON* jsontruck_create_dto_1 = truck_create_dto_convertToJSON(truck_create_dto_1);
	printf("truck_create_dto :\n%s\n", cJSON_Print(jsontruck_create_dto_1));
	truck_create_dto_t* truck_create_dto_2 = truck_create_dto_parseFromJSON(jsontruck_create_dto_1);
	cJSON* jsontruck_create_dto_2 = truck_create_dto_convertToJSON(truck_create_dto_2);
	printf("repeating truck_create_dto:\n%s\n", cJSON_Print(jsontruck_create_dto_2));
}

int main() {
  test_truck_create_dto(1);
  test_truck_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // truck_create_dto_MAIN
#endif // truck_create_dto_TEST
