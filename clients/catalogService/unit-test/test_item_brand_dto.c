#ifndef item_brand_dto_TEST
#define item_brand_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_brand_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_brand_dto.h"
item_brand_dto_t* instantiate_item_brand_dto(int include_optional);



item_brand_dto_t* instantiate_item_brand_dto(int include_optional) {
  item_brand_dto_t* item_brand_dto = NULL;
  if (include_optional) {
    item_brand_dto = item_brand_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0"
    );
  } else {
    item_brand_dto = item_brand_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0"
    );
  }

  return item_brand_dto;
}


#ifdef item_brand_dto_MAIN

void test_item_brand_dto(int include_optional) {
    item_brand_dto_t* item_brand_dto_1 = instantiate_item_brand_dto(include_optional);

	cJSON* jsonitem_brand_dto_1 = item_brand_dto_convertToJSON(item_brand_dto_1);
	printf("item_brand_dto :\n%s\n", cJSON_Print(jsonitem_brand_dto_1));
	item_brand_dto_t* item_brand_dto_2 = item_brand_dto_parseFromJSON(jsonitem_brand_dto_1);
	cJSON* jsonitem_brand_dto_2 = item_brand_dto_convertToJSON(item_brand_dto_2);
	printf("repeating item_brand_dto:\n%s\n", cJSON_Print(jsonitem_brand_dto_2));
}

int main() {
  test_item_brand_dto(1);
  test_item_brand_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_brand_dto_MAIN
#endif // item_brand_dto_TEST
