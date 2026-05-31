#ifndef store_dto_TEST
#define store_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_dto.h"
store_dto_t* instantiate_store_dto(int include_optional);



store_dto_t* instantiate_store_dto(int include_optional) {
  store_dto_t* store_dto = NULL;
  if (include_optional) {
    store_dto = store_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0"
    );
  } else {
    store_dto = store_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0"
    );
  }

  return store_dto;
}


#ifdef store_dto_MAIN

void test_store_dto(int include_optional) {
    store_dto_t* store_dto_1 = instantiate_store_dto(include_optional);

	cJSON* jsonstore_dto_1 = store_dto_convertToJSON(store_dto_1);
	printf("store_dto :\n%s\n", cJSON_Print(jsonstore_dto_1));
	store_dto_t* store_dto_2 = store_dto_parseFromJSON(jsonstore_dto_1);
	cJSON* jsonstore_dto_2 = store_dto_convertToJSON(store_dto_2);
	printf("repeating store_dto:\n%s\n", cJSON_Print(jsonstore_dto_2));
}

int main() {
  test_store_dto(1);
  test_store_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_dto_MAIN
#endif // store_dto_TEST
