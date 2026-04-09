#ifndef invoice_line_applied_tax_update_dto_TEST
#define invoice_line_applied_tax_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_line_applied_tax_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_line_applied_tax_update_dto.h"
invoice_line_applied_tax_update_dto_t* instantiate_invoice_line_applied_tax_update_dto(int include_optional);



invoice_line_applied_tax_update_dto_t* instantiate_invoice_line_applied_tax_update_dto(int include_optional) {
  invoice_line_applied_tax_update_dto_t* invoice_line_applied_tax_update_dto = NULL;
  if (include_optional) {
    invoice_line_applied_tax_update_dto = invoice_line_applied_tax_update_dto_create(
      "0"
    );
  } else {
    invoice_line_applied_tax_update_dto = invoice_line_applied_tax_update_dto_create(
      "0"
    );
  }

  return invoice_line_applied_tax_update_dto;
}


#ifdef invoice_line_applied_tax_update_dto_MAIN

void test_invoice_line_applied_tax_update_dto(int include_optional) {
    invoice_line_applied_tax_update_dto_t* invoice_line_applied_tax_update_dto_1 = instantiate_invoice_line_applied_tax_update_dto(include_optional);

	cJSON* jsoninvoice_line_applied_tax_update_dto_1 = invoice_line_applied_tax_update_dto_convertToJSON(invoice_line_applied_tax_update_dto_1);
	printf("invoice_line_applied_tax_update_dto :\n%s\n", cJSON_Print(jsoninvoice_line_applied_tax_update_dto_1));
	invoice_line_applied_tax_update_dto_t* invoice_line_applied_tax_update_dto_2 = invoice_line_applied_tax_update_dto_parseFromJSON(jsoninvoice_line_applied_tax_update_dto_1);
	cJSON* jsoninvoice_line_applied_tax_update_dto_2 = invoice_line_applied_tax_update_dto_convertToJSON(invoice_line_applied_tax_update_dto_2);
	printf("repeating invoice_line_applied_tax_update_dto:\n%s\n", cJSON_Print(jsoninvoice_line_applied_tax_update_dto_2));
}

int main() {
  test_invoice_line_applied_tax_update_dto(1);
  test_invoice_line_applied_tax_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_line_applied_tax_update_dto_MAIN
#endif // invoice_line_applied_tax_update_dto_TEST
