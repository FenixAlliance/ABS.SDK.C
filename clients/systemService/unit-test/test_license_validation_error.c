#ifndef license_validation_error_TEST
#define license_validation_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_validation_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_validation_error.h"
license_validation_error_t* instantiate_license_validation_error(int include_optional);



license_validation_error_t* instantiate_license_validation_error(int include_optional) {
  license_validation_error_t* license_validation_error = NULL;
  if (include_optional) {
    license_validation_error = license_validation_error_create(
      "0",
      "0"
    );
  } else {
    license_validation_error = license_validation_error_create(
      "0",
      "0"
    );
  }

  return license_validation_error;
}


#ifdef license_validation_error_MAIN

void test_license_validation_error(int include_optional) {
    license_validation_error_t* license_validation_error_1 = instantiate_license_validation_error(include_optional);

	cJSON* jsonlicense_validation_error_1 = license_validation_error_convertToJSON(license_validation_error_1);
	printf("license_validation_error :\n%s\n", cJSON_Print(jsonlicense_validation_error_1));
	license_validation_error_t* license_validation_error_2 = license_validation_error_parseFromJSON(jsonlicense_validation_error_1);
	cJSON* jsonlicense_validation_error_2 = license_validation_error_convertToJSON(license_validation_error_2);
	printf("repeating license_validation_error:\n%s\n", cJSON_Print(jsonlicense_validation_error_2));
}

int main() {
  test_license_validation_error(1);
  test_license_validation_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_validation_error_MAIN
#endif // license_validation_error_TEST
