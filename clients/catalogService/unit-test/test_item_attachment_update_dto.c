#ifndef item_attachment_update_dto_TEST
#define item_attachment_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_attachment_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_attachment_update_dto.h"
item_attachment_update_dto_t* instantiate_item_attachment_update_dto(int include_optional);



item_attachment_update_dto_t* instantiate_item_attachment_update_dto(int include_optional) {
  item_attachment_update_dto_t* item_attachment_update_dto = NULL;
  if (include_optional) {
    item_attachment_update_dto = item_attachment_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      1,
      "0",
      "0"
    );
  } else {
    item_attachment_update_dto = item_attachment_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      1,
      "0",
      "0"
    );
  }

  return item_attachment_update_dto;
}


#ifdef item_attachment_update_dto_MAIN

void test_item_attachment_update_dto(int include_optional) {
    item_attachment_update_dto_t* item_attachment_update_dto_1 = instantiate_item_attachment_update_dto(include_optional);

	cJSON* jsonitem_attachment_update_dto_1 = item_attachment_update_dto_convertToJSON(item_attachment_update_dto_1);
	printf("item_attachment_update_dto :\n%s\n", cJSON_Print(jsonitem_attachment_update_dto_1));
	item_attachment_update_dto_t* item_attachment_update_dto_2 = item_attachment_update_dto_parseFromJSON(jsonitem_attachment_update_dto_1);
	cJSON* jsonitem_attachment_update_dto_2 = item_attachment_update_dto_convertToJSON(item_attachment_update_dto_2);
	printf("repeating item_attachment_update_dto:\n%s\n", cJSON_Print(jsonitem_attachment_update_dto_2));
}

int main() {
  test_item_attachment_update_dto(1);
  test_item_attachment_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_attachment_update_dto_MAIN
#endif // item_attachment_update_dto_TEST
