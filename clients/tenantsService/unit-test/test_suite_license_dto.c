#ifndef suite_license_dto_TEST
#define suite_license_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define suite_license_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/suite_license_dto.h"
suite_license_dto_t* instantiate_suite_license_dto(int include_optional);



suite_license_dto_t* instantiate_suite_license_dto(int include_optional) {
  suite_license_dto_t* suite_license_dto = NULL;
  if (include_optional) {
    suite_license_dto = suite_license_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      56
    );
  } else {
    suite_license_dto = suite_license_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      56
    );
  }

  return suite_license_dto;
}


#ifdef suite_license_dto_MAIN

void test_suite_license_dto(int include_optional) {
    suite_license_dto_t* suite_license_dto_1 = instantiate_suite_license_dto(include_optional);

	cJSON* jsonsuite_license_dto_1 = suite_license_dto_convertToJSON(suite_license_dto_1);
	printf("suite_license_dto :\n%s\n", cJSON_Print(jsonsuite_license_dto_1));
	suite_license_dto_t* suite_license_dto_2 = suite_license_dto_parseFromJSON(jsonsuite_license_dto_1);
	cJSON* jsonsuite_license_dto_2 = suite_license_dto_convertToJSON(suite_license_dto_2);
	printf("repeating suite_license_dto:\n%s\n", cJSON_Print(jsonsuite_license_dto_2));
}

int main() {
  test_suite_license_dto(1);
  test_suite_license_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // suite_license_dto_MAIN
#endif // suite_license_dto_TEST
