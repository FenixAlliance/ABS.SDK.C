#ifndef item_to_compare_cart_record_dto_envelope_TEST
#define item_to_compare_cart_record_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_to_compare_cart_record_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_to_compare_cart_record_dto_envelope.h"
item_to_compare_cart_record_dto_envelope_t* instantiate_item_to_compare_cart_record_dto_envelope(int include_optional);

#include "test_item_to_compare_cart_record_dto.c"


item_to_compare_cart_record_dto_envelope_t* instantiate_item_to_compare_cart_record_dto_envelope(int include_optional) {
  item_to_compare_cart_record_dto_envelope_t* item_to_compare_cart_record_dto_envelope = NULL;
  if (include_optional) {
    item_to_compare_cart_record_dto_envelope = item_to_compare_cart_record_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_item_to_compare_cart_record_dto(0)
    );
  } else {
    item_to_compare_cart_record_dto_envelope = item_to_compare_cart_record_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return item_to_compare_cart_record_dto_envelope;
}


#ifdef item_to_compare_cart_record_dto_envelope_MAIN

void test_item_to_compare_cart_record_dto_envelope(int include_optional) {
    item_to_compare_cart_record_dto_envelope_t* item_to_compare_cart_record_dto_envelope_1 = instantiate_item_to_compare_cart_record_dto_envelope(include_optional);

	cJSON* jsonitem_to_compare_cart_record_dto_envelope_1 = item_to_compare_cart_record_dto_envelope_convertToJSON(item_to_compare_cart_record_dto_envelope_1);
	printf("item_to_compare_cart_record_dto_envelope :\n%s\n", cJSON_Print(jsonitem_to_compare_cart_record_dto_envelope_1));
	item_to_compare_cart_record_dto_envelope_t* item_to_compare_cart_record_dto_envelope_2 = item_to_compare_cart_record_dto_envelope_parseFromJSON(jsonitem_to_compare_cart_record_dto_envelope_1);
	cJSON* jsonitem_to_compare_cart_record_dto_envelope_2 = item_to_compare_cart_record_dto_envelope_convertToJSON(item_to_compare_cart_record_dto_envelope_2);
	printf("repeating item_to_compare_cart_record_dto_envelope:\n%s\n", cJSON_Print(jsonitem_to_compare_cart_record_dto_envelope_2));
}

int main() {
  test_item_to_compare_cart_record_dto_envelope(1);
  test_item_to_compare_cart_record_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_to_compare_cart_record_dto_envelope_MAIN
#endif // item_to_compare_cart_record_dto_envelope_TEST
