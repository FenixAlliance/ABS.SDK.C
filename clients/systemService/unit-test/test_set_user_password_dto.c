#ifndef set_user_password_dto_TEST
#define set_user_password_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_user_password_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_user_password_dto.h"
set_user_password_dto_t* instantiate_set_user_password_dto(int include_optional);



set_user_password_dto_t* instantiate_set_user_password_dto(int include_optional) {
  set_user_password_dto_t* set_user_password_dto = NULL;
  if (include_optional) {
    set_user_password_dto = set_user_password_dto_create(
      "0"
    );
  } else {
    set_user_password_dto = set_user_password_dto_create(
      "0"
    );
  }

  return set_user_password_dto;
}


#ifdef set_user_password_dto_MAIN

void test_set_user_password_dto(int include_optional) {
    set_user_password_dto_t* set_user_password_dto_1 = instantiate_set_user_password_dto(include_optional);

	cJSON* jsonset_user_password_dto_1 = set_user_password_dto_convertToJSON(set_user_password_dto_1);
	printf("set_user_password_dto :\n%s\n", cJSON_Print(jsonset_user_password_dto_1));
	set_user_password_dto_t* set_user_password_dto_2 = set_user_password_dto_parseFromJSON(jsonset_user_password_dto_1);
	cJSON* jsonset_user_password_dto_2 = set_user_password_dto_convertToJSON(set_user_password_dto_2);
	printf("repeating set_user_password_dto:\n%s\n", cJSON_Print(jsonset_user_password_dto_2));
}

int main() {
  test_set_user_password_dto(1);
  test_set_user_password_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_user_password_dto_MAIN
#endif // set_user_password_dto_TEST
