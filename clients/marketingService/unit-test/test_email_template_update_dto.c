#ifndef email_template_update_dto_TEST
#define email_template_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_template_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_template_update_dto.h"
email_template_update_dto_t* instantiate_email_template_update_dto(int include_optional);



email_template_update_dto_t* instantiate_email_template_update_dto(int include_optional) {
  email_template_update_dto_t* email_template_update_dto = NULL;
  if (include_optional) {
    email_template_update_dto = email_template_update_dto_create(
      56,
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
      marketingservice_email_template_update_dto_CODETYPE_Razor,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
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
      "0"
    );
  } else {
    email_template_update_dto = email_template_update_dto_create(
      56,
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
      marketingservice_email_template_update_dto_CODETYPE_Razor,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
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
      "0"
    );
  }

  return email_template_update_dto;
}


#ifdef email_template_update_dto_MAIN

void test_email_template_update_dto(int include_optional) {
    email_template_update_dto_t* email_template_update_dto_1 = instantiate_email_template_update_dto(include_optional);

	cJSON* jsonemail_template_update_dto_1 = email_template_update_dto_convertToJSON(email_template_update_dto_1);
	printf("email_template_update_dto :\n%s\n", cJSON_Print(jsonemail_template_update_dto_1));
	email_template_update_dto_t* email_template_update_dto_2 = email_template_update_dto_parseFromJSON(jsonemail_template_update_dto_1);
	cJSON* jsonemail_template_update_dto_2 = email_template_update_dto_convertToJSON(email_template_update_dto_2);
	printf("repeating email_template_update_dto:\n%s\n", cJSON_Print(jsonemail_template_update_dto_2));
}

int main() {
  test_email_template_update_dto(1);
  test_email_template_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_template_update_dto_MAIN
#endif // email_template_update_dto_TEST
