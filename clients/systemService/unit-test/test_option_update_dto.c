#ifndef option_update_dto_TEST
#define option_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define option_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/option_update_dto.h"
option_update_dto_t* instantiate_option_update_dto(int include_optional);



option_update_dto_t* instantiate_option_update_dto(int include_optional) {
  option_update_dto_t* option_update_dto = NULL;
  if (include_optional) {
    option_update_dto = option_update_dto_create(
      "0",
      "0",
      "0",
      1,
      1,
      1,
      56
    );
  } else {
    option_update_dto = option_update_dto_create(
      "0",
      "0",
      "0",
      1,
      1,
      1,
      56
    );
  }

  return option_update_dto;
}


#ifdef option_update_dto_MAIN

void test_option_update_dto(int include_optional) {
    option_update_dto_t* option_update_dto_1 = instantiate_option_update_dto(include_optional);

	cJSON* jsonoption_update_dto_1 = option_update_dto_convertToJSON(option_update_dto_1);
	printf("option_update_dto :\n%s\n", cJSON_Print(jsonoption_update_dto_1));
	option_update_dto_t* option_update_dto_2 = option_update_dto_parseFromJSON(jsonoption_update_dto_1);
	cJSON* jsonoption_update_dto_2 = option_update_dto_convertToJSON(option_update_dto_2);
	printf("repeating option_update_dto:\n%s\n", cJSON_Print(jsonoption_update_dto_2));
}

int main() {
  test_option_update_dto(1);
  test_option_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // option_update_dto_MAIN
#endif // option_update_dto_TEST
