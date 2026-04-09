#ifndef item_tag_dto_TEST
#define item_tag_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_tag_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_tag_dto.h"
item_tag_dto_t* instantiate_item_tag_dto(int include_optional);



item_tag_dto_t* instantiate_item_tag_dto(int include_optional) {
  item_tag_dto_t* item_tag_dto = NULL;
  if (include_optional) {
    item_tag_dto = item_tag_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    item_tag_dto = item_tag_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return item_tag_dto;
}


#ifdef item_tag_dto_MAIN

void test_item_tag_dto(int include_optional) {
    item_tag_dto_t* item_tag_dto_1 = instantiate_item_tag_dto(include_optional);

	cJSON* jsonitem_tag_dto_1 = item_tag_dto_convertToJSON(item_tag_dto_1);
	printf("item_tag_dto :\n%s\n", cJSON_Print(jsonitem_tag_dto_1));
	item_tag_dto_t* item_tag_dto_2 = item_tag_dto_parseFromJSON(jsonitem_tag_dto_1);
	cJSON* jsonitem_tag_dto_2 = item_tag_dto_convertToJSON(item_tag_dto_2);
	printf("repeating item_tag_dto:\n%s\n", cJSON_Print(jsonitem_tag_dto_2));
}

int main() {
  test_item_tag_dto(1);
  test_item_tag_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_tag_dto_MAIN
#endif // item_tag_dto_TEST
