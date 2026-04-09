#ifndef security_role_update_dto_TEST
#define security_role_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_role_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_role_update_dto.h"
security_role_update_dto_t* instantiate_security_role_update_dto(int include_optional);



security_role_update_dto_t* instantiate_security_role_update_dto(int include_optional) {
  security_role_update_dto_t* security_role_update_dto = NULL;
  if (include_optional) {
    security_role_update_dto = security_role_update_dto_create(
      "0",
      "0"
    );
  } else {
    security_role_update_dto = security_role_update_dto_create(
      "0",
      "0"
    );
  }

  return security_role_update_dto;
}


#ifdef security_role_update_dto_MAIN

void test_security_role_update_dto(int include_optional) {
    security_role_update_dto_t* security_role_update_dto_1 = instantiate_security_role_update_dto(include_optional);

	cJSON* jsonsecurity_role_update_dto_1 = security_role_update_dto_convertToJSON(security_role_update_dto_1);
	printf("security_role_update_dto :\n%s\n", cJSON_Print(jsonsecurity_role_update_dto_1));
	security_role_update_dto_t* security_role_update_dto_2 = security_role_update_dto_parseFromJSON(jsonsecurity_role_update_dto_1);
	cJSON* jsonsecurity_role_update_dto_2 = security_role_update_dto_convertToJSON(security_role_update_dto_2);
	printf("repeating security_role_update_dto:\n%s\n", cJSON_Print(jsonsecurity_role_update_dto_2));
}

int main() {
  test_security_role_update_dto(1);
  test_security_role_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_role_update_dto_MAIN
#endif // security_role_update_dto_TEST
