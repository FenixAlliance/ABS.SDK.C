#ifndef user_admin_update_dto_TEST
#define user_admin_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_admin_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_admin_update_dto.h"
user_admin_update_dto_t* instantiate_user_admin_update_dto(int include_optional);



user_admin_update_dto_t* instantiate_user_admin_update_dto(int include_optional) {
  user_admin_update_dto_t* user_admin_update_dto = NULL;
  if (include_optional) {
    user_admin_update_dto = user_admin_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    user_admin_update_dto = user_admin_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return user_admin_update_dto;
}


#ifdef user_admin_update_dto_MAIN

void test_user_admin_update_dto(int include_optional) {
    user_admin_update_dto_t* user_admin_update_dto_1 = instantiate_user_admin_update_dto(include_optional);

	cJSON* jsonuser_admin_update_dto_1 = user_admin_update_dto_convertToJSON(user_admin_update_dto_1);
	printf("user_admin_update_dto :\n%s\n", cJSON_Print(jsonuser_admin_update_dto_1));
	user_admin_update_dto_t* user_admin_update_dto_2 = user_admin_update_dto_parseFromJSON(jsonuser_admin_update_dto_1);
	cJSON* jsonuser_admin_update_dto_2 = user_admin_update_dto_convertToJSON(user_admin_update_dto_2);
	printf("repeating user_admin_update_dto:\n%s\n", cJSON_Print(jsonuser_admin_update_dto_2));
}

int main() {
  test_user_admin_update_dto(1);
  test_user_admin_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_admin_update_dto_MAIN
#endif // user_admin_update_dto_TEST
