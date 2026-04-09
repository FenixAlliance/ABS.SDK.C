#ifndef item_to_compare_cart_record_dto_TEST
#define item_to_compare_cart_record_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_to_compare_cart_record_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_to_compare_cart_record_dto.h"
item_to_compare_cart_record_dto_t* instantiate_item_to_compare_cart_record_dto(int include_optional);



item_to_compare_cart_record_dto_t* instantiate_item_to_compare_cart_record_dto(int include_optional) {
  item_to_compare_cart_record_dto_t* item_to_compare_cart_record_dto = NULL;
  if (include_optional) {
    item_to_compare_cart_record_dto = item_to_compare_cart_record_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      "0",
      1.337,
      1.337,
      "0",
      "0"
    );
  } else {
    item_to_compare_cart_record_dto = item_to_compare_cart_record_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      "0",
      1.337,
      1.337,
      "0",
      "0"
    );
  }

  return item_to_compare_cart_record_dto;
}


#ifdef item_to_compare_cart_record_dto_MAIN

void test_item_to_compare_cart_record_dto(int include_optional) {
    item_to_compare_cart_record_dto_t* item_to_compare_cart_record_dto_1 = instantiate_item_to_compare_cart_record_dto(include_optional);

	cJSON* jsonitem_to_compare_cart_record_dto_1 = item_to_compare_cart_record_dto_convertToJSON(item_to_compare_cart_record_dto_1);
	printf("item_to_compare_cart_record_dto :\n%s\n", cJSON_Print(jsonitem_to_compare_cart_record_dto_1));
	item_to_compare_cart_record_dto_t* item_to_compare_cart_record_dto_2 = item_to_compare_cart_record_dto_parseFromJSON(jsonitem_to_compare_cart_record_dto_1);
	cJSON* jsonitem_to_compare_cart_record_dto_2 = item_to_compare_cart_record_dto_convertToJSON(item_to_compare_cart_record_dto_2);
	printf("repeating item_to_compare_cart_record_dto:\n%s\n", cJSON_Print(jsonitem_to_compare_cart_record_dto_2));
}

int main() {
  test_item_to_compare_cart_record_dto(1);
  test_item_to_compare_cart_record_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_to_compare_cart_record_dto_MAIN
#endif // item_to_compare_cart_record_dto_TEST
