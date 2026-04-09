#ifndef grant_dto_TEST
#define grant_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define grant_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/grant_dto.h"
grant_dto_t* instantiate_grant_dto(int include_optional);



grant_dto_t* instantiate_grant_dto(int include_optional) {
  grant_dto_t* grant_dto = NULL;
  if (include_optional) {
    grant_dto = grant_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    grant_dto = grant_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return grant_dto;
}


#ifdef grant_dto_MAIN

void test_grant_dto(int include_optional) {
    grant_dto_t* grant_dto_1 = instantiate_grant_dto(include_optional);

	cJSON* jsongrant_dto_1 = grant_dto_convertToJSON(grant_dto_1);
	printf("grant_dto :\n%s\n", cJSON_Print(jsongrant_dto_1));
	grant_dto_t* grant_dto_2 = grant_dto_parseFromJSON(jsongrant_dto_1);
	cJSON* jsongrant_dto_2 = grant_dto_convertToJSON(grant_dto_2);
	printf("repeating grant_dto:\n%s\n", cJSON_Print(jsongrant_dto_2));
}

int main() {
  test_grant_dto(1);
  test_grant_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // grant_dto_MAIN
#endif // grant_dto_TEST
