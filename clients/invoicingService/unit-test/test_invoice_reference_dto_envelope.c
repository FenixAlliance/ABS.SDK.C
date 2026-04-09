#ifndef invoice_reference_dto_envelope_TEST
#define invoice_reference_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_reference_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_reference_dto_envelope.h"
invoice_reference_dto_envelope_t* instantiate_invoice_reference_dto_envelope(int include_optional);

#include "test_invoice_reference_dto.c"


invoice_reference_dto_envelope_t* instantiate_invoice_reference_dto_envelope(int include_optional) {
  invoice_reference_dto_envelope_t* invoice_reference_dto_envelope = NULL;
  if (include_optional) {
    invoice_reference_dto_envelope = invoice_reference_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_invoice_reference_dto(0)
    );
  } else {
    invoice_reference_dto_envelope = invoice_reference_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return invoice_reference_dto_envelope;
}


#ifdef invoice_reference_dto_envelope_MAIN

void test_invoice_reference_dto_envelope(int include_optional) {
    invoice_reference_dto_envelope_t* invoice_reference_dto_envelope_1 = instantiate_invoice_reference_dto_envelope(include_optional);

	cJSON* jsoninvoice_reference_dto_envelope_1 = invoice_reference_dto_envelope_convertToJSON(invoice_reference_dto_envelope_1);
	printf("invoice_reference_dto_envelope :\n%s\n", cJSON_Print(jsoninvoice_reference_dto_envelope_1));
	invoice_reference_dto_envelope_t* invoice_reference_dto_envelope_2 = invoice_reference_dto_envelope_parseFromJSON(jsoninvoice_reference_dto_envelope_1);
	cJSON* jsoninvoice_reference_dto_envelope_2 = invoice_reference_dto_envelope_convertToJSON(invoice_reference_dto_envelope_2);
	printf("repeating invoice_reference_dto_envelope:\n%s\n", cJSON_Print(jsoninvoice_reference_dto_envelope_2));
}

int main() {
  test_invoice_reference_dto_envelope(1);
  test_invoice_reference_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_reference_dto_envelope_MAIN
#endif // invoice_reference_dto_envelope_TEST
