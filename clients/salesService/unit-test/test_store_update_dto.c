#ifndef store_update_dto_TEST
#define store_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_update_dto.h"
store_update_dto_t* instantiate_store_update_dto(int include_optional);



store_update_dto_t* instantiate_store_update_dto(int include_optional) {
  store_update_dto_t* store_update_dto = NULL;
  if (include_optional) {
    store_update_dto = store_update_dto_create(
      "0",
      1,
      "0"
    );
  } else {
    store_update_dto = store_update_dto_create(
      "0",
      1,
      "0"
    );
  }

  return store_update_dto;
}


#ifdef store_update_dto_MAIN

void test_store_update_dto(int include_optional) {
    store_update_dto_t* store_update_dto_1 = instantiate_store_update_dto(include_optional);

	cJSON* jsonstore_update_dto_1 = store_update_dto_convertToJSON(store_update_dto_1);
	printf("store_update_dto :\n%s\n", cJSON_Print(jsonstore_update_dto_1));
	store_update_dto_t* store_update_dto_2 = store_update_dto_parseFromJSON(jsonstore_update_dto_1);
	cJSON* jsonstore_update_dto_2 = store_update_dto_convertToJSON(store_update_dto_2);
	printf("repeating store_update_dto:\n%s\n", cJSON_Print(jsonstore_update_dto_2));
}

int main() {
  test_store_update_dto(1);
  test_store_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_update_dto_MAIN
#endif // store_update_dto_TEST
