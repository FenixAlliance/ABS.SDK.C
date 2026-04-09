#ifndef security_certificate_dto_list_envelope_TEST
#define security_certificate_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_certificate_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_certificate_dto_list_envelope.h"
security_certificate_dto_list_envelope_t* instantiate_security_certificate_dto_list_envelope(int include_optional);



security_certificate_dto_list_envelope_t* instantiate_security_certificate_dto_list_envelope(int include_optional) {
  security_certificate_dto_list_envelope_t* security_certificate_dto_list_envelope = NULL;
  if (include_optional) {
    security_certificate_dto_list_envelope = security_certificate_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    security_certificate_dto_list_envelope = security_certificate_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return security_certificate_dto_list_envelope;
}


#ifdef security_certificate_dto_list_envelope_MAIN

void test_security_certificate_dto_list_envelope(int include_optional) {
    security_certificate_dto_list_envelope_t* security_certificate_dto_list_envelope_1 = instantiate_security_certificate_dto_list_envelope(include_optional);

	cJSON* jsonsecurity_certificate_dto_list_envelope_1 = security_certificate_dto_list_envelope_convertToJSON(security_certificate_dto_list_envelope_1);
	printf("security_certificate_dto_list_envelope :\n%s\n", cJSON_Print(jsonsecurity_certificate_dto_list_envelope_1));
	security_certificate_dto_list_envelope_t* security_certificate_dto_list_envelope_2 = security_certificate_dto_list_envelope_parseFromJSON(jsonsecurity_certificate_dto_list_envelope_1);
	cJSON* jsonsecurity_certificate_dto_list_envelope_2 = security_certificate_dto_list_envelope_convertToJSON(security_certificate_dto_list_envelope_2);
	printf("repeating security_certificate_dto_list_envelope:\n%s\n", cJSON_Print(jsonsecurity_certificate_dto_list_envelope_2));
}

int main() {
  test_security_certificate_dto_list_envelope(1);
  test_security_certificate_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_certificate_dto_list_envelope_MAIN
#endif // security_certificate_dto_list_envelope_TEST
