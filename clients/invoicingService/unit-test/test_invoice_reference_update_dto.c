#ifndef invoice_reference_update_dto_TEST
#define invoice_reference_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_reference_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_reference_update_dto.h"
invoice_reference_update_dto_t* instantiate_invoice_reference_update_dto(int include_optional);



invoice_reference_update_dto_t* instantiate_invoice_reference_update_dto(int include_optional) {
  invoice_reference_update_dto_t* invoice_reference_update_dto = NULL;
  if (include_optional) {
    invoice_reference_update_dto = invoice_reference_update_dto_create(
      "0"
    );
  } else {
    invoice_reference_update_dto = invoice_reference_update_dto_create(
      "0"
    );
  }

  return invoice_reference_update_dto;
}


#ifdef invoice_reference_update_dto_MAIN

void test_invoice_reference_update_dto(int include_optional) {
    invoice_reference_update_dto_t* invoice_reference_update_dto_1 = instantiate_invoice_reference_update_dto(include_optional);

	cJSON* jsoninvoice_reference_update_dto_1 = invoice_reference_update_dto_convertToJSON(invoice_reference_update_dto_1);
	printf("invoice_reference_update_dto :\n%s\n", cJSON_Print(jsoninvoice_reference_update_dto_1));
	invoice_reference_update_dto_t* invoice_reference_update_dto_2 = invoice_reference_update_dto_parseFromJSON(jsoninvoice_reference_update_dto_1);
	cJSON* jsoninvoice_reference_update_dto_2 = invoice_reference_update_dto_convertToJSON(invoice_reference_update_dto_2);
	printf("repeating invoice_reference_update_dto:\n%s\n", cJSON_Print(jsoninvoice_reference_update_dto_2));
}

int main() {
  test_invoice_reference_update_dto(1);
  test_invoice_reference_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_reference_update_dto_MAIN
#endif // invoice_reference_update_dto_TEST
