#ifndef refund_request_dto_envelope_TEST
#define refund_request_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define refund_request_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/refund_request_dto_envelope.h"
refund_request_dto_envelope_t* instantiate_refund_request_dto_envelope(int include_optional);

#include "test_refund_request_dto.c"


refund_request_dto_envelope_t* instantiate_refund_request_dto_envelope(int include_optional) {
  refund_request_dto_envelope_t* refund_request_dto_envelope = NULL;
  if (include_optional) {
    refund_request_dto_envelope = refund_request_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_refund_request_dto(0)
    );
  } else {
    refund_request_dto_envelope = refund_request_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return refund_request_dto_envelope;
}


#ifdef refund_request_dto_envelope_MAIN

void test_refund_request_dto_envelope(int include_optional) {
    refund_request_dto_envelope_t* refund_request_dto_envelope_1 = instantiate_refund_request_dto_envelope(include_optional);

	cJSON* jsonrefund_request_dto_envelope_1 = refund_request_dto_envelope_convertToJSON(refund_request_dto_envelope_1);
	printf("refund_request_dto_envelope :\n%s\n", cJSON_Print(jsonrefund_request_dto_envelope_1));
	refund_request_dto_envelope_t* refund_request_dto_envelope_2 = refund_request_dto_envelope_parseFromJSON(jsonrefund_request_dto_envelope_1);
	cJSON* jsonrefund_request_dto_envelope_2 = refund_request_dto_envelope_convertToJSON(refund_request_dto_envelope_2);
	printf("repeating refund_request_dto_envelope:\n%s\n", cJSON_Print(jsonrefund_request_dto_envelope_2));
}

int main() {
  test_refund_request_dto_envelope(1);
  test_refund_request_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // refund_request_dto_envelope_MAIN
#endif // refund_request_dto_envelope_TEST
