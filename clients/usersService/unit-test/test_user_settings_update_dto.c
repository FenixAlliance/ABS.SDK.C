#ifndef user_settings_update_dto_TEST
#define user_settings_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_settings_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_settings_update_dto.h"
user_settings_update_dto_t* instantiate_user_settings_update_dto(int include_optional);



user_settings_update_dto_t* instantiate_user_settings_update_dto(int include_optional) {
  user_settings_update_dto_t* user_settings_update_dto = NULL;
  if (include_optional) {
    user_settings_update_dto = user_settings_update_dto_create(
      0,
      "0",
      "0",
      "0",
      usersservice_user_settings_update_dto_SITETHEME_System
    );
  } else {
    user_settings_update_dto = user_settings_update_dto_create(
      0,
      "0",
      "0",
      "0",
      usersservice_user_settings_update_dto_SITETHEME_System
    );
  }

  return user_settings_update_dto;
}


#ifdef user_settings_update_dto_MAIN

void test_user_settings_update_dto(int include_optional) {
    user_settings_update_dto_t* user_settings_update_dto_1 = instantiate_user_settings_update_dto(include_optional);

	cJSON* jsonuser_settings_update_dto_1 = user_settings_update_dto_convertToJSON(user_settings_update_dto_1);
	printf("user_settings_update_dto :\n%s\n", cJSON_Print(jsonuser_settings_update_dto_1));
	user_settings_update_dto_t* user_settings_update_dto_2 = user_settings_update_dto_parseFromJSON(jsonuser_settings_update_dto_1);
	cJSON* jsonuser_settings_update_dto_2 = user_settings_update_dto_convertToJSON(user_settings_update_dto_2);
	printf("repeating user_settings_update_dto:\n%s\n", cJSON_Print(jsonuser_settings_update_dto_2));
}

int main() {
  test_user_settings_update_dto(1);
  test_user_settings_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_settings_update_dto_MAIN
#endif // user_settings_update_dto_TEST
