#ifndef license_dto_list_envelope_TEST
#define license_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_dto_list_envelope.h"
license_dto_list_envelope_t* instantiate_license_dto_list_envelope(int include_optional);



license_dto_list_envelope_t* instantiate_license_dto_list_envelope(int include_optional) {
  license_dto_list_envelope_t* license_dto_list_envelope = NULL;
  if (include_optional) {
    license_dto_list_envelope = license_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    license_dto_list_envelope = license_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return license_dto_list_envelope;
}


#ifdef license_dto_list_envelope_MAIN

void test_license_dto_list_envelope(int include_optional) {
    license_dto_list_envelope_t* license_dto_list_envelope_1 = instantiate_license_dto_list_envelope(include_optional);

	cJSON* jsonlicense_dto_list_envelope_1 = license_dto_list_envelope_convertToJSON(license_dto_list_envelope_1);
	printf("license_dto_list_envelope :\n%s\n", cJSON_Print(jsonlicense_dto_list_envelope_1));
	license_dto_list_envelope_t* license_dto_list_envelope_2 = license_dto_list_envelope_parseFromJSON(jsonlicense_dto_list_envelope_1);
	cJSON* jsonlicense_dto_list_envelope_2 = license_dto_list_envelope_convertToJSON(license_dto_list_envelope_2);
	printf("repeating license_dto_list_envelope:\n%s\n", cJSON_Print(jsonlicense_dto_list_envelope_2));
}

int main() {
  test_license_dto_list_envelope(1);
  test_license_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_dto_list_envelope_MAIN
#endif // license_dto_list_envelope_TEST
