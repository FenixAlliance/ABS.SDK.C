#ifndef simple_tenant_enrollment_dto_TEST
#define simple_tenant_enrollment_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define simple_tenant_enrollment_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/simple_tenant_enrollment_dto.h"
simple_tenant_enrollment_dto_t* instantiate_simple_tenant_enrollment_dto(int include_optional);



simple_tenant_enrollment_dto_t* instantiate_simple_tenant_enrollment_dto(int include_optional) {
  simple_tenant_enrollment_dto_t* simple_tenant_enrollment_dto = NULL;
  if (include_optional) {
    simple_tenant_enrollment_dto = simple_tenant_enrollment_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    simple_tenant_enrollment_dto = simple_tenant_enrollment_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return simple_tenant_enrollment_dto;
}


#ifdef simple_tenant_enrollment_dto_MAIN

void test_simple_tenant_enrollment_dto(int include_optional) {
    simple_tenant_enrollment_dto_t* simple_tenant_enrollment_dto_1 = instantiate_simple_tenant_enrollment_dto(include_optional);

	cJSON* jsonsimple_tenant_enrollment_dto_1 = simple_tenant_enrollment_dto_convertToJSON(simple_tenant_enrollment_dto_1);
	printf("simple_tenant_enrollment_dto :\n%s\n", cJSON_Print(jsonsimple_tenant_enrollment_dto_1));
	simple_tenant_enrollment_dto_t* simple_tenant_enrollment_dto_2 = simple_tenant_enrollment_dto_parseFromJSON(jsonsimple_tenant_enrollment_dto_1);
	cJSON* jsonsimple_tenant_enrollment_dto_2 = simple_tenant_enrollment_dto_convertToJSON(simple_tenant_enrollment_dto_2);
	printf("repeating simple_tenant_enrollment_dto:\n%s\n", cJSON_Print(jsonsimple_tenant_enrollment_dto_2));
}

int main() {
  test_simple_tenant_enrollment_dto(1);
  test_simple_tenant_enrollment_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // simple_tenant_enrollment_dto_MAIN
#endif // simple_tenant_enrollment_dto_TEST
