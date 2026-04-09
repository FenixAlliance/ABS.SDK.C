#ifndef catalog_item_dto_list_envelope_TEST
#define catalog_item_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define catalog_item_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/catalog_item_dto_list_envelope.h"
catalog_item_dto_list_envelope_t* instantiate_catalog_item_dto_list_envelope(int include_optional);



catalog_item_dto_list_envelope_t* instantiate_catalog_item_dto_list_envelope(int include_optional) {
  catalog_item_dto_list_envelope_t* catalog_item_dto_list_envelope = NULL;
  if (include_optional) {
    catalog_item_dto_list_envelope = catalog_item_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    catalog_item_dto_list_envelope = catalog_item_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return catalog_item_dto_list_envelope;
}


#ifdef catalog_item_dto_list_envelope_MAIN

void test_catalog_item_dto_list_envelope(int include_optional) {
    catalog_item_dto_list_envelope_t* catalog_item_dto_list_envelope_1 = instantiate_catalog_item_dto_list_envelope(include_optional);

	cJSON* jsoncatalog_item_dto_list_envelope_1 = catalog_item_dto_list_envelope_convertToJSON(catalog_item_dto_list_envelope_1);
	printf("catalog_item_dto_list_envelope :\n%s\n", cJSON_Print(jsoncatalog_item_dto_list_envelope_1));
	catalog_item_dto_list_envelope_t* catalog_item_dto_list_envelope_2 = catalog_item_dto_list_envelope_parseFromJSON(jsoncatalog_item_dto_list_envelope_1);
	cJSON* jsoncatalog_item_dto_list_envelope_2 = catalog_item_dto_list_envelope_convertToJSON(catalog_item_dto_list_envelope_2);
	printf("repeating catalog_item_dto_list_envelope:\n%s\n", cJSON_Print(jsoncatalog_item_dto_list_envelope_2));
}

int main() {
  test_catalog_item_dto_list_envelope(1);
  test_catalog_item_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // catalog_item_dto_list_envelope_MAIN
#endif // catalog_item_dto_list_envelope_TEST
