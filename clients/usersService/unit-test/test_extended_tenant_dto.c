#ifndef extended_tenant_dto_TEST
#define extended_tenant_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_tenant_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_tenant_dto.h"
extended_tenant_dto_t* instantiate_extended_tenant_dto(int include_optional);

#include "test_cart_dto.c"
#include "test_wallet_dto.c"
#include "test_social_profile_dto.c"


extended_tenant_dto_t* instantiate_extended_tenant_dto(int include_optional) {
  extended_tenant_dto_t* extended_tenant_dto = NULL;
  if (include_optional) {
    extended_tenant_dto = extended_tenant_dto_create(
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
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_cart_dto(0),
       // false, not to have infinite recursion
      instantiate_wallet_dto(0),
       // false, not to have infinite recursion
      instantiate_social_profile_dto(0)
    );
  } else {
    extended_tenant_dto = extended_tenant_dto_create(
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
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return extended_tenant_dto;
}


#ifdef extended_tenant_dto_MAIN

void test_extended_tenant_dto(int include_optional) {
    extended_tenant_dto_t* extended_tenant_dto_1 = instantiate_extended_tenant_dto(include_optional);

	cJSON* jsonextended_tenant_dto_1 = extended_tenant_dto_convertToJSON(extended_tenant_dto_1);
	printf("extended_tenant_dto :\n%s\n", cJSON_Print(jsonextended_tenant_dto_1));
	extended_tenant_dto_t* extended_tenant_dto_2 = extended_tenant_dto_parseFromJSON(jsonextended_tenant_dto_1);
	cJSON* jsonextended_tenant_dto_2 = extended_tenant_dto_convertToJSON(extended_tenant_dto_2);
	printf("repeating extended_tenant_dto:\n%s\n", cJSON_Print(jsonextended_tenant_dto_2));
}

int main() {
  test_extended_tenant_dto(1);
  test_extended_tenant_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_tenant_dto_MAIN
#endif // extended_tenant_dto_TEST
