#ifndef price_list_update_dto_TEST
#define price_list_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define price_list_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/price_list_update_dto.h"
price_list_update_dto_t* instantiate_price_list_update_dto(int include_optional);



price_list_update_dto_t* instantiate_price_list_update_dto(int include_optional) {
  price_list_update_dto_t* price_list_update_dto = NULL;
  if (include_optional) {
    price_list_update_dto = price_list_update_dto_create(
      "a",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    price_list_update_dto = price_list_update_dto_create(
      "a",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return price_list_update_dto;
}


#ifdef price_list_update_dto_MAIN

void test_price_list_update_dto(int include_optional) {
    price_list_update_dto_t* price_list_update_dto_1 = instantiate_price_list_update_dto(include_optional);

	cJSON* jsonprice_list_update_dto_1 = price_list_update_dto_convertToJSON(price_list_update_dto_1);
	printf("price_list_update_dto :\n%s\n", cJSON_Print(jsonprice_list_update_dto_1));
	price_list_update_dto_t* price_list_update_dto_2 = price_list_update_dto_parseFromJSON(jsonprice_list_update_dto_1);
	cJSON* jsonprice_list_update_dto_2 = price_list_update_dto_convertToJSON(price_list_update_dto_2);
	printf("repeating price_list_update_dto:\n%s\n", cJSON_Print(jsonprice_list_update_dto_2));
}

int main() {
  test_price_list_update_dto(1);
  test_price_list_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // price_list_update_dto_MAIN
#endif // price_list_update_dto_TEST
