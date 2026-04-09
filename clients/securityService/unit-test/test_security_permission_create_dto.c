#ifndef security_permission_create_dto_TEST
#define security_permission_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_permission_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_permission_create_dto.h"
security_permission_create_dto_t* instantiate_security_permission_create_dto(int include_optional);



security_permission_create_dto_t* instantiate_security_permission_create_dto(int include_optional) {
  security_permission_create_dto_t* security_permission_create_dto = NULL;
  if (include_optional) {
    security_permission_create_dto = security_permission_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    security_permission_create_dto = security_permission_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return security_permission_create_dto;
}


#ifdef security_permission_create_dto_MAIN

void test_security_permission_create_dto(int include_optional) {
    security_permission_create_dto_t* security_permission_create_dto_1 = instantiate_security_permission_create_dto(include_optional);

	cJSON* jsonsecurity_permission_create_dto_1 = security_permission_create_dto_convertToJSON(security_permission_create_dto_1);
	printf("security_permission_create_dto :\n%s\n", cJSON_Print(jsonsecurity_permission_create_dto_1));
	security_permission_create_dto_t* security_permission_create_dto_2 = security_permission_create_dto_parseFromJSON(jsonsecurity_permission_create_dto_1);
	cJSON* jsonsecurity_permission_create_dto_2 = security_permission_create_dto_convertToJSON(security_permission_create_dto_2);
	printf("repeating security_permission_create_dto:\n%s\n", cJSON_Print(jsonsecurity_permission_create_dto_2));
}

int main() {
  test_security_permission_create_dto(1);
  test_security_permission_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_permission_create_dto_MAIN
#endif // security_permission_create_dto_TEST
