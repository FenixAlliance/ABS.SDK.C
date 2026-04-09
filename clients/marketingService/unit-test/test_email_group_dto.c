#ifndef email_group_dto_TEST
#define email_group_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_group_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_group_dto.h"
email_group_dto_t* instantiate_email_group_dto(int include_optional);



email_group_dto_t* instantiate_email_group_dto(int include_optional) {
  email_group_dto_t* email_group_dto = NULL;
  if (include_optional) {
    email_group_dto = email_group_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    email_group_dto = email_group_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return email_group_dto;
}


#ifdef email_group_dto_MAIN

void test_email_group_dto(int include_optional) {
    email_group_dto_t* email_group_dto_1 = instantiate_email_group_dto(include_optional);

	cJSON* jsonemail_group_dto_1 = email_group_dto_convertToJSON(email_group_dto_1);
	printf("email_group_dto :\n%s\n", cJSON_Print(jsonemail_group_dto_1));
	email_group_dto_t* email_group_dto_2 = email_group_dto_parseFromJSON(jsonemail_group_dto_1);
	cJSON* jsonemail_group_dto_2 = email_group_dto_convertToJSON(email_group_dto_2);
	printf("repeating email_group_dto:\n%s\n", cJSON_Print(jsonemail_group_dto_2));
}

int main() {
  test_email_group_dto(1);
  test_email_group_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_group_dto_MAIN
#endif // email_group_dto_TEST
