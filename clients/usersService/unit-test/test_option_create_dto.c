#ifndef option_create_dto_TEST
#define option_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define option_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/option_create_dto.h"
option_create_dto_t* instantiate_option_create_dto(int include_optional);



option_create_dto_t* instantiate_option_create_dto(int include_optional) {
  option_create_dto_t* option_create_dto = NULL;
  if (include_optional) {
    option_create_dto = option_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      56
    );
  } else {
    option_create_dto = option_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      56
    );
  }

  return option_create_dto;
}


#ifdef option_create_dto_MAIN

void test_option_create_dto(int include_optional) {
    option_create_dto_t* option_create_dto_1 = instantiate_option_create_dto(include_optional);

	cJSON* jsonoption_create_dto_1 = option_create_dto_convertToJSON(option_create_dto_1);
	printf("option_create_dto :\n%s\n", cJSON_Print(jsonoption_create_dto_1));
	option_create_dto_t* option_create_dto_2 = option_create_dto_parseFromJSON(jsonoption_create_dto_1);
	cJSON* jsonoption_create_dto_2 = option_create_dto_convertToJSON(option_create_dto_2);
	printf("repeating option_create_dto:\n%s\n", cJSON_Print(jsonoption_create_dto_2));
}

int main() {
  test_option_create_dto(1);
  test_option_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // option_create_dto_MAIN
#endif // option_create_dto_TEST
