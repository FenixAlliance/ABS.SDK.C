#ifndef item_attachment_dto_list_envelope_TEST
#define item_attachment_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_attachment_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_attachment_dto_list_envelope.h"
item_attachment_dto_list_envelope_t* instantiate_item_attachment_dto_list_envelope(int include_optional);



item_attachment_dto_list_envelope_t* instantiate_item_attachment_dto_list_envelope(int include_optional) {
  item_attachment_dto_list_envelope_t* item_attachment_dto_list_envelope = NULL;
  if (include_optional) {
    item_attachment_dto_list_envelope = item_attachment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    item_attachment_dto_list_envelope = item_attachment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return item_attachment_dto_list_envelope;
}


#ifdef item_attachment_dto_list_envelope_MAIN

void test_item_attachment_dto_list_envelope(int include_optional) {
    item_attachment_dto_list_envelope_t* item_attachment_dto_list_envelope_1 = instantiate_item_attachment_dto_list_envelope(include_optional);

	cJSON* jsonitem_attachment_dto_list_envelope_1 = item_attachment_dto_list_envelope_convertToJSON(item_attachment_dto_list_envelope_1);
	printf("item_attachment_dto_list_envelope :\n%s\n", cJSON_Print(jsonitem_attachment_dto_list_envelope_1));
	item_attachment_dto_list_envelope_t* item_attachment_dto_list_envelope_2 = item_attachment_dto_list_envelope_parseFromJSON(jsonitem_attachment_dto_list_envelope_1);
	cJSON* jsonitem_attachment_dto_list_envelope_2 = item_attachment_dto_list_envelope_convertToJSON(item_attachment_dto_list_envelope_2);
	printf("repeating item_attachment_dto_list_envelope:\n%s\n", cJSON_Print(jsonitem_attachment_dto_list_envelope_2));
}

int main() {
  test_item_attachment_dto_list_envelope(1);
  test_item_attachment_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_attachment_dto_list_envelope_MAIN
#endif // item_attachment_dto_list_envelope_TEST
