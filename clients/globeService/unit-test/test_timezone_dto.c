#ifndef timezone_dto_TEST
#define timezone_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_dto.h"
timezone_dto_t* instantiate_timezone_dto(int include_optional);



timezone_dto_t* instantiate_timezone_dto(int include_optional) {
  timezone_dto_t* timezone_dto = NULL;
  if (include_optional) {
    timezone_dto = timezone_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    timezone_dto = timezone_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return timezone_dto;
}


#ifdef timezone_dto_MAIN

void test_timezone_dto(int include_optional) {
    timezone_dto_t* timezone_dto_1 = instantiate_timezone_dto(include_optional);

	cJSON* jsontimezone_dto_1 = timezone_dto_convertToJSON(timezone_dto_1);
	printf("timezone_dto :\n%s\n", cJSON_Print(jsontimezone_dto_1));
	timezone_dto_t* timezone_dto_2 = timezone_dto_parseFromJSON(jsontimezone_dto_1);
	cJSON* jsontimezone_dto_2 = timezone_dto_convertToJSON(timezone_dto_2);
	printf("repeating timezone_dto:\n%s\n", cJSON_Print(jsontimezone_dto_2));
}

int main() {
  test_timezone_dto(1);
  test_timezone_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_dto_MAIN
#endif // timezone_dto_TEST
