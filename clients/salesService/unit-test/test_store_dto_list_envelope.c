#ifndef store_dto_list_envelope_TEST
#define store_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_dto_list_envelope.h"
store_dto_list_envelope_t* instantiate_store_dto_list_envelope(int include_optional);



store_dto_list_envelope_t* instantiate_store_dto_list_envelope(int include_optional) {
  store_dto_list_envelope_t* store_dto_list_envelope = NULL;
  if (include_optional) {
    store_dto_list_envelope = store_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    store_dto_list_envelope = store_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return store_dto_list_envelope;
}


#ifdef store_dto_list_envelope_MAIN

void test_store_dto_list_envelope(int include_optional) {
    store_dto_list_envelope_t* store_dto_list_envelope_1 = instantiate_store_dto_list_envelope(include_optional);

	cJSON* jsonstore_dto_list_envelope_1 = store_dto_list_envelope_convertToJSON(store_dto_list_envelope_1);
	printf("store_dto_list_envelope :\n%s\n", cJSON_Print(jsonstore_dto_list_envelope_1));
	store_dto_list_envelope_t* store_dto_list_envelope_2 = store_dto_list_envelope_parseFromJSON(jsonstore_dto_list_envelope_1);
	cJSON* jsonstore_dto_list_envelope_2 = store_dto_list_envelope_convertToJSON(store_dto_list_envelope_2);
	printf("repeating store_dto_list_envelope:\n%s\n", cJSON_Print(jsonstore_dto_list_envelope_2));
}

int main() {
  test_store_dto_list_envelope(1);
  test_store_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_dto_list_envelope_MAIN
#endif // store_dto_list_envelope_TEST
