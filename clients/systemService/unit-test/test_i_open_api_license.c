#ifndef i_open_api_license_TEST
#define i_open_api_license_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_open_api_license_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_open_api_license.h"
i_open_api_license_t* instantiate_i_open_api_license(int include_optional);



i_open_api_license_t* instantiate_i_open_api_license(int include_optional) {
  i_open_api_license_t* i_open_api_license = NULL;
  if (include_optional) {
    i_open_api_license = i_open_api_license_create(
      "0",
      "0"
    );
  } else {
    i_open_api_license = i_open_api_license_create(
      "0",
      "0"
    );
  }

  return i_open_api_license;
}


#ifdef i_open_api_license_MAIN

void test_i_open_api_license(int include_optional) {
    i_open_api_license_t* i_open_api_license_1 = instantiate_i_open_api_license(include_optional);

	cJSON* jsoni_open_api_license_1 = i_open_api_license_convertToJSON(i_open_api_license_1);
	printf("i_open_api_license :\n%s\n", cJSON_Print(jsoni_open_api_license_1));
	i_open_api_license_t* i_open_api_license_2 = i_open_api_license_parseFromJSON(jsoni_open_api_license_1);
	cJSON* jsoni_open_api_license_2 = i_open_api_license_convertToJSON(i_open_api_license_2);
	printf("repeating i_open_api_license:\n%s\n", cJSON_Print(jsoni_open_api_license_2));
}

int main() {
  test_i_open_api_license(1);
  test_i_open_api_license(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_open_api_license_MAIN
#endif // i_open_api_license_TEST
