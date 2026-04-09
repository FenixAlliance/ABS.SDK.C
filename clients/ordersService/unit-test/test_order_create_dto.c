#ifndef order_create_dto_TEST
#define order_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_create_dto.h"
order_create_dto_t* instantiate_order_create_dto(int include_optional);



order_create_dto_t* instantiate_order_create_dto(int include_optional) {
  order_create_dto_t* order_create_dto = NULL;
  if (include_optional) {
    order_create_dto = order_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
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
      1.337,
      "0",
      ordersservice_order_create_dto_COSTCALCULATIONMETHOD_Automatic,
      ordersservice_order_create_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      ordersservice_order_create_dto_ORDERSTATUS_New,
      ordersservice_order_create_dto_QUOTESTATUS_Draft,
      ordersservice_order_create_dto_FREIGHTTERMS_FOB,
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    order_create_dto = order_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
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
      1.337,
      "0",
      ordersservice_order_create_dto_COSTCALCULATIONMETHOD_Automatic,
      ordersservice_order_create_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      ordersservice_order_create_dto_ORDERSTATUS_New,
      ordersservice_order_create_dto_QUOTESTATUS_Draft,
      ordersservice_order_create_dto_FREIGHTTERMS_FOB,
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return order_create_dto;
}


#ifdef order_create_dto_MAIN

void test_order_create_dto(int include_optional) {
    order_create_dto_t* order_create_dto_1 = instantiate_order_create_dto(include_optional);

	cJSON* jsonorder_create_dto_1 = order_create_dto_convertToJSON(order_create_dto_1);
	printf("order_create_dto :\n%s\n", cJSON_Print(jsonorder_create_dto_1));
	order_create_dto_t* order_create_dto_2 = order_create_dto_parseFromJSON(jsonorder_create_dto_1);
	cJSON* jsonorder_create_dto_2 = order_create_dto_convertToJSON(order_create_dto_2);
	printf("repeating order_create_dto:\n%s\n", cJSON_Print(jsonorder_create_dto_2));
}

int main() {
  test_order_create_dto(1);
  test_order_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_create_dto_MAIN
#endif // order_create_dto_TEST
