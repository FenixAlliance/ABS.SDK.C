#ifndef license_key_TEST
#define license_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_key.h"
license_key_t* instantiate_license_key(int include_optional);



license_key_t* instantiate_license_key(int include_optional) {
  license_key_t* license_key = NULL;
  if (include_optional) {
    license_key = license_key_create(
      "0"
    );
  } else {
    license_key = license_key_create(
      "0"
    );
  }

  return license_key;
}


#ifdef license_key_MAIN

void test_license_key(int include_optional) {
    license_key_t* license_key_1 = instantiate_license_key(include_optional);

	cJSON* jsonlicense_key_1 = license_key_convertToJSON(license_key_1);
	printf("license_key :\n%s\n", cJSON_Print(jsonlicense_key_1));
	license_key_t* license_key_2 = license_key_parseFromJSON(jsonlicense_key_1);
	cJSON* jsonlicense_key_2 = license_key_convertToJSON(license_key_2);
	printf("repeating license_key:\n%s\n", cJSON_Print(jsonlicense_key_2));
}

int main() {
  test_license_key(1);
  test_license_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_key_MAIN
#endif // license_key_TEST
