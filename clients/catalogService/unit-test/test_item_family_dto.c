#ifndef item_family_dto_TEST
#define item_family_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_family_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_family_dto.h"
item_family_dto_t* instantiate_item_family_dto(int include_optional);



item_family_dto_t* instantiate_item_family_dto(int include_optional) {
  item_family_dto_t* item_family_dto = NULL;
  if (include_optional) {
    item_family_dto = item_family_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    item_family_dto = item_family_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return item_family_dto;
}


#ifdef item_family_dto_MAIN

void test_item_family_dto(int include_optional) {
    item_family_dto_t* item_family_dto_1 = instantiate_item_family_dto(include_optional);

	cJSON* jsonitem_family_dto_1 = item_family_dto_convertToJSON(item_family_dto_1);
	printf("item_family_dto :\n%s\n", cJSON_Print(jsonitem_family_dto_1));
	item_family_dto_t* item_family_dto_2 = item_family_dto_parseFromJSON(jsonitem_family_dto_1);
	cJSON* jsonitem_family_dto_2 = item_family_dto_convertToJSON(item_family_dto_2);
	printf("repeating item_family_dto:\n%s\n", cJSON_Print(jsonitem_family_dto_2));
}

int main() {
  test_item_family_dto(1);
  test_item_family_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_family_dto_MAIN
#endif // item_family_dto_TEST
