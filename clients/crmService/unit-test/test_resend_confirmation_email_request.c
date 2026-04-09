#ifndef resend_confirmation_email_request_TEST
#define resend_confirmation_email_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resend_confirmation_email_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resend_confirmation_email_request.h"
resend_confirmation_email_request_t* instantiate_resend_confirmation_email_request(int include_optional);



resend_confirmation_email_request_t* instantiate_resend_confirmation_email_request(int include_optional) {
  resend_confirmation_email_request_t* resend_confirmation_email_request = NULL;
  if (include_optional) {
    resend_confirmation_email_request = resend_confirmation_email_request_create(
      "0"
    );
  } else {
    resend_confirmation_email_request = resend_confirmation_email_request_create(
      "0"
    );
  }

  return resend_confirmation_email_request;
}


#ifdef resend_confirmation_email_request_MAIN

void test_resend_confirmation_email_request(int include_optional) {
    resend_confirmation_email_request_t* resend_confirmation_email_request_1 = instantiate_resend_confirmation_email_request(include_optional);

	cJSON* jsonresend_confirmation_email_request_1 = resend_confirmation_email_request_convertToJSON(resend_confirmation_email_request_1);
	printf("resend_confirmation_email_request :\n%s\n", cJSON_Print(jsonresend_confirmation_email_request_1));
	resend_confirmation_email_request_t* resend_confirmation_email_request_2 = resend_confirmation_email_request_parseFromJSON(jsonresend_confirmation_email_request_1);
	cJSON* jsonresend_confirmation_email_request_2 = resend_confirmation_email_request_convertToJSON(resend_confirmation_email_request_2);
	printf("repeating resend_confirmation_email_request:\n%s\n", cJSON_Print(jsonresend_confirmation_email_request_2));
}

int main() {
  test_resend_confirmation_email_request(1);
  test_resend_confirmation_email_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // resend_confirmation_email_request_MAIN
#endif // resend_confirmation_email_request_TEST
