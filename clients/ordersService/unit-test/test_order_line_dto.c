#ifndef order_line_dto_TEST
#define order_line_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_line_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_line_dto.h"
order_line_dto_t* instantiate_order_line_dto(int include_optional);

#include "test_forex_rates.c"
#include "test_currency_id.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"
#include "test_money.c"


order_line_dto_t* instantiate_order_line_dto(int include_optional) {
  order_line_dto_t* order_line_dto = NULL;
  if (include_optional) {
    order_line_dto = order_line_dto_create(
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
      1.337,
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
      ordersservice_order_line_dto_TAXCALCULATIONMETHOD_Included,
      ordersservice_order_line_dto_COSTCALCULATIONMETHOD_Automatic,
       // false, not to have infinite recursion
      instantiate_forex_rates(0),
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_currency_id(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_money(0),
      "0"
    );
  } else {
    order_line_dto = order_line_dto_create(
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
      1.337,
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
      ordersservice_order_line_dto_TAXCALCULATIONMETHOD_Included,
      ordersservice_order_line_dto_COSTCALCULATIONMETHOD_Automatic,
      NULL,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      "0"
    );
  }

  return order_line_dto;
}


#ifdef order_line_dto_MAIN

void test_order_line_dto(int include_optional) {
    order_line_dto_t* order_line_dto_1 = instantiate_order_line_dto(include_optional);

	cJSON* jsonorder_line_dto_1 = order_line_dto_convertToJSON(order_line_dto_1);
	printf("order_line_dto :\n%s\n", cJSON_Print(jsonorder_line_dto_1));
	order_line_dto_t* order_line_dto_2 = order_line_dto_parseFromJSON(jsonorder_line_dto_1);
	cJSON* jsonorder_line_dto_2 = order_line_dto_convertToJSON(order_line_dto_2);
	printf("repeating order_line_dto:\n%s\n", cJSON_Print(jsonorder_line_dto_2));
}

int main() {
  test_order_line_dto(1);
  test_order_line_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_line_dto_MAIN
#endif // order_line_dto_TEST
