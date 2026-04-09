#ifndef security_role_dto_envelope_TEST
#define security_role_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_role_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_role_dto_envelope.h"
security_role_dto_envelope_t* instantiate_security_role_dto_envelope(int include_optional);

#include "test_security_role_dto.c"


security_role_dto_envelope_t* instantiate_security_role_dto_envelope(int include_optional) {
  security_role_dto_envelope_t* security_role_dto_envelope = NULL;
  if (include_optional) {
    security_role_dto_envelope = security_role_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_security_role_dto(0)
    );
  } else {
    security_role_dto_envelope = security_role_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return security_role_dto_envelope;
}


#ifdef security_role_dto_envelope_MAIN

void test_security_role_dto_envelope(int include_optional) {
    security_role_dto_envelope_t* security_role_dto_envelope_1 = instantiate_security_role_dto_envelope(include_optional);

	cJSON* jsonsecurity_role_dto_envelope_1 = security_role_dto_envelope_convertToJSON(security_role_dto_envelope_1);
	printf("security_role_dto_envelope :\n%s\n", cJSON_Print(jsonsecurity_role_dto_envelope_1));
	security_role_dto_envelope_t* security_role_dto_envelope_2 = security_role_dto_envelope_parseFromJSON(jsonsecurity_role_dto_envelope_1);
	cJSON* jsonsecurity_role_dto_envelope_2 = security_role_dto_envelope_convertToJSON(security_role_dto_envelope_2);
	printf("repeating security_role_dto_envelope:\n%s\n", cJSON_Print(jsonsecurity_role_dto_envelope_2));
}

int main() {
  test_security_role_dto_envelope(1);
  test_security_role_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_role_dto_envelope_MAIN
#endif // security_role_dto_envelope_TEST
