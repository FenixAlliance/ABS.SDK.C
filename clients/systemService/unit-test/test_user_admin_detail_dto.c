#ifndef user_admin_detail_dto_TEST
#define user_admin_detail_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_admin_detail_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_admin_detail_dto.h"
user_admin_detail_dto_t* instantiate_user_admin_detail_dto(int include_optional);

#include "test_tenant_enrollment_dto.c"


user_admin_detail_dto_t* instantiate_user_admin_detail_dto(int include_optional) {
  user_admin_detail_dto_t* user_admin_detail_dto = NULL;
  if (include_optional) {
    user_admin_detail_dto = user_admin_detail_dto_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_tenant_enrollment_dto(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    user_admin_detail_dto = user_admin_detail_dto_create(
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return user_admin_detail_dto;
}


#ifdef user_admin_detail_dto_MAIN

void test_user_admin_detail_dto(int include_optional) {
    user_admin_detail_dto_t* user_admin_detail_dto_1 = instantiate_user_admin_detail_dto(include_optional);

	cJSON* jsonuser_admin_detail_dto_1 = user_admin_detail_dto_convertToJSON(user_admin_detail_dto_1);
	printf("user_admin_detail_dto :\n%s\n", cJSON_Print(jsonuser_admin_detail_dto_1));
	user_admin_detail_dto_t* user_admin_detail_dto_2 = user_admin_detail_dto_parseFromJSON(jsonuser_admin_detail_dto_1);
	cJSON* jsonuser_admin_detail_dto_2 = user_admin_detail_dto_convertToJSON(user_admin_detail_dto_2);
	printf("repeating user_admin_detail_dto:\n%s\n", cJSON_Print(jsonuser_admin_detail_dto_2));
}

int main() {
  test_user_admin_detail_dto(1);
  test_user_admin_detail_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_admin_detail_dto_MAIN
#endif // user_admin_detail_dto_TEST
