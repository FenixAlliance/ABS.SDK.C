#ifndef vessel_update_dto_TEST
#define vessel_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vessel_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vessel_update_dto.h"
vessel_update_dto_t* instantiate_vessel_update_dto(int include_optional);



vessel_update_dto_t* instantiate_vessel_update_dto(int include_optional) {
  vessel_update_dto_t* vessel_update_dto = NULL;
  if (include_optional) {
    vessel_update_dto = vessel_update_dto_create(
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
    vessel_update_dto = vessel_update_dto_create(
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

  return vessel_update_dto;
}


#ifdef vessel_update_dto_MAIN

void test_vessel_update_dto(int include_optional) {
    vessel_update_dto_t* vessel_update_dto_1 = instantiate_vessel_update_dto(include_optional);

	cJSON* jsonvessel_update_dto_1 = vessel_update_dto_convertToJSON(vessel_update_dto_1);
	printf("vessel_update_dto :\n%s\n", cJSON_Print(jsonvessel_update_dto_1));
	vessel_update_dto_t* vessel_update_dto_2 = vessel_update_dto_parseFromJSON(jsonvessel_update_dto_1);
	cJSON* jsonvessel_update_dto_2 = vessel_update_dto_convertToJSON(vessel_update_dto_2);
	printf("repeating vessel_update_dto:\n%s\n", cJSON_Print(jsonvessel_update_dto_2));
}

int main() {
  test_vessel_update_dto(1);
  test_vessel_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // vessel_update_dto_MAIN
#endif // vessel_update_dto_TEST
