#ifndef security_certificate_dto_TEST
#define security_certificate_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_certificate_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_certificate_dto.h"
security_certificate_dto_t* instantiate_security_certificate_dto(int include_optional);



security_certificate_dto_t* instantiate_security_certificate_dto(int include_optional) {
  security_certificate_dto_t* security_certificate_dto = NULL;
  if (include_optional) {
    security_certificate_dto = security_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      1,
      "0",
      "0"
    );
  } else {
    security_certificate_dto = security_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      1,
      "0",
      "0"
    );
  }

  return security_certificate_dto;
}


#ifdef security_certificate_dto_MAIN

void test_security_certificate_dto(int include_optional) {
    security_certificate_dto_t* security_certificate_dto_1 = instantiate_security_certificate_dto(include_optional);

	cJSON* jsonsecurity_certificate_dto_1 = security_certificate_dto_convertToJSON(security_certificate_dto_1);
	printf("security_certificate_dto :\n%s\n", cJSON_Print(jsonsecurity_certificate_dto_1));
	security_certificate_dto_t* security_certificate_dto_2 = security_certificate_dto_parseFromJSON(jsonsecurity_certificate_dto_1);
	cJSON* jsonsecurity_certificate_dto_2 = security_certificate_dto_convertToJSON(security_certificate_dto_2);
	printf("repeating security_certificate_dto:\n%s\n", cJSON_Print(jsonsecurity_certificate_dto_2));
}

int main() {
  test_security_certificate_dto(1);
  test_security_certificate_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_certificate_dto_MAIN
#endif // security_certificate_dto_TEST
