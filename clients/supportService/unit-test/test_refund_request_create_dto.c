#ifndef refund_request_create_dto_TEST
#define refund_request_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define refund_request_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/refund_request_create_dto.h"
refund_request_create_dto_t* instantiate_refund_request_create_dto(int include_optional);



refund_request_create_dto_t* instantiate_refund_request_create_dto(int include_optional) {
  refund_request_create_dto_t* refund_request_create_dto = NULL;
  if (include_optional) {
    refund_request_create_dto = refund_request_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    refund_request_create_dto = refund_request_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return refund_request_create_dto;
}


#ifdef refund_request_create_dto_MAIN

void test_refund_request_create_dto(int include_optional) {
    refund_request_create_dto_t* refund_request_create_dto_1 = instantiate_refund_request_create_dto(include_optional);

	cJSON* jsonrefund_request_create_dto_1 = refund_request_create_dto_convertToJSON(refund_request_create_dto_1);
	printf("refund_request_create_dto :\n%s\n", cJSON_Print(jsonrefund_request_create_dto_1));
	refund_request_create_dto_t* refund_request_create_dto_2 = refund_request_create_dto_parseFromJSON(jsonrefund_request_create_dto_1);
	cJSON* jsonrefund_request_create_dto_2 = refund_request_create_dto_convertToJSON(refund_request_create_dto_2);
	printf("repeating refund_request_create_dto:\n%s\n", cJSON_Print(jsonrefund_request_create_dto_2));
}

int main() {
  test_refund_request_create_dto(1);
  test_refund_request_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // refund_request_create_dto_MAIN
#endif // refund_request_create_dto_TEST
