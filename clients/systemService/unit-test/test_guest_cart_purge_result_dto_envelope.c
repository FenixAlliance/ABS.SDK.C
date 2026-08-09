#ifndef guest_cart_purge_result_dto_envelope_TEST
#define guest_cart_purge_result_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define guest_cart_purge_result_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/guest_cart_purge_result_dto_envelope.h"
guest_cart_purge_result_dto_envelope_t* instantiate_guest_cart_purge_result_dto_envelope(int include_optional);

#include "test_guest_cart_purge_result_dto.c"


guest_cart_purge_result_dto_envelope_t* instantiate_guest_cart_purge_result_dto_envelope(int include_optional) {
  guest_cart_purge_result_dto_envelope_t* guest_cart_purge_result_dto_envelope = NULL;
  if (include_optional) {
    guest_cart_purge_result_dto_envelope = guest_cart_purge_result_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_guest_cart_purge_result_dto(0)
    );
  } else {
    guest_cart_purge_result_dto_envelope = guest_cart_purge_result_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      NULL
    );
  }

  return guest_cart_purge_result_dto_envelope;
}


#ifdef guest_cart_purge_result_dto_envelope_MAIN

void test_guest_cart_purge_result_dto_envelope(int include_optional) {
    guest_cart_purge_result_dto_envelope_t* guest_cart_purge_result_dto_envelope_1 = instantiate_guest_cart_purge_result_dto_envelope(include_optional);

	cJSON* jsonguest_cart_purge_result_dto_envelope_1 = guest_cart_purge_result_dto_envelope_convertToJSON(guest_cart_purge_result_dto_envelope_1);
	printf("guest_cart_purge_result_dto_envelope :\n%s\n", cJSON_Print(jsonguest_cart_purge_result_dto_envelope_1));
	guest_cart_purge_result_dto_envelope_t* guest_cart_purge_result_dto_envelope_2 = guest_cart_purge_result_dto_envelope_parseFromJSON(jsonguest_cart_purge_result_dto_envelope_1);
	cJSON* jsonguest_cart_purge_result_dto_envelope_2 = guest_cart_purge_result_dto_envelope_convertToJSON(guest_cart_purge_result_dto_envelope_2);
	printf("repeating guest_cart_purge_result_dto_envelope:\n%s\n", cJSON_Print(jsonguest_cart_purge_result_dto_envelope_2));
}

int main() {
  test_guest_cart_purge_result_dto_envelope(1);
  test_guest_cart_purge_result_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // guest_cart_purge_result_dto_envelope_MAIN
#endif // guest_cart_purge_result_dto_envelope_TEST
