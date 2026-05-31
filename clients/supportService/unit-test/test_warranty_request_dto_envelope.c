#ifndef warranty_request_dto_envelope_TEST
#define warranty_request_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warranty_request_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warranty_request_dto_envelope.h"
warranty_request_dto_envelope_t* instantiate_warranty_request_dto_envelope(int include_optional);

#include "test_warranty_request_dto.c"


warranty_request_dto_envelope_t* instantiate_warranty_request_dto_envelope(int include_optional) {
  warranty_request_dto_envelope_t* warranty_request_dto_envelope = NULL;
  if (include_optional) {
    warranty_request_dto_envelope = warranty_request_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_warranty_request_dto(0)
    );
  } else {
    warranty_request_dto_envelope = warranty_request_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return warranty_request_dto_envelope;
}


#ifdef warranty_request_dto_envelope_MAIN

void test_warranty_request_dto_envelope(int include_optional) {
    warranty_request_dto_envelope_t* warranty_request_dto_envelope_1 = instantiate_warranty_request_dto_envelope(include_optional);

	cJSON* jsonwarranty_request_dto_envelope_1 = warranty_request_dto_envelope_convertToJSON(warranty_request_dto_envelope_1);
	printf("warranty_request_dto_envelope :\n%s\n", cJSON_Print(jsonwarranty_request_dto_envelope_1));
	warranty_request_dto_envelope_t* warranty_request_dto_envelope_2 = warranty_request_dto_envelope_parseFromJSON(jsonwarranty_request_dto_envelope_1);
	cJSON* jsonwarranty_request_dto_envelope_2 = warranty_request_dto_envelope_convertToJSON(warranty_request_dto_envelope_2);
	printf("repeating warranty_request_dto_envelope:\n%s\n", cJSON_Print(jsonwarranty_request_dto_envelope_2));
}

int main() {
  test_warranty_request_dto_envelope(1);
  test_warranty_request_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // warranty_request_dto_envelope_MAIN
#endif // warranty_request_dto_envelope_TEST
