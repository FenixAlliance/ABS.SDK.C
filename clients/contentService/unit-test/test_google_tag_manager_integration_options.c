#ifndef google_tag_manager_integration_options_TEST
#define google_tag_manager_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define google_tag_manager_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/google_tag_manager_integration_options.h"
google_tag_manager_integration_options_t* instantiate_google_tag_manager_integration_options(int include_optional);



google_tag_manager_integration_options_t* instantiate_google_tag_manager_integration_options(int include_optional) {
  google_tag_manager_integration_options_t* google_tag_manager_integration_options = NULL;
  if (include_optional) {
    google_tag_manager_integration_options = google_tag_manager_integration_options_create(
      1,
      "0"
    );
  } else {
    google_tag_manager_integration_options = google_tag_manager_integration_options_create(
      1,
      "0"
    );
  }

  return google_tag_manager_integration_options;
}


#ifdef google_tag_manager_integration_options_MAIN

void test_google_tag_manager_integration_options(int include_optional) {
    google_tag_manager_integration_options_t* google_tag_manager_integration_options_1 = instantiate_google_tag_manager_integration_options(include_optional);

	cJSON* jsongoogle_tag_manager_integration_options_1 = google_tag_manager_integration_options_convertToJSON(google_tag_manager_integration_options_1);
	printf("google_tag_manager_integration_options :\n%s\n", cJSON_Print(jsongoogle_tag_manager_integration_options_1));
	google_tag_manager_integration_options_t* google_tag_manager_integration_options_2 = google_tag_manager_integration_options_parseFromJSON(jsongoogle_tag_manager_integration_options_1);
	cJSON* jsongoogle_tag_manager_integration_options_2 = google_tag_manager_integration_options_convertToJSON(google_tag_manager_integration_options_2);
	printf("repeating google_tag_manager_integration_options:\n%s\n", cJSON_Print(jsongoogle_tag_manager_integration_options_2));
}

int main() {
  test_google_tag_manager_integration_options(1);
  test_google_tag_manager_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // google_tag_manager_integration_options_MAIN
#endif // google_tag_manager_integration_options_TEST
