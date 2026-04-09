#ifndef location_update_dto_TEST
#define location_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_update_dto.h"
location_update_dto_t* instantiate_location_update_dto(int include_optional);



location_update_dto_t* instantiate_location_update_dto(int include_optional) {
  location_update_dto_t* location_update_dto = NULL;
  if (include_optional) {
    location_update_dto = location_update_dto_create(
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
      1.337,
      1.337,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    location_update_dto = location_update_dto_create(
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
      1.337,
      1.337,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return location_update_dto;
}


#ifdef location_update_dto_MAIN

void test_location_update_dto(int include_optional) {
    location_update_dto_t* location_update_dto_1 = instantiate_location_update_dto(include_optional);

	cJSON* jsonlocation_update_dto_1 = location_update_dto_convertToJSON(location_update_dto_1);
	printf("location_update_dto :\n%s\n", cJSON_Print(jsonlocation_update_dto_1));
	location_update_dto_t* location_update_dto_2 = location_update_dto_parseFromJSON(jsonlocation_update_dto_1);
	cJSON* jsonlocation_update_dto_2 = location_update_dto_convertToJSON(location_update_dto_2);
	printf("repeating location_update_dto:\n%s\n", cJSON_Print(jsonlocation_update_dto_2));
}

int main() {
  test_location_update_dto(1);
  test_location_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_update_dto_MAIN
#endif // location_update_dto_TEST
