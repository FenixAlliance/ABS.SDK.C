#ifndef user_external_login_dto_TEST
#define user_external_login_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_external_login_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_external_login_dto.h"
user_external_login_dto_t* instantiate_user_external_login_dto(int include_optional);



user_external_login_dto_t* instantiate_user_external_login_dto(int include_optional) {
  user_external_login_dto_t* user_external_login_dto = NULL;
  if (include_optional) {
    user_external_login_dto = user_external_login_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    user_external_login_dto = user_external_login_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return user_external_login_dto;
}


#ifdef user_external_login_dto_MAIN

void test_user_external_login_dto(int include_optional) {
    user_external_login_dto_t* user_external_login_dto_1 = instantiate_user_external_login_dto(include_optional);

	cJSON* jsonuser_external_login_dto_1 = user_external_login_dto_convertToJSON(user_external_login_dto_1);
	printf("user_external_login_dto :\n%s\n", cJSON_Print(jsonuser_external_login_dto_1));
	user_external_login_dto_t* user_external_login_dto_2 = user_external_login_dto_parseFromJSON(jsonuser_external_login_dto_1);
	cJSON* jsonuser_external_login_dto_2 = user_external_login_dto_convertToJSON(user_external_login_dto_2);
	printf("repeating user_external_login_dto:\n%s\n", cJSON_Print(jsonuser_external_login_dto_2));
}

int main() {
  test_user_external_login_dto(1);
  test_user_external_login_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_external_login_dto_MAIN
#endif // user_external_login_dto_TEST
