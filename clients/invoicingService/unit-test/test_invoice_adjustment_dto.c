#ifndef invoice_adjustment_dto_TEST
#define invoice_adjustment_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_adjustment_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_adjustment_dto.h"
invoice_adjustment_dto_t* instantiate_invoice_adjustment_dto(int include_optional);



invoice_adjustment_dto_t* instantiate_invoice_adjustment_dto(int include_optional) {
  invoice_adjustment_dto_t* invoice_adjustment_dto = NULL;
  if (include_optional) {
    invoice_adjustment_dto = invoice_adjustment_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      invoicingservice_invoice_adjustment_dto_TYPE_Discount
    );
  } else {
    invoice_adjustment_dto = invoice_adjustment_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      invoicingservice_invoice_adjustment_dto_TYPE_Discount
    );
  }

  return invoice_adjustment_dto;
}


#ifdef invoice_adjustment_dto_MAIN

void test_invoice_adjustment_dto(int include_optional) {
    invoice_adjustment_dto_t* invoice_adjustment_dto_1 = instantiate_invoice_adjustment_dto(include_optional);

	cJSON* jsoninvoice_adjustment_dto_1 = invoice_adjustment_dto_convertToJSON(invoice_adjustment_dto_1);
	printf("invoice_adjustment_dto :\n%s\n", cJSON_Print(jsoninvoice_adjustment_dto_1));
	invoice_adjustment_dto_t* invoice_adjustment_dto_2 = invoice_adjustment_dto_parseFromJSON(jsoninvoice_adjustment_dto_1);
	cJSON* jsoninvoice_adjustment_dto_2 = invoice_adjustment_dto_convertToJSON(invoice_adjustment_dto_2);
	printf("repeating invoice_adjustment_dto:\n%s\n", cJSON_Print(jsoninvoice_adjustment_dto_2));
}

int main() {
  test_invoice_adjustment_dto(1);
  test_invoice_adjustment_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_adjustment_dto_MAIN
#endif // invoice_adjustment_dto_TEST
