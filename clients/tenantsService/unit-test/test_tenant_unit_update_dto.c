#ifndef tenant_unit_update_dto_TEST
#define tenant_unit_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_unit_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_unit_update_dto.h"
tenant_unit_update_dto_t* instantiate_tenant_unit_update_dto(int include_optional);



tenant_unit_update_dto_t* instantiate_tenant_unit_update_dto(int include_optional) {
  tenant_unit_update_dto_t* tenant_unit_update_dto = NULL;
  if (include_optional) {
    tenant_unit_update_dto = tenant_unit_update_dto_create(
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    tenant_unit_update_dto = tenant_unit_update_dto_create(
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return tenant_unit_update_dto;
}


#ifdef tenant_unit_update_dto_MAIN

void test_tenant_unit_update_dto(int include_optional) {
    tenant_unit_update_dto_t* tenant_unit_update_dto_1 = instantiate_tenant_unit_update_dto(include_optional);

	cJSON* jsontenant_unit_update_dto_1 = tenant_unit_update_dto_convertToJSON(tenant_unit_update_dto_1);
	printf("tenant_unit_update_dto :\n%s\n", cJSON_Print(jsontenant_unit_update_dto_1));
	tenant_unit_update_dto_t* tenant_unit_update_dto_2 = tenant_unit_update_dto_parseFromJSON(jsontenant_unit_update_dto_1);
	cJSON* jsontenant_unit_update_dto_2 = tenant_unit_update_dto_convertToJSON(tenant_unit_update_dto_2);
	printf("repeating tenant_unit_update_dto:\n%s\n", cJSON_Print(jsontenant_unit_update_dto_2));
}

int main() {
  test_tenant_unit_update_dto(1);
  test_tenant_unit_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_unit_update_dto_MAIN
#endif // tenant_unit_update_dto_TEST
