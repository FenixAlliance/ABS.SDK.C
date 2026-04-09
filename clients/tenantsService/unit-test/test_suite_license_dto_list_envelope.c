#ifndef suite_license_dto_list_envelope_TEST
#define suite_license_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define suite_license_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/suite_license_dto_list_envelope.h"
suite_license_dto_list_envelope_t* instantiate_suite_license_dto_list_envelope(int include_optional);



suite_license_dto_list_envelope_t* instantiate_suite_license_dto_list_envelope(int include_optional) {
  suite_license_dto_list_envelope_t* suite_license_dto_list_envelope = NULL;
  if (include_optional) {
    suite_license_dto_list_envelope = suite_license_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    suite_license_dto_list_envelope = suite_license_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return suite_license_dto_list_envelope;
}


#ifdef suite_license_dto_list_envelope_MAIN

void test_suite_license_dto_list_envelope(int include_optional) {
    suite_license_dto_list_envelope_t* suite_license_dto_list_envelope_1 = instantiate_suite_license_dto_list_envelope(include_optional);

	cJSON* jsonsuite_license_dto_list_envelope_1 = suite_license_dto_list_envelope_convertToJSON(suite_license_dto_list_envelope_1);
	printf("suite_license_dto_list_envelope :\n%s\n", cJSON_Print(jsonsuite_license_dto_list_envelope_1));
	suite_license_dto_list_envelope_t* suite_license_dto_list_envelope_2 = suite_license_dto_list_envelope_parseFromJSON(jsonsuite_license_dto_list_envelope_1);
	cJSON* jsonsuite_license_dto_list_envelope_2 = suite_license_dto_list_envelope_convertToJSON(suite_license_dto_list_envelope_2);
	printf("repeating suite_license_dto_list_envelope:\n%s\n", cJSON_Print(jsonsuite_license_dto_list_envelope_2));
}

int main() {
  test_suite_license_dto_list_envelope(1);
  test_suite_license_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // suite_license_dto_list_envelope_MAIN
#endif // suite_license_dto_list_envelope_TEST
