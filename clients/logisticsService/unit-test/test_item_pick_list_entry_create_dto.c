#ifndef item_pick_list_entry_create_dto_TEST
#define item_pick_list_entry_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_pick_list_entry_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_pick_list_entry_create_dto.h"
item_pick_list_entry_create_dto_t* instantiate_item_pick_list_entry_create_dto(int include_optional);



item_pick_list_entry_create_dto_t* instantiate_item_pick_list_entry_create_dto(int include_optional) {
  item_pick_list_entry_create_dto_t* item_pick_list_entry_create_dto = NULL;
  if (include_optional) {
    item_pick_list_entry_create_dto = item_pick_list_entry_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      0.00010,
      "0"
    );
  } else {
    item_pick_list_entry_create_dto = item_pick_list_entry_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      0.00010,
      "0"
    );
  }

  return item_pick_list_entry_create_dto;
}


#ifdef item_pick_list_entry_create_dto_MAIN

void test_item_pick_list_entry_create_dto(int include_optional) {
    item_pick_list_entry_create_dto_t* item_pick_list_entry_create_dto_1 = instantiate_item_pick_list_entry_create_dto(include_optional);

	cJSON* jsonitem_pick_list_entry_create_dto_1 = item_pick_list_entry_create_dto_convertToJSON(item_pick_list_entry_create_dto_1);
	printf("item_pick_list_entry_create_dto :\n%s\n", cJSON_Print(jsonitem_pick_list_entry_create_dto_1));
	item_pick_list_entry_create_dto_t* item_pick_list_entry_create_dto_2 = item_pick_list_entry_create_dto_parseFromJSON(jsonitem_pick_list_entry_create_dto_1);
	cJSON* jsonitem_pick_list_entry_create_dto_2 = item_pick_list_entry_create_dto_convertToJSON(item_pick_list_entry_create_dto_2);
	printf("repeating item_pick_list_entry_create_dto:\n%s\n", cJSON_Print(jsonitem_pick_list_entry_create_dto_2));
}

int main() {
  test_item_pick_list_entry_create_dto(1);
  test_item_pick_list_entry_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_pick_list_entry_create_dto_MAIN
#endif // item_pick_list_entry_create_dto_TEST
