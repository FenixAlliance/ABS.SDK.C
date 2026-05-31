#ifndef inquiry_request_update_dto_TEST
#define inquiry_request_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inquiry_request_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inquiry_request_update_dto.h"
inquiry_request_update_dto_t* instantiate_inquiry_request_update_dto(int include_optional);



inquiry_request_update_dto_t* instantiate_inquiry_request_update_dto(int include_optional) {
  inquiry_request_update_dto_t* inquiry_request_update_dto = NULL;
  if (include_optional) {
    inquiry_request_update_dto = inquiry_request_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    inquiry_request_update_dto = inquiry_request_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return inquiry_request_update_dto;
}


#ifdef inquiry_request_update_dto_MAIN

void test_inquiry_request_update_dto(int include_optional) {
    inquiry_request_update_dto_t* inquiry_request_update_dto_1 = instantiate_inquiry_request_update_dto(include_optional);

	cJSON* jsoninquiry_request_update_dto_1 = inquiry_request_update_dto_convertToJSON(inquiry_request_update_dto_1);
	printf("inquiry_request_update_dto :\n%s\n", cJSON_Print(jsoninquiry_request_update_dto_1));
	inquiry_request_update_dto_t* inquiry_request_update_dto_2 = inquiry_request_update_dto_parseFromJSON(jsoninquiry_request_update_dto_1);
	cJSON* jsoninquiry_request_update_dto_2 = inquiry_request_update_dto_convertToJSON(inquiry_request_update_dto_2);
	printf("repeating inquiry_request_update_dto:\n%s\n", cJSON_Print(jsoninquiry_request_update_dto_2));
}

int main() {
  test_inquiry_request_update_dto(1);
  test_inquiry_request_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // inquiry_request_update_dto_MAIN
#endif // inquiry_request_update_dto_TEST
