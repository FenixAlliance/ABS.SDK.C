#ifndef store_create_dto_TEST
#define store_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_create_dto.h"
store_create_dto_t* instantiate_store_create_dto(int include_optional);



store_create_dto_t* instantiate_store_create_dto(int include_optional) {
  store_create_dto_t* store_create_dto = NULL;
  if (include_optional) {
    store_create_dto = store_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0"
    );
  } else {
    store_create_dto = store_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0"
    );
  }

  return store_create_dto;
}


#ifdef store_create_dto_MAIN

void test_store_create_dto(int include_optional) {
    store_create_dto_t* store_create_dto_1 = instantiate_store_create_dto(include_optional);

	cJSON* jsonstore_create_dto_1 = store_create_dto_convertToJSON(store_create_dto_1);
	printf("store_create_dto :\n%s\n", cJSON_Print(jsonstore_create_dto_1));
	store_create_dto_t* store_create_dto_2 = store_create_dto_parseFromJSON(jsonstore_create_dto_1);
	cJSON* jsonstore_create_dto_2 = store_create_dto_convertToJSON(store_create_dto_2);
	printf("repeating store_create_dto:\n%s\n", cJSON_Print(jsonstore_create_dto_2));
}

int main() {
  test_store_create_dto(1);
  test_store_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_create_dto_MAIN
#endif // store_create_dto_TEST
