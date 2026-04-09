#ifndef location_create_dto_TEST
#define location_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_create_dto.h"
location_create_dto_t* instantiate_location_create_dto(int include_optional);



location_create_dto_t* instantiate_location_create_dto(int include_optional) {
  location_create_dto_t* location_create_dto = NULL;
  if (include_optional) {
    location_create_dto = location_create_dto_create(
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
    location_create_dto = location_create_dto_create(
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

  return location_create_dto;
}


#ifdef location_create_dto_MAIN

void test_location_create_dto(int include_optional) {
    location_create_dto_t* location_create_dto_1 = instantiate_location_create_dto(include_optional);

	cJSON* jsonlocation_create_dto_1 = location_create_dto_convertToJSON(location_create_dto_1);
	printf("location_create_dto :\n%s\n", cJSON_Print(jsonlocation_create_dto_1));
	location_create_dto_t* location_create_dto_2 = location_create_dto_parseFromJSON(jsonlocation_create_dto_1);
	cJSON* jsonlocation_create_dto_2 = location_create_dto_convertToJSON(location_create_dto_2);
	printf("repeating location_create_dto:\n%s\n", cJSON_Print(jsonlocation_create_dto_2));
}

int main() {
  test_location_create_dto(1);
  test_location_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_create_dto_MAIN
#endif // location_create_dto_TEST
