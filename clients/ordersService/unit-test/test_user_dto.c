#ifndef user_dto_TEST
#define user_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_dto.h"
user_dto_t* instantiate_user_dto(int include_optional);



user_dto_t* instantiate_user_dto(int include_optional) {
  user_dto_t* user_dto = NULL;
  if (include_optional) {
    user_dto = user_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      ordersservice_user_dto_GENDER_Unknown,
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
      1,
      1,
      ordersservice_user_dto_AVAILABILITY_DND,
      1,
      "2013-10-20T19:20:30+01:00",
      56,
      ordersservice_user_dto_SITETHEME_System
    );
  } else {
    user_dto = user_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      ordersservice_user_dto_GENDER_Unknown,
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
      1,
      1,
      ordersservice_user_dto_AVAILABILITY_DND,
      1,
      "2013-10-20T19:20:30+01:00",
      56,
      ordersservice_user_dto_SITETHEME_System
    );
  }

  return user_dto;
}


#ifdef user_dto_MAIN

void test_user_dto(int include_optional) {
    user_dto_t* user_dto_1 = instantiate_user_dto(include_optional);

	cJSON* jsonuser_dto_1 = user_dto_convertToJSON(user_dto_1);
	printf("user_dto :\n%s\n", cJSON_Print(jsonuser_dto_1));
	user_dto_t* user_dto_2 = user_dto_parseFromJSON(jsonuser_dto_1);
	cJSON* jsonuser_dto_2 = user_dto_convertToJSON(user_dto_2);
	printf("repeating user_dto:\n%s\n", cJSON_Print(jsonuser_dto_2));
}

int main() {
  test_user_dto(1);
  test_user_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_dto_MAIN
#endif // user_dto_TEST
