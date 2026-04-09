#ifndef email_group_dto_list_envelope_TEST
#define email_group_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_group_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_group_dto_list_envelope.h"
email_group_dto_list_envelope_t* instantiate_email_group_dto_list_envelope(int include_optional);



email_group_dto_list_envelope_t* instantiate_email_group_dto_list_envelope(int include_optional) {
  email_group_dto_list_envelope_t* email_group_dto_list_envelope = NULL;
  if (include_optional) {
    email_group_dto_list_envelope = email_group_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    email_group_dto_list_envelope = email_group_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return email_group_dto_list_envelope;
}


#ifdef email_group_dto_list_envelope_MAIN

void test_email_group_dto_list_envelope(int include_optional) {
    email_group_dto_list_envelope_t* email_group_dto_list_envelope_1 = instantiate_email_group_dto_list_envelope(include_optional);

	cJSON* jsonemail_group_dto_list_envelope_1 = email_group_dto_list_envelope_convertToJSON(email_group_dto_list_envelope_1);
	printf("email_group_dto_list_envelope :\n%s\n", cJSON_Print(jsonemail_group_dto_list_envelope_1));
	email_group_dto_list_envelope_t* email_group_dto_list_envelope_2 = email_group_dto_list_envelope_parseFromJSON(jsonemail_group_dto_list_envelope_1);
	cJSON* jsonemail_group_dto_list_envelope_2 = email_group_dto_list_envelope_convertToJSON(email_group_dto_list_envelope_2);
	printf("repeating email_group_dto_list_envelope:\n%s\n", cJSON_Print(jsonemail_group_dto_list_envelope_2));
}

int main() {
  test_email_group_dto_list_envelope(1);
  test_email_group_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_group_dto_list_envelope_MAIN
#endif // email_group_dto_list_envelope_TEST
