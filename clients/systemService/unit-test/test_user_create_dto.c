#ifndef user_create_dto_TEST
#define user_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_create_dto.h"
user_create_dto_t* instantiate_user_create_dto(int include_optional);



user_create_dto_t* instantiate_user_create_dto(int include_optional) {
  user_create_dto_t* user_create_dto = NULL;
  if (include_optional) {
    user_create_dto = user_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      systemservice_user_create_dto_GENDER_Unknown,
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
      "0"
    );
  } else {
    user_create_dto = user_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      systemservice_user_create_dto_GENDER_Unknown,
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
      "0"
    );
  }

  return user_create_dto;
}


#ifdef user_create_dto_MAIN

void test_user_create_dto(int include_optional) {
    user_create_dto_t* user_create_dto_1 = instantiate_user_create_dto(include_optional);

	cJSON* jsonuser_create_dto_1 = user_create_dto_convertToJSON(user_create_dto_1);
	printf("user_create_dto :\n%s\n", cJSON_Print(jsonuser_create_dto_1));
	user_create_dto_t* user_create_dto_2 = user_create_dto_parseFromJSON(jsonuser_create_dto_1);
	cJSON* jsonuser_create_dto_2 = user_create_dto_convertToJSON(user_create_dto_2);
	printf("repeating user_create_dto:\n%s\n", cJSON_Print(jsonuser_create_dto_2));
}

int main() {
  test_user_create_dto(1);
  test_user_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_create_dto_MAIN
#endif // user_create_dto_TEST
