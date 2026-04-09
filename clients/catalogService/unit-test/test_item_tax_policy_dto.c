#ifndef item_tax_policy_dto_TEST
#define item_tax_policy_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_tax_policy_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_tax_policy_dto.h"
item_tax_policy_dto_t* instantiate_item_tax_policy_dto(int include_optional);



item_tax_policy_dto_t* instantiate_item_tax_policy_dto(int include_optional) {
  item_tax_policy_dto_t* item_tax_policy_dto = NULL;
  if (include_optional) {
    item_tax_policy_dto = item_tax_policy_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    item_tax_policy_dto = item_tax_policy_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return item_tax_policy_dto;
}


#ifdef item_tax_policy_dto_MAIN

void test_item_tax_policy_dto(int include_optional) {
    item_tax_policy_dto_t* item_tax_policy_dto_1 = instantiate_item_tax_policy_dto(include_optional);

	cJSON* jsonitem_tax_policy_dto_1 = item_tax_policy_dto_convertToJSON(item_tax_policy_dto_1);
	printf("item_tax_policy_dto :\n%s\n", cJSON_Print(jsonitem_tax_policy_dto_1));
	item_tax_policy_dto_t* item_tax_policy_dto_2 = item_tax_policy_dto_parseFromJSON(jsonitem_tax_policy_dto_1);
	cJSON* jsonitem_tax_policy_dto_2 = item_tax_policy_dto_convertToJSON(item_tax_policy_dto_2);
	printf("repeating item_tax_policy_dto:\n%s\n", cJSON_Print(jsonitem_tax_policy_dto_2));
}

int main() {
  test_item_tax_policy_dto(1);
  test_item_tax_policy_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_tax_policy_dto_MAIN
#endif // item_tax_policy_dto_TEST
