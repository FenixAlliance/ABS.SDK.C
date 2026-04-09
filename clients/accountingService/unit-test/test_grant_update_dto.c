#ifndef grant_update_dto_TEST
#define grant_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define grant_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/grant_update_dto.h"
grant_update_dto_t* instantiate_grant_update_dto(int include_optional);



grant_update_dto_t* instantiate_grant_update_dto(int include_optional) {
  grant_update_dto_t* grant_update_dto = NULL;
  if (include_optional) {
    grant_update_dto = grant_update_dto_create(
      "0",
      "0"
    );
  } else {
    grant_update_dto = grant_update_dto_create(
      "0",
      "0"
    );
  }

  return grant_update_dto;
}


#ifdef grant_update_dto_MAIN

void test_grant_update_dto(int include_optional) {
    grant_update_dto_t* grant_update_dto_1 = instantiate_grant_update_dto(include_optional);

	cJSON* jsongrant_update_dto_1 = grant_update_dto_convertToJSON(grant_update_dto_1);
	printf("grant_update_dto :\n%s\n", cJSON_Print(jsongrant_update_dto_1));
	grant_update_dto_t* grant_update_dto_2 = grant_update_dto_parseFromJSON(jsongrant_update_dto_1);
	cJSON* jsongrant_update_dto_2 = grant_update_dto_convertToJSON(grant_update_dto_2);
	printf("repeating grant_update_dto:\n%s\n", cJSON_Print(jsongrant_update_dto_2));
}

int main() {
  test_grant_update_dto(1);
  test_grant_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // grant_update_dto_MAIN
#endif // grant_update_dto_TEST
