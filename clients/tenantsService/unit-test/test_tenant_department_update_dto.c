#ifndef tenant_department_update_dto_TEST
#define tenant_department_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_department_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_department_update_dto.h"
tenant_department_update_dto_t* instantiate_tenant_department_update_dto(int include_optional);



tenant_department_update_dto_t* instantiate_tenant_department_update_dto(int include_optional) {
  tenant_department_update_dto_t* tenant_department_update_dto = NULL;
  if (include_optional) {
    tenant_department_update_dto = tenant_department_update_dto_create(
      "0",
      "0",
      1,
      "0",
      "0",
      "0"
    );
  } else {
    tenant_department_update_dto = tenant_department_update_dto_create(
      "0",
      "0",
      1,
      "0",
      "0",
      "0"
    );
  }

  return tenant_department_update_dto;
}


#ifdef tenant_department_update_dto_MAIN

void test_tenant_department_update_dto(int include_optional) {
    tenant_department_update_dto_t* tenant_department_update_dto_1 = instantiate_tenant_department_update_dto(include_optional);

	cJSON* jsontenant_department_update_dto_1 = tenant_department_update_dto_convertToJSON(tenant_department_update_dto_1);
	printf("tenant_department_update_dto :\n%s\n", cJSON_Print(jsontenant_department_update_dto_1));
	tenant_department_update_dto_t* tenant_department_update_dto_2 = tenant_department_update_dto_parseFromJSON(jsontenant_department_update_dto_1);
	cJSON* jsontenant_department_update_dto_2 = tenant_department_update_dto_convertToJSON(tenant_department_update_dto_2);
	printf("repeating tenant_department_update_dto:\n%s\n", cJSON_Print(jsontenant_department_update_dto_2));
}

int main() {
  test_tenant_department_update_dto(1);
  test_tenant_department_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_department_update_dto_MAIN
#endif // tenant_department_update_dto_TEST
