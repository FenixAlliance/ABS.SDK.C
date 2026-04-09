#ifndef item_price_dto_list_envelope_TEST
#define item_price_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_price_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_price_dto_list_envelope.h"
item_price_dto_list_envelope_t* instantiate_item_price_dto_list_envelope(int include_optional);



item_price_dto_list_envelope_t* instantiate_item_price_dto_list_envelope(int include_optional) {
  item_price_dto_list_envelope_t* item_price_dto_list_envelope = NULL;
  if (include_optional) {
    item_price_dto_list_envelope = item_price_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    item_price_dto_list_envelope = item_price_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return item_price_dto_list_envelope;
}


#ifdef item_price_dto_list_envelope_MAIN

void test_item_price_dto_list_envelope(int include_optional) {
    item_price_dto_list_envelope_t* item_price_dto_list_envelope_1 = instantiate_item_price_dto_list_envelope(include_optional);

	cJSON* jsonitem_price_dto_list_envelope_1 = item_price_dto_list_envelope_convertToJSON(item_price_dto_list_envelope_1);
	printf("item_price_dto_list_envelope :\n%s\n", cJSON_Print(jsonitem_price_dto_list_envelope_1));
	item_price_dto_list_envelope_t* item_price_dto_list_envelope_2 = item_price_dto_list_envelope_parseFromJSON(jsonitem_price_dto_list_envelope_1);
	cJSON* jsonitem_price_dto_list_envelope_2 = item_price_dto_list_envelope_convertToJSON(item_price_dto_list_envelope_2);
	printf("repeating item_price_dto_list_envelope:\n%s\n", cJSON_Print(jsonitem_price_dto_list_envelope_2));
}

int main() {
  test_item_price_dto_list_envelope(1);
  test_item_price_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_price_dto_list_envelope_MAIN
#endif // item_price_dto_list_envelope_TEST
