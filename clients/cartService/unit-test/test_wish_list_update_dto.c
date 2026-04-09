#ifndef wish_list_update_dto_TEST
#define wish_list_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wish_list_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wish_list_update_dto.h"
wish_list_update_dto_t* instantiate_wish_list_update_dto(int include_optional);



wish_list_update_dto_t* instantiate_wish_list_update_dto(int include_optional) {
  wish_list_update_dto_t* wish_list_update_dto = NULL;
  if (include_optional) {
    wish_list_update_dto = wish_list_update_dto_create(
      "0",
      "0",
      1
    );
  } else {
    wish_list_update_dto = wish_list_update_dto_create(
      "0",
      "0",
      1
    );
  }

  return wish_list_update_dto;
}


#ifdef wish_list_update_dto_MAIN

void test_wish_list_update_dto(int include_optional) {
    wish_list_update_dto_t* wish_list_update_dto_1 = instantiate_wish_list_update_dto(include_optional);

	cJSON* jsonwish_list_update_dto_1 = wish_list_update_dto_convertToJSON(wish_list_update_dto_1);
	printf("wish_list_update_dto :\n%s\n", cJSON_Print(jsonwish_list_update_dto_1));
	wish_list_update_dto_t* wish_list_update_dto_2 = wish_list_update_dto_parseFromJSON(jsonwish_list_update_dto_1);
	cJSON* jsonwish_list_update_dto_2 = wish_list_update_dto_convertToJSON(wish_list_update_dto_2);
	printf("repeating wish_list_update_dto:\n%s\n", cJSON_Print(jsonwish_list_update_dto_2));
}

int main() {
  test_wish_list_update_dto(1);
  test_wish_list_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // wish_list_update_dto_MAIN
#endif // wish_list_update_dto_TEST
