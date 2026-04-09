#ifndef google_maps_integration_options_TEST
#define google_maps_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define google_maps_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/google_maps_integration_options.h"
google_maps_integration_options_t* instantiate_google_maps_integration_options(int include_optional);



google_maps_integration_options_t* instantiate_google_maps_integration_options(int include_optional) {
  google_maps_integration_options_t* google_maps_integration_options = NULL;
  if (include_optional) {
    google_maps_integration_options = google_maps_integration_options_create(
      1,
      "0"
    );
  } else {
    google_maps_integration_options = google_maps_integration_options_create(
      1,
      "0"
    );
  }

  return google_maps_integration_options;
}


#ifdef google_maps_integration_options_MAIN

void test_google_maps_integration_options(int include_optional) {
    google_maps_integration_options_t* google_maps_integration_options_1 = instantiate_google_maps_integration_options(include_optional);

	cJSON* jsongoogle_maps_integration_options_1 = google_maps_integration_options_convertToJSON(google_maps_integration_options_1);
	printf("google_maps_integration_options :\n%s\n", cJSON_Print(jsongoogle_maps_integration_options_1));
	google_maps_integration_options_t* google_maps_integration_options_2 = google_maps_integration_options_parseFromJSON(jsongoogle_maps_integration_options_1);
	cJSON* jsongoogle_maps_integration_options_2 = google_maps_integration_options_convertToJSON(google_maps_integration_options_2);
	printf("repeating google_maps_integration_options:\n%s\n", cJSON_Print(jsongoogle_maps_integration_options_2));
}

int main() {
  test_google_maps_integration_options(1);
  test_google_maps_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // google_maps_integration_options_MAIN
#endif // google_maps_integration_options_TEST
