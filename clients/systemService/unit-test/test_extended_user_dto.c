#ifndef extended_user_dto_TEST
#define extended_user_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_user_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_user_dto.h"
extended_user_dto_t* instantiate_extended_user_dto(int include_optional);

#include "test_cart_dto.c"
#include "test_wallet_dto.c"
#include "test_social_profile_dto.c"
#include "test_user_settings_dto.c"


extended_user_dto_t* instantiate_extended_user_dto(int include_optional) {
  extended_user_dto_t* extended_user_dto = NULL;
  if (include_optional) {
    extended_user_dto = extended_user_dto_create(
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
      systemservice_extended_user_dto_GENDER_Unknown,
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
      systemservice_extended_user_dto_AVAILABILITY_DND,
      1,
      "2013-10-20T19:20:30+01:00",
      56,
      systemservice_extended_user_dto_SITETHEME_System,
       // false, not to have infinite recursion
      instantiate_cart_dto(0),
       // false, not to have infinite recursion
      instantiate_wallet_dto(0),
       // false, not to have infinite recursion
      instantiate_social_profile_dto(0),
       // false, not to have infinite recursion
      instantiate_user_settings_dto(0)
    );
  } else {
    extended_user_dto = extended_user_dto_create(
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
      systemservice_extended_user_dto_GENDER_Unknown,
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
      systemservice_extended_user_dto_AVAILABILITY_DND,
      1,
      "2013-10-20T19:20:30+01:00",
      56,
      systemservice_extended_user_dto_SITETHEME_System,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return extended_user_dto;
}


#ifdef extended_user_dto_MAIN

void test_extended_user_dto(int include_optional) {
    extended_user_dto_t* extended_user_dto_1 = instantiate_extended_user_dto(include_optional);

	cJSON* jsonextended_user_dto_1 = extended_user_dto_convertToJSON(extended_user_dto_1);
	printf("extended_user_dto :\n%s\n", cJSON_Print(jsonextended_user_dto_1));
	extended_user_dto_t* extended_user_dto_2 = extended_user_dto_parseFromJSON(jsonextended_user_dto_1);
	cJSON* jsonextended_user_dto_2 = extended_user_dto_convertToJSON(extended_user_dto_2);
	printf("repeating extended_user_dto:\n%s\n", cJSON_Print(jsonextended_user_dto_2));
}

int main() {
  test_extended_user_dto(1);
  test_extended_user_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_user_dto_MAIN
#endif // extended_user_dto_TEST
