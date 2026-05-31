#ifndef vessel_create_dto_TEST
#define vessel_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vessel_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vessel_create_dto.h"
vessel_create_dto_t* instantiate_vessel_create_dto(int include_optional);



vessel_create_dto_t* instantiate_vessel_create_dto(int include_optional) {
  vessel_create_dto_t* vessel_create_dto = NULL;
  if (include_optional) {
    vessel_create_dto = vessel_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      56,
      1.337,
      1.337,
      1.337,
      56,
      "0"
    );
  } else {
    vessel_create_dto = vessel_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      56,
      1.337,
      1.337,
      1.337,
      56,
      "0"
    );
  }

  return vessel_create_dto;
}


#ifdef vessel_create_dto_MAIN

void test_vessel_create_dto(int include_optional) {
    vessel_create_dto_t* vessel_create_dto_1 = instantiate_vessel_create_dto(include_optional);

	cJSON* jsonvessel_create_dto_1 = vessel_create_dto_convertToJSON(vessel_create_dto_1);
	printf("vessel_create_dto :\n%s\n", cJSON_Print(jsonvessel_create_dto_1));
	vessel_create_dto_t* vessel_create_dto_2 = vessel_create_dto_parseFromJSON(jsonvessel_create_dto_1);
	cJSON* jsonvessel_create_dto_2 = vessel_create_dto_convertToJSON(vessel_create_dto_2);
	printf("repeating vessel_create_dto:\n%s\n", cJSON_Print(jsonvessel_create_dto_2));
}

int main() {
  test_vessel_create_dto(1);
  test_vessel_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // vessel_create_dto_MAIN
#endif // vessel_create_dto_TEST
