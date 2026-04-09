#ifndef extended_tenant_enrollment_dto_envelope_TEST
#define extended_tenant_enrollment_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_tenant_enrollment_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_tenant_enrollment_dto_envelope.h"
extended_tenant_enrollment_dto_envelope_t* instantiate_extended_tenant_enrollment_dto_envelope(int include_optional);

#include "test_extended_tenant_enrollment_dto.c"


extended_tenant_enrollment_dto_envelope_t* instantiate_extended_tenant_enrollment_dto_envelope(int include_optional) {
  extended_tenant_enrollment_dto_envelope_t* extended_tenant_enrollment_dto_envelope = NULL;
  if (include_optional) {
    extended_tenant_enrollment_dto_envelope = extended_tenant_enrollment_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_extended_tenant_enrollment_dto(0)
    );
  } else {
    extended_tenant_enrollment_dto_envelope = extended_tenant_enrollment_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return extended_tenant_enrollment_dto_envelope;
}


#ifdef extended_tenant_enrollment_dto_envelope_MAIN

void test_extended_tenant_enrollment_dto_envelope(int include_optional) {
    extended_tenant_enrollment_dto_envelope_t* extended_tenant_enrollment_dto_envelope_1 = instantiate_extended_tenant_enrollment_dto_envelope(include_optional);

	cJSON* jsonextended_tenant_enrollment_dto_envelope_1 = extended_tenant_enrollment_dto_envelope_convertToJSON(extended_tenant_enrollment_dto_envelope_1);
	printf("extended_tenant_enrollment_dto_envelope :\n%s\n", cJSON_Print(jsonextended_tenant_enrollment_dto_envelope_1));
	extended_tenant_enrollment_dto_envelope_t* extended_tenant_enrollment_dto_envelope_2 = extended_tenant_enrollment_dto_envelope_parseFromJSON(jsonextended_tenant_enrollment_dto_envelope_1);
	cJSON* jsonextended_tenant_enrollment_dto_envelope_2 = extended_tenant_enrollment_dto_envelope_convertToJSON(extended_tenant_enrollment_dto_envelope_2);
	printf("repeating extended_tenant_enrollment_dto_envelope:\n%s\n", cJSON_Print(jsonextended_tenant_enrollment_dto_envelope_2));
}

int main() {
  test_extended_tenant_enrollment_dto_envelope(1);
  test_extended_tenant_enrollment_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_tenant_enrollment_dto_envelope_MAIN
#endif // extended_tenant_enrollment_dto_envelope_TEST
