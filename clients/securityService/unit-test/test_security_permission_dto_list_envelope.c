#ifndef security_permission_dto_list_envelope_TEST
#define security_permission_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_permission_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_permission_dto_list_envelope.h"
security_permission_dto_list_envelope_t* instantiate_security_permission_dto_list_envelope(int include_optional);



security_permission_dto_list_envelope_t* instantiate_security_permission_dto_list_envelope(int include_optional) {
  security_permission_dto_list_envelope_t* security_permission_dto_list_envelope = NULL;
  if (include_optional) {
    security_permission_dto_list_envelope = security_permission_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    security_permission_dto_list_envelope = security_permission_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return security_permission_dto_list_envelope;
}


#ifdef security_permission_dto_list_envelope_MAIN

void test_security_permission_dto_list_envelope(int include_optional) {
    security_permission_dto_list_envelope_t* security_permission_dto_list_envelope_1 = instantiate_security_permission_dto_list_envelope(include_optional);

	cJSON* jsonsecurity_permission_dto_list_envelope_1 = security_permission_dto_list_envelope_convertToJSON(security_permission_dto_list_envelope_1);
	printf("security_permission_dto_list_envelope :\n%s\n", cJSON_Print(jsonsecurity_permission_dto_list_envelope_1));
	security_permission_dto_list_envelope_t* security_permission_dto_list_envelope_2 = security_permission_dto_list_envelope_parseFromJSON(jsonsecurity_permission_dto_list_envelope_1);
	cJSON* jsonsecurity_permission_dto_list_envelope_2 = security_permission_dto_list_envelope_convertToJSON(security_permission_dto_list_envelope_2);
	printf("repeating security_permission_dto_list_envelope:\n%s\n", cJSON_Print(jsonsecurity_permission_dto_list_envelope_2));
}

int main() {
  test_security_permission_dto_list_envelope(1);
  test_security_permission_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_permission_dto_list_envelope_MAIN
#endif // security_permission_dto_list_envelope_TEST
