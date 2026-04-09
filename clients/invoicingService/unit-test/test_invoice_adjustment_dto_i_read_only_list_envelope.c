#ifndef invoice_adjustment_dto_i_read_only_list_envelope_TEST
#define invoice_adjustment_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_adjustment_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_adjustment_dto_i_read_only_list_envelope.h"
invoice_adjustment_dto_i_read_only_list_envelope_t* instantiate_invoice_adjustment_dto_i_read_only_list_envelope(int include_optional);



invoice_adjustment_dto_i_read_only_list_envelope_t* instantiate_invoice_adjustment_dto_i_read_only_list_envelope(int include_optional) {
  invoice_adjustment_dto_i_read_only_list_envelope_t* invoice_adjustment_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    invoice_adjustment_dto_i_read_only_list_envelope = invoice_adjustment_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    invoice_adjustment_dto_i_read_only_list_envelope = invoice_adjustment_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return invoice_adjustment_dto_i_read_only_list_envelope;
}


#ifdef invoice_adjustment_dto_i_read_only_list_envelope_MAIN

void test_invoice_adjustment_dto_i_read_only_list_envelope(int include_optional) {
    invoice_adjustment_dto_i_read_only_list_envelope_t* invoice_adjustment_dto_i_read_only_list_envelope_1 = instantiate_invoice_adjustment_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsoninvoice_adjustment_dto_i_read_only_list_envelope_1 = invoice_adjustment_dto_i_read_only_list_envelope_convertToJSON(invoice_adjustment_dto_i_read_only_list_envelope_1);
	printf("invoice_adjustment_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsoninvoice_adjustment_dto_i_read_only_list_envelope_1));
	invoice_adjustment_dto_i_read_only_list_envelope_t* invoice_adjustment_dto_i_read_only_list_envelope_2 = invoice_adjustment_dto_i_read_only_list_envelope_parseFromJSON(jsoninvoice_adjustment_dto_i_read_only_list_envelope_1);
	cJSON* jsoninvoice_adjustment_dto_i_read_only_list_envelope_2 = invoice_adjustment_dto_i_read_only_list_envelope_convertToJSON(invoice_adjustment_dto_i_read_only_list_envelope_2);
	printf("repeating invoice_adjustment_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsoninvoice_adjustment_dto_i_read_only_list_envelope_2));
}

int main() {
  test_invoice_adjustment_dto_i_read_only_list_envelope(1);
  test_invoice_adjustment_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_adjustment_dto_i_read_only_list_envelope_MAIN
#endif // invoice_adjustment_dto_i_read_only_list_envelope_TEST
