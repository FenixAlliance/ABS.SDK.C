#ifndef unit_group_create_dto_TEST
#define unit_group_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unit_group_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unit_group_create_dto.h"
unit_group_create_dto_t* instantiate_unit_group_create_dto(int include_optional);



unit_group_create_dto_t* instantiate_unit_group_create_dto(int include_optional) {
  unit_group_create_dto_t* unit_group_create_dto = NULL;
  if (include_optional) {
    unit_group_create_dto = unit_group_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    unit_group_create_dto = unit_group_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return unit_group_create_dto;
}


#ifdef unit_group_create_dto_MAIN

void test_unit_group_create_dto(int include_optional) {
    unit_group_create_dto_t* unit_group_create_dto_1 = instantiate_unit_group_create_dto(include_optional);

	cJSON* jsonunit_group_create_dto_1 = unit_group_create_dto_convertToJSON(unit_group_create_dto_1);
	printf("unit_group_create_dto :\n%s\n", cJSON_Print(jsonunit_group_create_dto_1));
	unit_group_create_dto_t* unit_group_create_dto_2 = unit_group_create_dto_parseFromJSON(jsonunit_group_create_dto_1);
	cJSON* jsonunit_group_create_dto_2 = unit_group_create_dto_convertToJSON(unit_group_create_dto_2);
	printf("repeating unit_group_create_dto:\n%s\n", cJSON_Print(jsonunit_group_create_dto_2));
}

int main() {
  test_unit_group_create_dto(1);
  test_unit_group_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // unit_group_create_dto_MAIN
#endif // unit_group_create_dto_TEST
