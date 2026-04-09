#ifndef order_dto_TEST
#define order_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_dto.h"
order_dto_t* instantiate_order_dto(int include_optional);



order_dto_t* instantiate_order_dto(int include_optional) {
  order_dto_t* order_dto = NULL;
  if (include_optional) {
    order_dto = order_dto_create(
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
      "0",
      "0",
      "0",
      "0",
      "0",
      walletsservice_order_dto_TAXCALCULATIONMETHOD_Included,
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
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      walletsservice_order_dto_COSTCALCULATIONMETHOD_Automatic,
      walletsservice_order_dto_FREIGHTTERMS_FOB,
      walletsservice_order_dto_ORDERSTATUS_New,
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    order_dto = order_dto_create(
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
      "0",
      "0",
      "0",
      "0",
      "0",
      walletsservice_order_dto_TAXCALCULATIONMETHOD_Included,
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
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      walletsservice_order_dto_COSTCALCULATIONMETHOD_Automatic,
      walletsservice_order_dto_FREIGHTTERMS_FOB,
      walletsservice_order_dto_ORDERSTATUS_New,
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return order_dto;
}


#ifdef order_dto_MAIN

void test_order_dto(int include_optional) {
    order_dto_t* order_dto_1 = instantiate_order_dto(include_optional);

	cJSON* jsonorder_dto_1 = order_dto_convertToJSON(order_dto_1);
	printf("order_dto :\n%s\n", cJSON_Print(jsonorder_dto_1));
	order_dto_t* order_dto_2 = order_dto_parseFromJSON(jsonorder_dto_1);
	cJSON* jsonorder_dto_2 = order_dto_convertToJSON(order_dto_2);
	printf("repeating order_dto:\n%s\n", cJSON_Print(jsonorder_dto_2));
}

int main() {
  test_order_dto(1);
  test_order_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_dto_MAIN
#endif // order_dto_TEST
