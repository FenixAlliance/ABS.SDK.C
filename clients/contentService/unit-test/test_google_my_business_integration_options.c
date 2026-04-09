#ifndef google_my_business_integration_options_TEST
#define google_my_business_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define google_my_business_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/google_my_business_integration_options.h"
google_my_business_integration_options_t* instantiate_google_my_business_integration_options(int include_optional);



google_my_business_integration_options_t* instantiate_google_my_business_integration_options(int include_optional) {
  google_my_business_integration_options_t* google_my_business_integration_options = NULL;
  if (include_optional) {
    google_my_business_integration_options = google_my_business_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    google_my_business_integration_options = google_my_business_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return google_my_business_integration_options;
}


#ifdef google_my_business_integration_options_MAIN

void test_google_my_business_integration_options(int include_optional) {
    google_my_business_integration_options_t* google_my_business_integration_options_1 = instantiate_google_my_business_integration_options(include_optional);

	cJSON* jsongoogle_my_business_integration_options_1 = google_my_business_integration_options_convertToJSON(google_my_business_integration_options_1);
	printf("google_my_business_integration_options :\n%s\n", cJSON_Print(jsongoogle_my_business_integration_options_1));
	google_my_business_integration_options_t* google_my_business_integration_options_2 = google_my_business_integration_options_parseFromJSON(jsongoogle_my_business_integration_options_1);
	cJSON* jsongoogle_my_business_integration_options_2 = google_my_business_integration_options_convertToJSON(google_my_business_integration_options_2);
	printf("repeating google_my_business_integration_options:\n%s\n", cJSON_Print(jsongoogle_my_business_integration_options_2));
}

int main() {
  test_google_my_business_integration_options(1);
  test_google_my_business_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // google_my_business_integration_options_MAIN
#endif // google_my_business_integration_options_TEST
