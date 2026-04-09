#ifndef invoice_adjustment_update_dto_TEST
#define invoice_adjustment_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_adjustment_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_adjustment_update_dto.h"
invoice_adjustment_update_dto_t* instantiate_invoice_adjustment_update_dto(int include_optional);



invoice_adjustment_update_dto_t* instantiate_invoice_adjustment_update_dto(int include_optional) {
  invoice_adjustment_update_dto_t* invoice_adjustment_update_dto = NULL;
  if (include_optional) {
    invoice_adjustment_update_dto = invoice_adjustment_update_dto_create(
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      invoicingservice_invoice_adjustment_update_dto_TYPE_Discount
    );
  } else {
    invoice_adjustment_update_dto = invoice_adjustment_update_dto_create(
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      invoicingservice_invoice_adjustment_update_dto_TYPE_Discount
    );
  }

  return invoice_adjustment_update_dto;
}


#ifdef invoice_adjustment_update_dto_MAIN

void test_invoice_adjustment_update_dto(int include_optional) {
    invoice_adjustment_update_dto_t* invoice_adjustment_update_dto_1 = instantiate_invoice_adjustment_update_dto(include_optional);

	cJSON* jsoninvoice_adjustment_update_dto_1 = invoice_adjustment_update_dto_convertToJSON(invoice_adjustment_update_dto_1);
	printf("invoice_adjustment_update_dto :\n%s\n", cJSON_Print(jsoninvoice_adjustment_update_dto_1));
	invoice_adjustment_update_dto_t* invoice_adjustment_update_dto_2 = invoice_adjustment_update_dto_parseFromJSON(jsoninvoice_adjustment_update_dto_1);
	cJSON* jsoninvoice_adjustment_update_dto_2 = invoice_adjustment_update_dto_convertToJSON(invoice_adjustment_update_dto_2);
	printf("repeating invoice_adjustment_update_dto:\n%s\n", cJSON_Print(jsoninvoice_adjustment_update_dto_2));
}

int main() {
  test_invoice_adjustment_update_dto(1);
  test_invoice_adjustment_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_adjustment_update_dto_MAIN
#endif // invoice_adjustment_update_dto_TEST
