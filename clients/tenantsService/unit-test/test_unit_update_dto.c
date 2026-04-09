#ifndef unit_update_dto_TEST
#define unit_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unit_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unit_update_dto.h"
unit_update_dto_t* instantiate_unit_update_dto(int include_optional);



unit_update_dto_t* instantiate_unit_update_dto(int include_optional) {
  unit_update_dto_t* unit_update_dto = NULL;
  if (include_optional) {
    unit_update_dto = unit_update_dto_create(
      "0",
      1.337,
      "0"
    );
  } else {
    unit_update_dto = unit_update_dto_create(
      "0",
      1.337,
      "0"
    );
  }

  return unit_update_dto;
}


#ifdef unit_update_dto_MAIN

void test_unit_update_dto(int include_optional) {
    unit_update_dto_t* unit_update_dto_1 = instantiate_unit_update_dto(include_optional);

	cJSON* jsonunit_update_dto_1 = unit_update_dto_convertToJSON(unit_update_dto_1);
	printf("unit_update_dto :\n%s\n", cJSON_Print(jsonunit_update_dto_1));
	unit_update_dto_t* unit_update_dto_2 = unit_update_dto_parseFromJSON(jsonunit_update_dto_1);
	cJSON* jsonunit_update_dto_2 = unit_update_dto_convertToJSON(unit_update_dto_2);
	printf("repeating unit_update_dto:\n%s\n", cJSON_Print(jsonunit_update_dto_2));
}

int main() {
  test_unit_update_dto(1);
  test_unit_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // unit_update_dto_MAIN
#endif // unit_update_dto_TEST
