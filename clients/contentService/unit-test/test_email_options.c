#ifndef email_options_TEST
#define email_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_options.h"
email_options_t* instantiate_email_options(int include_optional);



email_options_t* instantiate_email_options(int include_optional) {
  email_options_t* email_options = NULL;
  if (include_optional) {
    email_options = email_options_create(
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
      "0"
    );
  } else {
    email_options = email_options_create(
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
      "0"
    );
  }

  return email_options;
}


#ifdef email_options_MAIN

void test_email_options(int include_optional) {
    email_options_t* email_options_1 = instantiate_email_options(include_optional);

	cJSON* jsonemail_options_1 = email_options_convertToJSON(email_options_1);
	printf("email_options :\n%s\n", cJSON_Print(jsonemail_options_1));
	email_options_t* email_options_2 = email_options_parseFromJSON(jsonemail_options_1);
	cJSON* jsonemail_options_2 = email_options_convertToJSON(email_options_2);
	printf("repeating email_options:\n%s\n", cJSON_Print(jsonemail_options_2));
}

int main() {
  test_email_options(1);
  test_email_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_options_MAIN
#endif // email_options_TEST
