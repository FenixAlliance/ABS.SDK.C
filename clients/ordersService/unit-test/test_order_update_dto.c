#ifndef order_update_dto_TEST
#define order_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_update_dto.h"
order_update_dto_t* instantiate_order_update_dto(int include_optional);



order_update_dto_t* instantiate_order_update_dto(int include_optional) {
  order_update_dto_t* order_update_dto = NULL;
  if (include_optional) {
    order_update_dto = order_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      ordersservice_order_update_dto_COSTCALCULATIONMETHOD_Automatic,
      ordersservice_order_update_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      1,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    order_update_dto = order_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      ordersservice_order_update_dto_COSTCALCULATIONMETHOD_Automatic,
      ordersservice_order_update_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      1,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return order_update_dto;
}


#ifdef order_update_dto_MAIN

void test_order_update_dto(int include_optional) {
    order_update_dto_t* order_update_dto_1 = instantiate_order_update_dto(include_optional);

	cJSON* jsonorder_update_dto_1 = order_update_dto_convertToJSON(order_update_dto_1);
	printf("order_update_dto :\n%s\n", cJSON_Print(jsonorder_update_dto_1));
	order_update_dto_t* order_update_dto_2 = order_update_dto_parseFromJSON(jsonorder_update_dto_1);
	cJSON* jsonorder_update_dto_2 = order_update_dto_convertToJSON(order_update_dto_2);
	printf("repeating order_update_dto:\n%s\n", cJSON_Print(jsonorder_update_dto_2));
}

int main() {
  test_order_update_dto(1);
  test_order_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_update_dto_MAIN
#endif // order_update_dto_TEST
