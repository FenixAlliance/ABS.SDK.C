#ifndef tenant_territory_dto_TEST
#define tenant_territory_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_territory_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_territory_dto.h"
tenant_territory_dto_t* instantiate_tenant_territory_dto(int include_optional);



tenant_territory_dto_t* instantiate_tenant_territory_dto(int include_optional) {
  tenant_territory_dto_t* tenant_territory_dto = NULL;
  if (include_optional) {
    tenant_territory_dto = tenant_territory_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    tenant_territory_dto = tenant_territory_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return tenant_territory_dto;
}


#ifdef tenant_territory_dto_MAIN

void test_tenant_territory_dto(int include_optional) {
    tenant_territory_dto_t* tenant_territory_dto_1 = instantiate_tenant_territory_dto(include_optional);

	cJSON* jsontenant_territory_dto_1 = tenant_territory_dto_convertToJSON(tenant_territory_dto_1);
	printf("tenant_territory_dto :\n%s\n", cJSON_Print(jsontenant_territory_dto_1));
	tenant_territory_dto_t* tenant_territory_dto_2 = tenant_territory_dto_parseFromJSON(jsontenant_territory_dto_1);
	cJSON* jsontenant_territory_dto_2 = tenant_territory_dto_convertToJSON(tenant_territory_dto_2);
	printf("repeating tenant_territory_dto:\n%s\n", cJSON_Print(jsontenant_territory_dto_2));
}

int main() {
  test_tenant_territory_dto(1);
  test_tenant_territory_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_territory_dto_MAIN
#endif // tenant_territory_dto_TEST
