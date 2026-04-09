#ifndef deal_unit_line_dto_TEST
#define deal_unit_line_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deal_unit_line_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deal_unit_line_dto.h"
deal_unit_line_dto_t* instantiate_deal_unit_line_dto(int include_optional);

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


deal_unit_line_dto_t* instantiate_deal_unit_line_dto(int include_optional) {
  deal_unit_line_dto_t* deal_unit_line_dto = NULL;
  if (include_optional) {
    deal_unit_line_dto = deal_unit_line_dto_create(
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
      dealsservice_deal_unit_line_dto_TAXCALCULATIONMETHOD_Included,
      dealsservice_deal_unit_line_dto_COSTCALCULATIONMETHOD_Automatic,
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
    deal_unit_line_dto = deal_unit_line_dto_create(
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
      dealsservice_deal_unit_line_dto_TAXCALCULATIONMETHOD_Included,
      dealsservice_deal_unit_line_dto_COSTCALCULATIONMETHOD_Automatic,
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

  return deal_unit_line_dto;
}


#ifdef deal_unit_line_dto_MAIN

void test_deal_unit_line_dto(int include_optional) {
    deal_unit_line_dto_t* deal_unit_line_dto_1 = instantiate_deal_unit_line_dto(include_optional);

	cJSON* jsondeal_unit_line_dto_1 = deal_unit_line_dto_convertToJSON(deal_unit_line_dto_1);
	printf("deal_unit_line_dto :\n%s\n", cJSON_Print(jsondeal_unit_line_dto_1));
	deal_unit_line_dto_t* deal_unit_line_dto_2 = deal_unit_line_dto_parseFromJSON(jsondeal_unit_line_dto_1);
	cJSON* jsondeal_unit_line_dto_2 = deal_unit_line_dto_convertToJSON(deal_unit_line_dto_2);
	printf("repeating deal_unit_line_dto:\n%s\n", cJSON_Print(jsondeal_unit_line_dto_2));
}

int main() {
  test_deal_unit_line_dto(1);
  test_deal_unit_line_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // deal_unit_line_dto_MAIN
#endif // deal_unit_line_dto_TEST
