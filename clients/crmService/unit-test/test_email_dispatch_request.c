#ifndef email_dispatch_request_TEST
#define email_dispatch_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_dispatch_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_dispatch_request.h"
email_dispatch_request_t* instantiate_email_dispatch_request(int include_optional);



email_dispatch_request_t* instantiate_email_dispatch_request(int include_optional) {
  email_dispatch_request_t* email_dispatch_request = NULL;
  if (include_optional) {
    email_dispatch_request = email_dispatch_request_create(
      "0",
      "0123456789",
      "0",
      "0",
      "0",
      crmservice_email_dispatch_request_ALERTTYPE_None,
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0"
    );
  } else {
    email_dispatch_request = email_dispatch_request_create(
      "0",
      "0123456789",
      "0",
      "0",
      "0",
      crmservice_email_dispatch_request_ALERTTYPE_None,
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0"
    );
  }

  return email_dispatch_request;
}


#ifdef email_dispatch_request_MAIN

void test_email_dispatch_request(int include_optional) {
    email_dispatch_request_t* email_dispatch_request_1 = instantiate_email_dispatch_request(include_optional);

	cJSON* jsonemail_dispatch_request_1 = email_dispatch_request_convertToJSON(email_dispatch_request_1);
	printf("email_dispatch_request :\n%s\n", cJSON_Print(jsonemail_dispatch_request_1));
	email_dispatch_request_t* email_dispatch_request_2 = email_dispatch_request_parseFromJSON(jsonemail_dispatch_request_1);
	cJSON* jsonemail_dispatch_request_2 = email_dispatch_request_convertToJSON(email_dispatch_request_2);
	printf("repeating email_dispatch_request:\n%s\n", cJSON_Print(jsonemail_dispatch_request_2));
}

int main() {
  test_email_dispatch_request(1);
  test_email_dispatch_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_dispatch_request_MAIN
#endif // email_dispatch_request_TEST
