#ifndef sendgrid_integrations_options_TEST
#define sendgrid_integrations_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sendgrid_integrations_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sendgrid_integrations_options.h"
sendgrid_integrations_options_t* instantiate_sendgrid_integrations_options(int include_optional);



sendgrid_integrations_options_t* instantiate_sendgrid_integrations_options(int include_optional) {
  sendgrid_integrations_options_t* sendgrid_integrations_options = NULL;
  if (include_optional) {
    sendgrid_integrations_options = sendgrid_integrations_options_create(
      1,
      "0"
    );
  } else {
    sendgrid_integrations_options = sendgrid_integrations_options_create(
      1,
      "0"
    );
  }

  return sendgrid_integrations_options;
}


#ifdef sendgrid_integrations_options_MAIN

void test_sendgrid_integrations_options(int include_optional) {
    sendgrid_integrations_options_t* sendgrid_integrations_options_1 = instantiate_sendgrid_integrations_options(include_optional);

	cJSON* jsonsendgrid_integrations_options_1 = sendgrid_integrations_options_convertToJSON(sendgrid_integrations_options_1);
	printf("sendgrid_integrations_options :\n%s\n", cJSON_Print(jsonsendgrid_integrations_options_1));
	sendgrid_integrations_options_t* sendgrid_integrations_options_2 = sendgrid_integrations_options_parseFromJSON(jsonsendgrid_integrations_options_1);
	cJSON* jsonsendgrid_integrations_options_2 = sendgrid_integrations_options_convertToJSON(sendgrid_integrations_options_2);
	printf("repeating sendgrid_integrations_options:\n%s\n", cJSON_Print(jsonsendgrid_integrations_options_2));
}

int main() {
  test_sendgrid_integrations_options(1);
  test_sendgrid_integrations_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // sendgrid_integrations_options_MAIN
#endif // sendgrid_integrations_options_TEST
