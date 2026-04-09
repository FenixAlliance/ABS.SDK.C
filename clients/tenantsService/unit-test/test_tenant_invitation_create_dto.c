#ifndef tenant_invitation_create_dto_TEST
#define tenant_invitation_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_invitation_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_invitation_create_dto.h"
tenant_invitation_create_dto_t* instantiate_tenant_invitation_create_dto(int include_optional);



tenant_invitation_create_dto_t* instantiate_tenant_invitation_create_dto(int include_optional) {
  tenant_invitation_create_dto_t* tenant_invitation_create_dto = NULL;
  if (include_optional) {
    tenant_invitation_create_dto = tenant_invitation_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    tenant_invitation_create_dto = tenant_invitation_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return tenant_invitation_create_dto;
}


#ifdef tenant_invitation_create_dto_MAIN

void test_tenant_invitation_create_dto(int include_optional) {
    tenant_invitation_create_dto_t* tenant_invitation_create_dto_1 = instantiate_tenant_invitation_create_dto(include_optional);

	cJSON* jsontenant_invitation_create_dto_1 = tenant_invitation_create_dto_convertToJSON(tenant_invitation_create_dto_1);
	printf("tenant_invitation_create_dto :\n%s\n", cJSON_Print(jsontenant_invitation_create_dto_1));
	tenant_invitation_create_dto_t* tenant_invitation_create_dto_2 = tenant_invitation_create_dto_parseFromJSON(jsontenant_invitation_create_dto_1);
	cJSON* jsontenant_invitation_create_dto_2 = tenant_invitation_create_dto_convertToJSON(tenant_invitation_create_dto_2);
	printf("repeating tenant_invitation_create_dto:\n%s\n", cJSON_Print(jsontenant_invitation_create_dto_2));
}

int main() {
  test_tenant_invitation_create_dto(1);
  test_tenant_invitation_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_invitation_create_dto_MAIN
#endif // tenant_invitation_create_dto_TEST
