#ifndef grant_create_dto_TEST
#define grant_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define grant_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/grant_create_dto.h"
grant_create_dto_t* instantiate_grant_create_dto(int include_optional);



grant_create_dto_t* instantiate_grant_create_dto(int include_optional) {
  grant_create_dto_t* grant_create_dto = NULL;
  if (include_optional) {
    grant_create_dto = grant_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    grant_create_dto = grant_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return grant_create_dto;
}


#ifdef grant_create_dto_MAIN

void test_grant_create_dto(int include_optional) {
    grant_create_dto_t* grant_create_dto_1 = instantiate_grant_create_dto(include_optional);

	cJSON* jsongrant_create_dto_1 = grant_create_dto_convertToJSON(grant_create_dto_1);
	printf("grant_create_dto :\n%s\n", cJSON_Print(jsongrant_create_dto_1));
	grant_create_dto_t* grant_create_dto_2 = grant_create_dto_parseFromJSON(jsongrant_create_dto_1);
	cJSON* jsongrant_create_dto_2 = grant_create_dto_convertToJSON(grant_create_dto_2);
	printf("repeating grant_create_dto:\n%s\n", cJSON_Print(jsongrant_create_dto_2));
}

int main() {
  test_grant_create_dto(1);
  test_grant_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // grant_create_dto_MAIN
#endif // grant_create_dto_TEST
