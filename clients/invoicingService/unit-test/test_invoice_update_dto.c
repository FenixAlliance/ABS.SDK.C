#ifndef invoice_update_dto_TEST
#define invoice_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_update_dto.h"
invoice_update_dto_t* instantiate_invoice_update_dto(int include_optional);



invoice_update_dto_t* instantiate_invoice_update_dto(int include_optional) {
  invoice_update_dto_t* invoice_update_dto = NULL;
  if (include_optional) {
    invoice_update_dto = invoice_update_dto_create(
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
      invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_Automatic,
      invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_Included,
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
      "0",
      invoicingservice_invoice_update_dto_INVOICETYPE_PurchaseInvoice,
      invoicingservice_invoice_update_dto_DOCUMENTTYPE_Standard,
      invoicingservice_invoice_update_dto_INVOICESTATUS_Draft,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    invoice_update_dto = invoice_update_dto_create(
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
      invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_Automatic,
      invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_Included,
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
      "0",
      invoicingservice_invoice_update_dto_INVOICETYPE_PurchaseInvoice,
      invoicingservice_invoice_update_dto_DOCUMENTTYPE_Standard,
      invoicingservice_invoice_update_dto_INVOICESTATUS_Draft,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return invoice_update_dto;
}


#ifdef invoice_update_dto_MAIN

void test_invoice_update_dto(int include_optional) {
    invoice_update_dto_t* invoice_update_dto_1 = instantiate_invoice_update_dto(include_optional);

	cJSON* jsoninvoice_update_dto_1 = invoice_update_dto_convertToJSON(invoice_update_dto_1);
	printf("invoice_update_dto :\n%s\n", cJSON_Print(jsoninvoice_update_dto_1));
	invoice_update_dto_t* invoice_update_dto_2 = invoice_update_dto_parseFromJSON(jsoninvoice_update_dto_1);
	cJSON* jsoninvoice_update_dto_2 = invoice_update_dto_convertToJSON(invoice_update_dto_2);
	printf("repeating invoice_update_dto:\n%s\n", cJSON_Print(jsoninvoice_update_dto_2));
}

int main() {
  test_invoice_update_dto(1);
  test_invoice_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_update_dto_MAIN
#endif // invoice_update_dto_TEST
