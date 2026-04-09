#ifndef order_dto_envelope_TEST
#define order_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_dto_envelope.h"
order_dto_envelope_t* instantiate_order_dto_envelope(int include_optional);

#include "test_order_dto.c"


order_dto_envelope_t* instantiate_order_dto_envelope(int include_optional) {
  order_dto_envelope_t* order_dto_envelope = NULL;
  if (include_optional) {
    order_dto_envelope = order_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_order_dto(0)
    );
  } else {
    order_dto_envelope = order_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return order_dto_envelope;
}


#ifdef order_dto_envelope_MAIN

void test_order_dto_envelope(int include_optional) {
    order_dto_envelope_t* order_dto_envelope_1 = instantiate_order_dto_envelope(include_optional);

	cJSON* jsonorder_dto_envelope_1 = order_dto_envelope_convertToJSON(order_dto_envelope_1);
	printf("order_dto_envelope :\n%s\n", cJSON_Print(jsonorder_dto_envelope_1));
	order_dto_envelope_t* order_dto_envelope_2 = order_dto_envelope_parseFromJSON(jsonorder_dto_envelope_1);
	cJSON* jsonorder_dto_envelope_2 = order_dto_envelope_convertToJSON(order_dto_envelope_2);
	printf("repeating order_dto_envelope:\n%s\n", cJSON_Print(jsonorder_dto_envelope_2));
}

int main() {
  test_order_dto_envelope(1);
  test_order_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_dto_envelope_MAIN
#endif // order_dto_envelope_TEST
