#ifndef inquiry_request_dto_list_envelope_TEST
#define inquiry_request_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inquiry_request_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inquiry_request_dto_list_envelope.h"
inquiry_request_dto_list_envelope_t* instantiate_inquiry_request_dto_list_envelope(int include_optional);



inquiry_request_dto_list_envelope_t* instantiate_inquiry_request_dto_list_envelope(int include_optional) {
  inquiry_request_dto_list_envelope_t* inquiry_request_dto_list_envelope = NULL;
  if (include_optional) {
    inquiry_request_dto_list_envelope = inquiry_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    inquiry_request_dto_list_envelope = inquiry_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return inquiry_request_dto_list_envelope;
}


#ifdef inquiry_request_dto_list_envelope_MAIN

void test_inquiry_request_dto_list_envelope(int include_optional) {
    inquiry_request_dto_list_envelope_t* inquiry_request_dto_list_envelope_1 = instantiate_inquiry_request_dto_list_envelope(include_optional);

	cJSON* jsoninquiry_request_dto_list_envelope_1 = inquiry_request_dto_list_envelope_convertToJSON(inquiry_request_dto_list_envelope_1);
	printf("inquiry_request_dto_list_envelope :\n%s\n", cJSON_Print(jsoninquiry_request_dto_list_envelope_1));
	inquiry_request_dto_list_envelope_t* inquiry_request_dto_list_envelope_2 = inquiry_request_dto_list_envelope_parseFromJSON(jsoninquiry_request_dto_list_envelope_1);
	cJSON* jsoninquiry_request_dto_list_envelope_2 = inquiry_request_dto_list_envelope_convertToJSON(inquiry_request_dto_list_envelope_2);
	printf("repeating inquiry_request_dto_list_envelope:\n%s\n", cJSON_Print(jsoninquiry_request_dto_list_envelope_2));
}

int main() {
  test_inquiry_request_dto_list_envelope(1);
  test_inquiry_request_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // inquiry_request_dto_list_envelope_MAIN
#endif // inquiry_request_dto_list_envelope_TEST
