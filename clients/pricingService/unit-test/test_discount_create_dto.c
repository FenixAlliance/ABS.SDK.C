#ifndef discount_create_dto_TEST
#define discount_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discount_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discount_create_dto.h"
discount_create_dto_t* instantiate_discount_create_dto(int include_optional);



discount_create_dto_t* instantiate_discount_create_dto(int include_optional) {
  discount_create_dto_t* discount_create_dto = NULL;
  if (include_optional) {
    discount_create_dto = discount_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
    discount_create_dto = discount_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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

  return discount_create_dto;
}


#ifdef discount_create_dto_MAIN

void test_discount_create_dto(int include_optional) {
    discount_create_dto_t* discount_create_dto_1 = instantiate_discount_create_dto(include_optional);

	cJSON* jsondiscount_create_dto_1 = discount_create_dto_convertToJSON(discount_create_dto_1);
	printf("discount_create_dto :\n%s\n", cJSON_Print(jsondiscount_create_dto_1));
	discount_create_dto_t* discount_create_dto_2 = discount_create_dto_parseFromJSON(jsondiscount_create_dto_1);
	cJSON* jsondiscount_create_dto_2 = discount_create_dto_convertToJSON(discount_create_dto_2);
	printf("repeating discount_create_dto:\n%s\n", cJSON_Print(jsondiscount_create_dto_2));
}

int main() {
  test_discount_create_dto(1);
  test_discount_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // discount_create_dto_MAIN
#endif // discount_create_dto_TEST
