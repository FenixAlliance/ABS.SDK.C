#ifndef google_analytics_TEST
#define google_analytics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define google_analytics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/google_analytics.h"
google_analytics_t* instantiate_google_analytics(int include_optional);



google_analytics_t* instantiate_google_analytics(int include_optional) {
  google_analytics_t* google_analytics = NULL;
  if (include_optional) {
    google_analytics = google_analytics_create(
      1,
      "0"
    );
  } else {
    google_analytics = google_analytics_create(
      1,
      "0"
    );
  }

  return google_analytics;
}


#ifdef google_analytics_MAIN

void test_google_analytics(int include_optional) {
    google_analytics_t* google_analytics_1 = instantiate_google_analytics(include_optional);

	cJSON* jsongoogle_analytics_1 = google_analytics_convertToJSON(google_analytics_1);
	printf("google_analytics :\n%s\n", cJSON_Print(jsongoogle_analytics_1));
	google_analytics_t* google_analytics_2 = google_analytics_parseFromJSON(jsongoogle_analytics_1);
	cJSON* jsongoogle_analytics_2 = google_analytics_convertToJSON(google_analytics_2);
	printf("repeating google_analytics:\n%s\n", cJSON_Print(jsongoogle_analytics_2));
}

int main() {
  test_google_analytics(1);
  test_google_analytics(0);

  printf("Hello world \n");
  return 0;
}

#endif // google_analytics_MAIN
#endif // google_analytics_TEST
