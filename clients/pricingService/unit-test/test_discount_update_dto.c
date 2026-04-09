#ifndef discount_update_dto_TEST
#define discount_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discount_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discount_update_dto.h"
discount_update_dto_t* instantiate_discount_update_dto(int include_optional);



discount_update_dto_t* instantiate_discount_update_dto(int include_optional) {
  discount_update_dto_t* discount_update_dto = NULL;
  if (include_optional) {
    discount_update_dto = discount_update_dto_create(
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0"
    );
  } else {
    discount_update_dto = discount_update_dto_create(
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0"
    );
  }

  return discount_update_dto;
}


#ifdef discount_update_dto_MAIN

void test_discount_update_dto(int include_optional) {
    discount_update_dto_t* discount_update_dto_1 = instantiate_discount_update_dto(include_optional);

	cJSON* jsondiscount_update_dto_1 = discount_update_dto_convertToJSON(discount_update_dto_1);
	printf("discount_update_dto :\n%s\n", cJSON_Print(jsondiscount_update_dto_1));
	discount_update_dto_t* discount_update_dto_2 = discount_update_dto_parseFromJSON(jsondiscount_update_dto_1);
	cJSON* jsondiscount_update_dto_2 = discount_update_dto_convertToJSON(discount_update_dto_2);
	printf("repeating discount_update_dto:\n%s\n", cJSON_Print(jsondiscount_update_dto_2));
}

int main() {
  test_discount_update_dto(1);
  test_discount_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // discount_update_dto_MAIN
#endif // discount_update_dto_TEST
