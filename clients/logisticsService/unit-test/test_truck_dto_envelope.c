#ifndef truck_dto_envelope_TEST
#define truck_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define truck_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/truck_dto_envelope.h"
truck_dto_envelope_t* instantiate_truck_dto_envelope(int include_optional);

#include "test_truck_dto.c"


truck_dto_envelope_t* instantiate_truck_dto_envelope(int include_optional) {
  truck_dto_envelope_t* truck_dto_envelope = NULL;
  if (include_optional) {
    truck_dto_envelope = truck_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_truck_dto(0)
    );
  } else {
    truck_dto_envelope = truck_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return truck_dto_envelope;
}


#ifdef truck_dto_envelope_MAIN

void test_truck_dto_envelope(int include_optional) {
    truck_dto_envelope_t* truck_dto_envelope_1 = instantiate_truck_dto_envelope(include_optional);

	cJSON* jsontruck_dto_envelope_1 = truck_dto_envelope_convertToJSON(truck_dto_envelope_1);
	printf("truck_dto_envelope :\n%s\n", cJSON_Print(jsontruck_dto_envelope_1));
	truck_dto_envelope_t* truck_dto_envelope_2 = truck_dto_envelope_parseFromJSON(jsontruck_dto_envelope_1);
	cJSON* jsontruck_dto_envelope_2 = truck_dto_envelope_convertToJSON(truck_dto_envelope_2);
	printf("repeating truck_dto_envelope:\n%s\n", cJSON_Print(jsontruck_dto_envelope_2));
}

int main() {
  test_truck_dto_envelope(1);
  test_truck_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // truck_dto_envelope_MAIN
#endif // truck_dto_envelope_TEST
