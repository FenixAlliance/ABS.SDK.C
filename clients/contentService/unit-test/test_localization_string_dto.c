#ifndef localization_string_dto_TEST
#define localization_string_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define localization_string_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/localization_string_dto.h"
localization_string_dto_t* instantiate_localization_string_dto(int include_optional);



localization_string_dto_t* instantiate_localization_string_dto(int include_optional) {
  localization_string_dto_t* localization_string_dto = NULL;
  if (include_optional) {
    localization_string_dto = localization_string_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    localization_string_dto = localization_string_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return localization_string_dto;
}


#ifdef localization_string_dto_MAIN

void test_localization_string_dto(int include_optional) {
    localization_string_dto_t* localization_string_dto_1 = instantiate_localization_string_dto(include_optional);

	cJSON* jsonlocalization_string_dto_1 = localization_string_dto_convertToJSON(localization_string_dto_1);
	printf("localization_string_dto :\n%s\n", cJSON_Print(jsonlocalization_string_dto_1));
	localization_string_dto_t* localization_string_dto_2 = localization_string_dto_parseFromJSON(jsonlocalization_string_dto_1);
	cJSON* jsonlocalization_string_dto_2 = localization_string_dto_convertToJSON(localization_string_dto_2);
	printf("repeating localization_string_dto:\n%s\n", cJSON_Print(jsonlocalization_string_dto_2));
}

int main() {
  test_localization_string_dto(1);
  test_localization_string_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // localization_string_dto_MAIN
#endif // localization_string_dto_TEST
