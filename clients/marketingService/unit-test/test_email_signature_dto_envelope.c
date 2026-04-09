#ifndef email_signature_dto_envelope_TEST
#define email_signature_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_signature_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_signature_dto_envelope.h"
email_signature_dto_envelope_t* instantiate_email_signature_dto_envelope(int include_optional);

#include "test_email_signature_dto.c"


email_signature_dto_envelope_t* instantiate_email_signature_dto_envelope(int include_optional) {
  email_signature_dto_envelope_t* email_signature_dto_envelope = NULL;
  if (include_optional) {
    email_signature_dto_envelope = email_signature_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_email_signature_dto(0)
    );
  } else {
    email_signature_dto_envelope = email_signature_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return email_signature_dto_envelope;
}


#ifdef email_signature_dto_envelope_MAIN

void test_email_signature_dto_envelope(int include_optional) {
    email_signature_dto_envelope_t* email_signature_dto_envelope_1 = instantiate_email_signature_dto_envelope(include_optional);

	cJSON* jsonemail_signature_dto_envelope_1 = email_signature_dto_envelope_convertToJSON(email_signature_dto_envelope_1);
	printf("email_signature_dto_envelope :\n%s\n", cJSON_Print(jsonemail_signature_dto_envelope_1));
	email_signature_dto_envelope_t* email_signature_dto_envelope_2 = email_signature_dto_envelope_parseFromJSON(jsonemail_signature_dto_envelope_1);
	cJSON* jsonemail_signature_dto_envelope_2 = email_signature_dto_envelope_convertToJSON(email_signature_dto_envelope_2);
	printf("repeating email_signature_dto_envelope:\n%s\n", cJSON_Print(jsonemail_signature_dto_envelope_2));
}

int main() {
  test_email_signature_dto_envelope(1);
  test_email_signature_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_signature_dto_envelope_MAIN
#endif // email_signature_dto_envelope_TEST
