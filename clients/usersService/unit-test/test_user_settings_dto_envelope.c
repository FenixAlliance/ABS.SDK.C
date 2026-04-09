#ifndef user_settings_dto_envelope_TEST
#define user_settings_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_settings_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_settings_dto_envelope.h"
user_settings_dto_envelope_t* instantiate_user_settings_dto_envelope(int include_optional);

#include "test_user_settings_dto.c"


user_settings_dto_envelope_t* instantiate_user_settings_dto_envelope(int include_optional) {
  user_settings_dto_envelope_t* user_settings_dto_envelope = NULL;
  if (include_optional) {
    user_settings_dto_envelope = user_settings_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_user_settings_dto(0)
    );
  } else {
    user_settings_dto_envelope = user_settings_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return user_settings_dto_envelope;
}


#ifdef user_settings_dto_envelope_MAIN

void test_user_settings_dto_envelope(int include_optional) {
    user_settings_dto_envelope_t* user_settings_dto_envelope_1 = instantiate_user_settings_dto_envelope(include_optional);

	cJSON* jsonuser_settings_dto_envelope_1 = user_settings_dto_envelope_convertToJSON(user_settings_dto_envelope_1);
	printf("user_settings_dto_envelope :\n%s\n", cJSON_Print(jsonuser_settings_dto_envelope_1));
	user_settings_dto_envelope_t* user_settings_dto_envelope_2 = user_settings_dto_envelope_parseFromJSON(jsonuser_settings_dto_envelope_1);
	cJSON* jsonuser_settings_dto_envelope_2 = user_settings_dto_envelope_convertToJSON(user_settings_dto_envelope_2);
	printf("repeating user_settings_dto_envelope:\n%s\n", cJSON_Print(jsonuser_settings_dto_envelope_2));
}

int main() {
  test_user_settings_dto_envelope(1);
  test_user_settings_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_settings_dto_envelope_MAIN
#endif // user_settings_dto_envelope_TEST
