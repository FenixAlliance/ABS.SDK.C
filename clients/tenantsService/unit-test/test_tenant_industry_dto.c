#ifndef tenant_industry_dto_TEST
#define tenant_industry_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_industry_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_industry_dto.h"
tenant_industry_dto_t* instantiate_tenant_industry_dto(int include_optional);



tenant_industry_dto_t* instantiate_tenant_industry_dto(int include_optional) {
  tenant_industry_dto_t* tenant_industry_dto = NULL;
  if (include_optional) {
    tenant_industry_dto = tenant_industry_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    tenant_industry_dto = tenant_industry_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return tenant_industry_dto;
}


#ifdef tenant_industry_dto_MAIN

void test_tenant_industry_dto(int include_optional) {
    tenant_industry_dto_t* tenant_industry_dto_1 = instantiate_tenant_industry_dto(include_optional);

	cJSON* jsontenant_industry_dto_1 = tenant_industry_dto_convertToJSON(tenant_industry_dto_1);
	printf("tenant_industry_dto :\n%s\n", cJSON_Print(jsontenant_industry_dto_1));
	tenant_industry_dto_t* tenant_industry_dto_2 = tenant_industry_dto_parseFromJSON(jsontenant_industry_dto_1);
	cJSON* jsontenant_industry_dto_2 = tenant_industry_dto_convertToJSON(tenant_industry_dto_2);
	printf("repeating tenant_industry_dto:\n%s\n", cJSON_Print(jsontenant_industry_dto_2));
}

int main() {
  test_tenant_industry_dto(1);
  test_tenant_industry_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_industry_dto_MAIN
#endif // tenant_industry_dto_TEST
