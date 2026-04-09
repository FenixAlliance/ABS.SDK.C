#ifndef user_update_dto_TEST
#define user_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_update_dto.h"
user_update_dto_t* instantiate_user_update_dto(int include_optional);



user_update_dto_t* instantiate_user_update_dto(int include_optional) {
  user_update_dto_t* user_update_dto = NULL;
  if (include_optional) {
    user_update_dto = user_update_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      usersservice_user_update_dto_GENDER_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      usersservice_user_update_dto_AVAILABILITY_DND
    );
  } else {
    user_update_dto = user_update_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      usersservice_user_update_dto_GENDER_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      usersservice_user_update_dto_AVAILABILITY_DND
    );
  }

  return user_update_dto;
}


#ifdef user_update_dto_MAIN

void test_user_update_dto(int include_optional) {
    user_update_dto_t* user_update_dto_1 = instantiate_user_update_dto(include_optional);

	cJSON* jsonuser_update_dto_1 = user_update_dto_convertToJSON(user_update_dto_1);
	printf("user_update_dto :\n%s\n", cJSON_Print(jsonuser_update_dto_1));
	user_update_dto_t* user_update_dto_2 = user_update_dto_parseFromJSON(jsonuser_update_dto_1);
	cJSON* jsonuser_update_dto_2 = user_update_dto_convertToJSON(user_update_dto_2);
	printf("repeating user_update_dto:\n%s\n", cJSON_Print(jsonuser_update_dto_2));
}

int main() {
  test_user_update_dto(1);
  test_user_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_update_dto_MAIN
#endif // user_update_dto_TEST
