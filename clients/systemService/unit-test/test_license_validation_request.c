#ifndef license_validation_request_TEST
#define license_validation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_validation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_validation_request.h"
license_validation_request_t* instantiate_license_validation_request(int include_optional);



license_validation_request_t* instantiate_license_validation_request(int include_optional) {
  license_validation_request_t* license_validation_request = NULL;
  if (include_optional) {
    license_validation_request = license_validation_request_create(
      "a"
    );
  } else {
    license_validation_request = license_validation_request_create(
      "a"
    );
  }

  return license_validation_request;
}


#ifdef license_validation_request_MAIN

void test_license_validation_request(int include_optional) {
    license_validation_request_t* license_validation_request_1 = instantiate_license_validation_request(include_optional);

	cJSON* jsonlicense_validation_request_1 = license_validation_request_convertToJSON(license_validation_request_1);
	printf("license_validation_request :\n%s\n", cJSON_Print(jsonlicense_validation_request_1));
	license_validation_request_t* license_validation_request_2 = license_validation_request_parseFromJSON(jsonlicense_validation_request_1);
	cJSON* jsonlicense_validation_request_2 = license_validation_request_convertToJSON(license_validation_request_2);
	printf("repeating license_validation_request:\n%s\n", cJSON_Print(jsonlicense_validation_request_2));
}

int main() {
  test_license_validation_request(1);
  test_license_validation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_validation_request_MAIN
#endif // license_validation_request_TEST
