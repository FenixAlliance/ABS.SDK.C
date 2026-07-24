#ifndef licensing_certificate_dto_TEST
#define licensing_certificate_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licensing_certificate_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licensing_certificate_dto.h"
licensing_certificate_dto_t* instantiate_licensing_certificate_dto(int include_optional);



licensing_certificate_dto_t* instantiate_licensing_certificate_dto(int include_optional) {
  licensing_certificate_dto_t* licensing_certificate_dto = NULL;
  if (include_optional) {
    licensing_certificate_dto = licensing_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    licensing_certificate_dto = licensing_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return licensing_certificate_dto;
}


#ifdef licensing_certificate_dto_MAIN

void test_licensing_certificate_dto(int include_optional) {
    licensing_certificate_dto_t* licensing_certificate_dto_1 = instantiate_licensing_certificate_dto(include_optional);

	cJSON* jsonlicensing_certificate_dto_1 = licensing_certificate_dto_convertToJSON(licensing_certificate_dto_1);
	printf("licensing_certificate_dto :\n%s\n", cJSON_Print(jsonlicensing_certificate_dto_1));
	licensing_certificate_dto_t* licensing_certificate_dto_2 = licensing_certificate_dto_parseFromJSON(jsonlicensing_certificate_dto_1);
	cJSON* jsonlicensing_certificate_dto_2 = licensing_certificate_dto_convertToJSON(licensing_certificate_dto_2);
	printf("repeating licensing_certificate_dto:\n%s\n", cJSON_Print(jsonlicensing_certificate_dto_2));
}

int main() {
  test_licensing_certificate_dto(1);
  test_licensing_certificate_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // licensing_certificate_dto_MAIN
#endif // licensing_certificate_dto_TEST
