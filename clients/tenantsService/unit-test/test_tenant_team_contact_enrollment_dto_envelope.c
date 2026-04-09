#ifndef tenant_team_contact_enrollment_dto_envelope_TEST
#define tenant_team_contact_enrollment_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_team_contact_enrollment_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_team_contact_enrollment_dto_envelope.h"
tenant_team_contact_enrollment_dto_envelope_t* instantiate_tenant_team_contact_enrollment_dto_envelope(int include_optional);

#include "test_tenant_team_contact_enrollment_dto.c"


tenant_team_contact_enrollment_dto_envelope_t* instantiate_tenant_team_contact_enrollment_dto_envelope(int include_optional) {
  tenant_team_contact_enrollment_dto_envelope_t* tenant_team_contact_enrollment_dto_envelope = NULL;
  if (include_optional) {
    tenant_team_contact_enrollment_dto_envelope = tenant_team_contact_enrollment_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_tenant_team_contact_enrollment_dto(0)
    );
  } else {
    tenant_team_contact_enrollment_dto_envelope = tenant_team_contact_enrollment_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return tenant_team_contact_enrollment_dto_envelope;
}


#ifdef tenant_team_contact_enrollment_dto_envelope_MAIN

void test_tenant_team_contact_enrollment_dto_envelope(int include_optional) {
    tenant_team_contact_enrollment_dto_envelope_t* tenant_team_contact_enrollment_dto_envelope_1 = instantiate_tenant_team_contact_enrollment_dto_envelope(include_optional);

	cJSON* jsontenant_team_contact_enrollment_dto_envelope_1 = tenant_team_contact_enrollment_dto_envelope_convertToJSON(tenant_team_contact_enrollment_dto_envelope_1);
	printf("tenant_team_contact_enrollment_dto_envelope :\n%s\n", cJSON_Print(jsontenant_team_contact_enrollment_dto_envelope_1));
	tenant_team_contact_enrollment_dto_envelope_t* tenant_team_contact_enrollment_dto_envelope_2 = tenant_team_contact_enrollment_dto_envelope_parseFromJSON(jsontenant_team_contact_enrollment_dto_envelope_1);
	cJSON* jsontenant_team_contact_enrollment_dto_envelope_2 = tenant_team_contact_enrollment_dto_envelope_convertToJSON(tenant_team_contact_enrollment_dto_envelope_2);
	printf("repeating tenant_team_contact_enrollment_dto_envelope:\n%s\n", cJSON_Print(jsontenant_team_contact_enrollment_dto_envelope_2));
}

int main() {
  test_tenant_team_contact_enrollment_dto_envelope(1);
  test_tenant_team_contact_enrollment_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_team_contact_enrollment_dto_envelope_MAIN
#endif // tenant_team_contact_enrollment_dto_envelope_TEST
