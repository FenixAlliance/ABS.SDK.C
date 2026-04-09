#ifndef discount_list_dto_envelope_TEST
#define discount_list_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discount_list_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discount_list_dto_envelope.h"
discount_list_dto_envelope_t* instantiate_discount_list_dto_envelope(int include_optional);

#include "test_discount_list_dto.c"


discount_list_dto_envelope_t* instantiate_discount_list_dto_envelope(int include_optional) {
  discount_list_dto_envelope_t* discount_list_dto_envelope = NULL;
  if (include_optional) {
    discount_list_dto_envelope = discount_list_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_discount_list_dto(0)
    );
  } else {
    discount_list_dto_envelope = discount_list_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return discount_list_dto_envelope;
}


#ifdef discount_list_dto_envelope_MAIN

void test_discount_list_dto_envelope(int include_optional) {
    discount_list_dto_envelope_t* discount_list_dto_envelope_1 = instantiate_discount_list_dto_envelope(include_optional);

	cJSON* jsondiscount_list_dto_envelope_1 = discount_list_dto_envelope_convertToJSON(discount_list_dto_envelope_1);
	printf("discount_list_dto_envelope :\n%s\n", cJSON_Print(jsondiscount_list_dto_envelope_1));
	discount_list_dto_envelope_t* discount_list_dto_envelope_2 = discount_list_dto_envelope_parseFromJSON(jsondiscount_list_dto_envelope_1);
	cJSON* jsondiscount_list_dto_envelope_2 = discount_list_dto_envelope_convertToJSON(discount_list_dto_envelope_2);
	printf("repeating discount_list_dto_envelope:\n%s\n", cJSON_Print(jsondiscount_list_dto_envelope_2));
}

int main() {
  test_discount_list_dto_envelope(1);
  test_discount_list_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // discount_list_dto_envelope_MAIN
#endif // discount_list_dto_envelope_TEST
