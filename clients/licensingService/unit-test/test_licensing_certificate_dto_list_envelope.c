#ifndef licensing_certificate_dto_list_envelope_TEST
#define licensing_certificate_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licensing_certificate_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licensing_certificate_dto_list_envelope.h"
licensing_certificate_dto_list_envelope_t* instantiate_licensing_certificate_dto_list_envelope(int include_optional);



licensing_certificate_dto_list_envelope_t* instantiate_licensing_certificate_dto_list_envelope(int include_optional) {
  licensing_certificate_dto_list_envelope_t* licensing_certificate_dto_list_envelope = NULL;
  if (include_optional) {
    licensing_certificate_dto_list_envelope = licensing_certificate_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    licensing_certificate_dto_list_envelope = licensing_certificate_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return licensing_certificate_dto_list_envelope;
}


#ifdef licensing_certificate_dto_list_envelope_MAIN

void test_licensing_certificate_dto_list_envelope(int include_optional) {
    licensing_certificate_dto_list_envelope_t* licensing_certificate_dto_list_envelope_1 = instantiate_licensing_certificate_dto_list_envelope(include_optional);

	cJSON* jsonlicensing_certificate_dto_list_envelope_1 = licensing_certificate_dto_list_envelope_convertToJSON(licensing_certificate_dto_list_envelope_1);
	printf("licensing_certificate_dto_list_envelope :\n%s\n", cJSON_Print(jsonlicensing_certificate_dto_list_envelope_1));
	licensing_certificate_dto_list_envelope_t* licensing_certificate_dto_list_envelope_2 = licensing_certificate_dto_list_envelope_parseFromJSON(jsonlicensing_certificate_dto_list_envelope_1);
	cJSON* jsonlicensing_certificate_dto_list_envelope_2 = licensing_certificate_dto_list_envelope_convertToJSON(licensing_certificate_dto_list_envelope_2);
	printf("repeating licensing_certificate_dto_list_envelope:\n%s\n", cJSON_Print(jsonlicensing_certificate_dto_list_envelope_2));
}

int main() {
  test_licensing_certificate_dto_list_envelope(1);
  test_licensing_certificate_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // licensing_certificate_dto_list_envelope_MAIN
#endif // licensing_certificate_dto_list_envelope_TEST
