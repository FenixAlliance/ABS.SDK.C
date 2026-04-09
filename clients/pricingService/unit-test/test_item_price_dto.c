#ifndef item_price_dto_TEST
#define item_price_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_price_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_price_dto.h"
item_price_dto_t* instantiate_item_price_dto(int include_optional);



item_price_dto_t* instantiate_item_price_dto(int include_optional) {
  item_price_dto_t* item_price_dto = NULL;
  if (include_optional) {
    item_price_dto = item_price_dto_create(
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
      1.337,
      1.337
    );
  } else {
    item_price_dto = item_price_dto_create(
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
      1.337,
      1.337
    );
  }

  return item_price_dto;
}


#ifdef item_price_dto_MAIN

void test_item_price_dto(int include_optional) {
    item_price_dto_t* item_price_dto_1 = instantiate_item_price_dto(include_optional);

	cJSON* jsonitem_price_dto_1 = item_price_dto_convertToJSON(item_price_dto_1);
	printf("item_price_dto :\n%s\n", cJSON_Print(jsonitem_price_dto_1));
	item_price_dto_t* item_price_dto_2 = item_price_dto_parseFromJSON(jsonitem_price_dto_1);
	cJSON* jsonitem_price_dto_2 = item_price_dto_convertToJSON(item_price_dto_2);
	printf("repeating item_price_dto:\n%s\n", cJSON_Print(jsonitem_price_dto_2));
}

int main() {
  test_item_price_dto(1);
  test_item_price_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_price_dto_MAIN
#endif // item_price_dto_TEST
