#ifndef free_geo_ip_integration_options_TEST
#define free_geo_ip_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define free_geo_ip_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/free_geo_ip_integration_options.h"
free_geo_ip_integration_options_t* instantiate_free_geo_ip_integration_options(int include_optional);



free_geo_ip_integration_options_t* instantiate_free_geo_ip_integration_options(int include_optional) {
  free_geo_ip_integration_options_t* free_geo_ip_integration_options = NULL;
  if (include_optional) {
    free_geo_ip_integration_options = free_geo_ip_integration_options_create(
      1,
      "0"
    );
  } else {
    free_geo_ip_integration_options = free_geo_ip_integration_options_create(
      1,
      "0"
    );
  }

  return free_geo_ip_integration_options;
}


#ifdef free_geo_ip_integration_options_MAIN

void test_free_geo_ip_integration_options(int include_optional) {
    free_geo_ip_integration_options_t* free_geo_ip_integration_options_1 = instantiate_free_geo_ip_integration_options(include_optional);

	cJSON* jsonfree_geo_ip_integration_options_1 = free_geo_ip_integration_options_convertToJSON(free_geo_ip_integration_options_1);
	printf("free_geo_ip_integration_options :\n%s\n", cJSON_Print(jsonfree_geo_ip_integration_options_1));
	free_geo_ip_integration_options_t* free_geo_ip_integration_options_2 = free_geo_ip_integration_options_parseFromJSON(jsonfree_geo_ip_integration_options_1);
	cJSON* jsonfree_geo_ip_integration_options_2 = free_geo_ip_integration_options_convertToJSON(free_geo_ip_integration_options_2);
	printf("repeating free_geo_ip_integration_options:\n%s\n", cJSON_Print(jsonfree_geo_ip_integration_options_2));
}

int main() {
  test_free_geo_ip_integration_options(1);
  test_free_geo_ip_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // free_geo_ip_integration_options_MAIN
#endif // free_geo_ip_integration_options_TEST
