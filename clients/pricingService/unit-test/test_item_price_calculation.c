#ifndef item_price_calculation_TEST
#define item_price_calculation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_price_calculation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_price_calculation.h"
item_price_calculation_t* instantiate_item_price_calculation(int include_optional);

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


item_price_calculation_t* instantiate_item_price_calculation(int include_optional) {
  item_price_calculation_t* item_price_calculation = NULL;
  if (include_optional) {
    item_price_calculation = item_price_calculation_create(
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
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_currency_id(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0)
    );
  } else {
    item_price_calculation = item_price_calculation_create(
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
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return item_price_calculation;
}


#ifdef item_price_calculation_MAIN

void test_item_price_calculation(int include_optional) {
    item_price_calculation_t* item_price_calculation_1 = instantiate_item_price_calculation(include_optional);

	cJSON* jsonitem_price_calculation_1 = item_price_calculation_convertToJSON(item_price_calculation_1);
	printf("item_price_calculation :\n%s\n", cJSON_Print(jsonitem_price_calculation_1));
	item_price_calculation_t* item_price_calculation_2 = item_price_calculation_parseFromJSON(jsonitem_price_calculation_1);
	cJSON* jsonitem_price_calculation_2 = item_price_calculation_convertToJSON(item_price_calculation_2);
	printf("repeating item_price_calculation:\n%s\n", cJSON_Print(jsonitem_price_calculation_2));
}

int main() {
  test_item_price_calculation(1);
  test_item_price_calculation(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_price_calculation_MAIN
#endif // item_price_calculation_TEST
