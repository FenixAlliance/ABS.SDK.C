#ifndef tenant_enrollment_dto_list_envelope_TEST
#define tenant_enrollment_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_enrollment_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_enrollment_dto_list_envelope.h"
tenant_enrollment_dto_list_envelope_t* instantiate_tenant_enrollment_dto_list_envelope(int include_optional);



tenant_enrollment_dto_list_envelope_t* instantiate_tenant_enrollment_dto_list_envelope(int include_optional) {
  tenant_enrollment_dto_list_envelope_t* tenant_enrollment_dto_list_envelope = NULL;
  if (include_optional) {
    tenant_enrollment_dto_list_envelope = tenant_enrollment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    tenant_enrollment_dto_list_envelope = tenant_enrollment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return tenant_enrollment_dto_list_envelope;
}


#ifdef tenant_enrollment_dto_list_envelope_MAIN

void test_tenant_enrollment_dto_list_envelope(int include_optional) {
    tenant_enrollment_dto_list_envelope_t* tenant_enrollment_dto_list_envelope_1 = instantiate_tenant_enrollment_dto_list_envelope(include_optional);

	cJSON* jsontenant_enrollment_dto_list_envelope_1 = tenant_enrollment_dto_list_envelope_convertToJSON(tenant_enrollment_dto_list_envelope_1);
	printf("tenant_enrollment_dto_list_envelope :\n%s\n", cJSON_Print(jsontenant_enrollment_dto_list_envelope_1));
	tenant_enrollment_dto_list_envelope_t* tenant_enrollment_dto_list_envelope_2 = tenant_enrollment_dto_list_envelope_parseFromJSON(jsontenant_enrollment_dto_list_envelope_1);
	cJSON* jsontenant_enrollment_dto_list_envelope_2 = tenant_enrollment_dto_list_envelope_convertToJSON(tenant_enrollment_dto_list_envelope_2);
	printf("repeating tenant_enrollment_dto_list_envelope:\n%s\n", cJSON_Print(jsontenant_enrollment_dto_list_envelope_2));
}

int main() {
  test_tenant_enrollment_dto_list_envelope(1);
  test_tenant_enrollment_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_enrollment_dto_list_envelope_MAIN
#endif // tenant_enrollment_dto_list_envelope_TEST
