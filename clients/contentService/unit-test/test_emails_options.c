#ifndef emails_options_TEST
#define emails_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emails_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emails_options.h"
emails_options_t* instantiate_emails_options(int include_optional);



emails_options_t* instantiate_emails_options(int include_optional) {
  emails_options_t* emails_options = NULL;
  if (include_optional) {
    emails_options = emails_options_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    emails_options = emails_options_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return emails_options;
}


#ifdef emails_options_MAIN

void test_emails_options(int include_optional) {
    emails_options_t* emails_options_1 = instantiate_emails_options(include_optional);

	cJSON* jsonemails_options_1 = emails_options_convertToJSON(emails_options_1);
	printf("emails_options :\n%s\n", cJSON_Print(jsonemails_options_1));
	emails_options_t* emails_options_2 = emails_options_parseFromJSON(jsonemails_options_1);
	cJSON* jsonemails_options_2 = emails_options_convertToJSON(emails_options_2);
	printf("repeating emails_options:\n%s\n", cJSON_Print(jsonemails_options_2));
}

int main() {
  test_emails_options(1);
  test_emails_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // emails_options_MAIN
#endif // emails_options_TEST
