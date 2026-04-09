#ifndef email_signature_dto_TEST
#define email_signature_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_signature_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_signature_dto.h"
email_signature_dto_t* instantiate_email_signature_dto(int include_optional);



email_signature_dto_t* instantiate_email_signature_dto(int include_optional) {
  email_signature_dto_t* email_signature_dto = NULL;
  if (include_optional) {
    email_signature_dto = email_signature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      marketingservice_email_signature_dto_CODETYPE_Razor,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    email_signature_dto = email_signature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      marketingservice_email_signature_dto_CODETYPE_Razor,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return email_signature_dto;
}


#ifdef email_signature_dto_MAIN

void test_email_signature_dto(int include_optional) {
    email_signature_dto_t* email_signature_dto_1 = instantiate_email_signature_dto(include_optional);

	cJSON* jsonemail_signature_dto_1 = email_signature_dto_convertToJSON(email_signature_dto_1);
	printf("email_signature_dto :\n%s\n", cJSON_Print(jsonemail_signature_dto_1));
	email_signature_dto_t* email_signature_dto_2 = email_signature_dto_parseFromJSON(jsonemail_signature_dto_1);
	cJSON* jsonemail_signature_dto_2 = email_signature_dto_convertToJSON(email_signature_dto_2);
	printf("repeating email_signature_dto:\n%s\n", cJSON_Print(jsonemail_signature_dto_2));
}

int main() {
  test_email_signature_dto(1);
  test_email_signature_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_signature_dto_MAIN
#endif // email_signature_dto_TEST
