#ifndef invoice_dto_TEST
#define invoice_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_dto.h"
invoice_dto_t* instantiate_invoice_dto(int include_optional);



invoice_dto_t* instantiate_invoice_dto(int include_optional) {
  invoice_dto_t* invoice_dto = NULL;
  if (include_optional) {
    invoice_dto = invoice_dto_create(
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
      walletsservice_invoice_dto_TAXCALCULATIONMETHOD_Included,
      walletsservice_invoice_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1,
      56,
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
      walletsservice_invoice_dto_INVOICETYPE_PurchaseInvoice,
      walletsservice_invoice_dto_DOCUMENTTYPE_Standard,
      walletsservice_invoice_dto_INVOICESTATUS_Draft
    );
  } else {
    invoice_dto = invoice_dto_create(
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
      walletsservice_invoice_dto_TAXCALCULATIONMETHOD_Included,
      walletsservice_invoice_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1,
      56,
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
      walletsservice_invoice_dto_INVOICETYPE_PurchaseInvoice,
      walletsservice_invoice_dto_DOCUMENTTYPE_Standard,
      walletsservice_invoice_dto_INVOICESTATUS_Draft
    );
  }

  return invoice_dto;
}


#ifdef invoice_dto_MAIN

void test_invoice_dto(int include_optional) {
    invoice_dto_t* invoice_dto_1 = instantiate_invoice_dto(include_optional);

	cJSON* jsoninvoice_dto_1 = invoice_dto_convertToJSON(invoice_dto_1);
	printf("invoice_dto :\n%s\n", cJSON_Print(jsoninvoice_dto_1));
	invoice_dto_t* invoice_dto_2 = invoice_dto_parseFromJSON(jsoninvoice_dto_1);
	cJSON* jsoninvoice_dto_2 = invoice_dto_convertToJSON(invoice_dto_2);
	printf("repeating invoice_dto:\n%s\n", cJSON_Print(jsoninvoice_dto_2));
}

int main() {
  test_invoice_dto(1);
  test_invoice_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_dto_MAIN
#endif // invoice_dto_TEST
