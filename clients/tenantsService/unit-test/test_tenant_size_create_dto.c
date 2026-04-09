#ifndef tenant_size_create_dto_TEST
#define tenant_size_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_size_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_size_create_dto.h"
tenant_size_create_dto_t* instantiate_tenant_size_create_dto(int include_optional);



tenant_size_create_dto_t* instantiate_tenant_size_create_dto(int include_optional) {
  tenant_size_create_dto_t* tenant_size_create_dto = NULL;
  if (include_optional) {
    tenant_size_create_dto = tenant_size_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      56
    );
  } else {
    tenant_size_create_dto = tenant_size_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      56
    );
  }

  return tenant_size_create_dto;
}


#ifdef tenant_size_create_dto_MAIN

void test_tenant_size_create_dto(int include_optional) {
    tenant_size_create_dto_t* tenant_size_create_dto_1 = instantiate_tenant_size_create_dto(include_optional);

	cJSON* jsontenant_size_create_dto_1 = tenant_size_create_dto_convertToJSON(tenant_size_create_dto_1);
	printf("tenant_size_create_dto :\n%s\n", cJSON_Print(jsontenant_size_create_dto_1));
	tenant_size_create_dto_t* tenant_size_create_dto_2 = tenant_size_create_dto_parseFromJSON(jsontenant_size_create_dto_1);
	cJSON* jsontenant_size_create_dto_2 = tenant_size_create_dto_convertToJSON(tenant_size_create_dto_2);
	printf("repeating tenant_size_create_dto:\n%s\n", cJSON_Print(jsontenant_size_create_dto_2));
}

int main() {
  test_tenant_size_create_dto(1);
  test_tenant_size_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_size_create_dto_MAIN
#endif // tenant_size_create_dto_TEST
