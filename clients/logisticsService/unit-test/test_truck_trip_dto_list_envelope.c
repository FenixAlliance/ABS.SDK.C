#ifndef truck_trip_dto_list_envelope_TEST
#define truck_trip_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define truck_trip_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/truck_trip_dto_list_envelope.h"
truck_trip_dto_list_envelope_t* instantiate_truck_trip_dto_list_envelope(int include_optional);



truck_trip_dto_list_envelope_t* instantiate_truck_trip_dto_list_envelope(int include_optional) {
  truck_trip_dto_list_envelope_t* truck_trip_dto_list_envelope = NULL;
  if (include_optional) {
    truck_trip_dto_list_envelope = truck_trip_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    truck_trip_dto_list_envelope = truck_trip_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return truck_trip_dto_list_envelope;
}


#ifdef truck_trip_dto_list_envelope_MAIN

void test_truck_trip_dto_list_envelope(int include_optional) {
    truck_trip_dto_list_envelope_t* truck_trip_dto_list_envelope_1 = instantiate_truck_trip_dto_list_envelope(include_optional);

	cJSON* jsontruck_trip_dto_list_envelope_1 = truck_trip_dto_list_envelope_convertToJSON(truck_trip_dto_list_envelope_1);
	printf("truck_trip_dto_list_envelope :\n%s\n", cJSON_Print(jsontruck_trip_dto_list_envelope_1));
	truck_trip_dto_list_envelope_t* truck_trip_dto_list_envelope_2 = truck_trip_dto_list_envelope_parseFromJSON(jsontruck_trip_dto_list_envelope_1);
	cJSON* jsontruck_trip_dto_list_envelope_2 = truck_trip_dto_list_envelope_convertToJSON(truck_trip_dto_list_envelope_2);
	printf("repeating truck_trip_dto_list_envelope:\n%s\n", cJSON_Print(jsontruck_trip_dto_list_envelope_2));
}

int main() {
  test_truck_trip_dto_list_envelope(1);
  test_truck_trip_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // truck_trip_dto_list_envelope_MAIN
#endif // truck_trip_dto_list_envelope_TEST
