#ifndef extended_invite_dto_TEST
#define extended_invite_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_invite_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_invite_dto.h"
extended_invite_dto_t* instantiate_extended_invite_dto(int include_optional);

#include "test_tenant_dto.c"


extended_invite_dto_t* instantiate_extended_invite_dto(int include_optional) {
  extended_invite_dto_t* extended_invite_dto = NULL;
  if (include_optional) {
    extended_invite_dto = extended_invite_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_tenant_dto(0)
    );
  } else {
    extended_invite_dto = extended_invite_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      NULL
    );
  }

  return extended_invite_dto;
}


#ifdef extended_invite_dto_MAIN

void test_extended_invite_dto(int include_optional) {
    extended_invite_dto_t* extended_invite_dto_1 = instantiate_extended_invite_dto(include_optional);

	cJSON* jsonextended_invite_dto_1 = extended_invite_dto_convertToJSON(extended_invite_dto_1);
	printf("extended_invite_dto :\n%s\n", cJSON_Print(jsonextended_invite_dto_1));
	extended_invite_dto_t* extended_invite_dto_2 = extended_invite_dto_parseFromJSON(jsonextended_invite_dto_1);
	cJSON* jsonextended_invite_dto_2 = extended_invite_dto_convertToJSON(extended_invite_dto_2);
	printf("repeating extended_invite_dto:\n%s\n", cJSON_Print(jsonextended_invite_dto_2));
}

int main() {
  test_extended_invite_dto(1);
  test_extended_invite_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_invite_dto_MAIN
#endif // extended_invite_dto_TEST
