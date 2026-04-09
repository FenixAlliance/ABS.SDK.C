#ifndef invoice_line_dto_TEST
#define invoice_line_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_line_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_line_dto.h"
invoice_line_dto_t* instantiate_invoice_line_dto(int include_optional);

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


invoice_line_dto_t* instantiate_invoice_line_dto(int include_optional) {
  invoice_line_dto_t* invoice_line_dto = NULL;
  if (include_optional) {
    invoice_line_dto = invoice_line_dto_create(
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
      invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_Included,
      invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_Automatic,
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
    invoice_line_dto = invoice_line_dto_create(
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
      invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_Included,
      invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_Automatic,
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

  return invoice_line_dto;
}


#ifdef invoice_line_dto_MAIN

void test_invoice_line_dto(int include_optional) {
    invoice_line_dto_t* invoice_line_dto_1 = instantiate_invoice_line_dto(include_optional);

	cJSON* jsoninvoice_line_dto_1 = invoice_line_dto_convertToJSON(invoice_line_dto_1);
	printf("invoice_line_dto :\n%s\n", cJSON_Print(jsoninvoice_line_dto_1));
	invoice_line_dto_t* invoice_line_dto_2 = invoice_line_dto_parseFromJSON(jsoninvoice_line_dto_1);
	cJSON* jsoninvoice_line_dto_2 = invoice_line_dto_convertToJSON(invoice_line_dto_2);
	printf("repeating invoice_line_dto:\n%s\n", cJSON_Print(jsoninvoice_line_dto_2));
}

int main() {
  test_invoice_line_dto(1);
  test_invoice_line_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_line_dto_MAIN
#endif // invoice_line_dto_TEST
