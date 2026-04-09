#ifndef discount_dto_list_envelope_TEST
#define discount_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discount_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discount_dto_list_envelope.h"
discount_dto_list_envelope_t* instantiate_discount_dto_list_envelope(int include_optional);



discount_dto_list_envelope_t* instantiate_discount_dto_list_envelope(int include_optional) {
  discount_dto_list_envelope_t* discount_dto_list_envelope = NULL;
  if (include_optional) {
    discount_dto_list_envelope = discount_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    discount_dto_list_envelope = discount_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return discount_dto_list_envelope;
}


#ifdef discount_dto_list_envelope_MAIN

void test_discount_dto_list_envelope(int include_optional) {
    discount_dto_list_envelope_t* discount_dto_list_envelope_1 = instantiate_discount_dto_list_envelope(include_optional);

	cJSON* jsondiscount_dto_list_envelope_1 = discount_dto_list_envelope_convertToJSON(discount_dto_list_envelope_1);
	printf("discount_dto_list_envelope :\n%s\n", cJSON_Print(jsondiscount_dto_list_envelope_1));
	discount_dto_list_envelope_t* discount_dto_list_envelope_2 = discount_dto_list_envelope_parseFromJSON(jsondiscount_dto_list_envelope_1);
	cJSON* jsondiscount_dto_list_envelope_2 = discount_dto_list_envelope_convertToJSON(discount_dto_list_envelope_2);
	printf("repeating discount_dto_list_envelope:\n%s\n", cJSON_Print(jsondiscount_dto_list_envelope_2));
}

int main() {
  test_discount_dto_list_envelope(1);
  test_discount_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // discount_dto_list_envelope_MAIN
#endif // discount_dto_list_envelope_TEST
