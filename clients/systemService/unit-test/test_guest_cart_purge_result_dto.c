#ifndef guest_cart_purge_result_dto_TEST
#define guest_cart_purge_result_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define guest_cart_purge_result_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/guest_cart_purge_result_dto.h"
guest_cart_purge_result_dto_t* instantiate_guest_cart_purge_result_dto(int include_optional);



guest_cart_purge_result_dto_t* instantiate_guest_cart_purge_result_dto(int include_optional) {
  guest_cart_purge_result_dto_t* guest_cart_purge_result_dto = NULL;
  if (include_optional) {
    guest_cart_purge_result_dto = guest_cart_purge_result_dto_create(
      56,
      56,
      56
    );
  } else {
    guest_cart_purge_result_dto = guest_cart_purge_result_dto_create(
      56,
      56,
      56
    );
  }

  return guest_cart_purge_result_dto;
}


#ifdef guest_cart_purge_result_dto_MAIN

void test_guest_cart_purge_result_dto(int include_optional) {
    guest_cart_purge_result_dto_t* guest_cart_purge_result_dto_1 = instantiate_guest_cart_purge_result_dto(include_optional);

	cJSON* jsonguest_cart_purge_result_dto_1 = guest_cart_purge_result_dto_convertToJSON(guest_cart_purge_result_dto_1);
	printf("guest_cart_purge_result_dto :\n%s\n", cJSON_Print(jsonguest_cart_purge_result_dto_1));
	guest_cart_purge_result_dto_t* guest_cart_purge_result_dto_2 = guest_cart_purge_result_dto_parseFromJSON(jsonguest_cart_purge_result_dto_1);
	cJSON* jsonguest_cart_purge_result_dto_2 = guest_cart_purge_result_dto_convertToJSON(guest_cart_purge_result_dto_2);
	printf("repeating guest_cart_purge_result_dto:\n%s\n", cJSON_Print(jsonguest_cart_purge_result_dto_2));
}

int main() {
  test_guest_cart_purge_result_dto(1);
  test_guest_cart_purge_result_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // guest_cart_purge_result_dto_MAIN
#endif // guest_cart_purge_result_dto_TEST
