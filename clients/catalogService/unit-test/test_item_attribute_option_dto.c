#ifndef item_attribute_option_dto_TEST
#define item_attribute_option_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_attribute_option_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_attribute_option_dto.h"
item_attribute_option_dto_t* instantiate_item_attribute_option_dto(int include_optional);



item_attribute_option_dto_t* instantiate_item_attribute_option_dto(int include_optional) {
  item_attribute_option_dto_t* item_attribute_option_dto = NULL;
  if (include_optional) {
    item_attribute_option_dto = item_attribute_option_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    item_attribute_option_dto = item_attribute_option_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return item_attribute_option_dto;
}


#ifdef item_attribute_option_dto_MAIN

void test_item_attribute_option_dto(int include_optional) {
    item_attribute_option_dto_t* item_attribute_option_dto_1 = instantiate_item_attribute_option_dto(include_optional);

	cJSON* jsonitem_attribute_option_dto_1 = item_attribute_option_dto_convertToJSON(item_attribute_option_dto_1);
	printf("item_attribute_option_dto :\n%s\n", cJSON_Print(jsonitem_attribute_option_dto_1));
	item_attribute_option_dto_t* item_attribute_option_dto_2 = item_attribute_option_dto_parseFromJSON(jsonitem_attribute_option_dto_1);
	cJSON* jsonitem_attribute_option_dto_2 = item_attribute_option_dto_convertToJSON(item_attribute_option_dto_2);
	printf("repeating item_attribute_option_dto:\n%s\n", cJSON_Print(jsonitem_attribute_option_dto_2));
}

int main() {
  test_item_attribute_option_dto(1);
  test_item_attribute_option_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_attribute_option_dto_MAIN
#endif // item_attribute_option_dto_TEST
