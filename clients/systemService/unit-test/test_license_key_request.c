#ifndef license_key_request_TEST
#define license_key_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_key_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_key_request.h"
license_key_request_t* instantiate_license_key_request(int include_optional);



license_key_request_t* instantiate_license_key_request(int include_optional) {
  license_key_request_t* license_key_request = NULL;
  if (include_optional) {
    license_key_request = license_key_request_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      systemservice_license_key_request_LICENSETYPE_Trial,
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList()
    );
  } else {
    license_key_request = license_key_request_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      systemservice_license_key_request_LICENSETYPE_Trial,
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList()
    );
  }

  return license_key_request;
}


#ifdef license_key_request_MAIN

void test_license_key_request(int include_optional) {
    license_key_request_t* license_key_request_1 = instantiate_license_key_request(include_optional);

	cJSON* jsonlicense_key_request_1 = license_key_request_convertToJSON(license_key_request_1);
	printf("license_key_request :\n%s\n", cJSON_Print(jsonlicense_key_request_1));
	license_key_request_t* license_key_request_2 = license_key_request_parseFromJSON(jsonlicense_key_request_1);
	cJSON* jsonlicense_key_request_2 = license_key_request_convertToJSON(license_key_request_2);
	printf("repeating license_key_request:\n%s\n", cJSON_Print(jsonlicense_key_request_2));
}

int main() {
  test_license_key_request(1);
  test_license_key_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_key_request_MAIN
#endif // license_key_request_TEST
