#ifndef invoice_reference_dto_collection_query_parameters_TEST
#define invoice_reference_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_reference_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_reference_dto_collection_query_parameters.h"
invoice_reference_dto_collection_query_parameters_t* instantiate_invoice_reference_dto_collection_query_parameters(int include_optional);



invoice_reference_dto_collection_query_parameters_t* instantiate_invoice_reference_dto_collection_query_parameters(int include_optional) {
  invoice_reference_dto_collection_query_parameters_t* invoice_reference_dto_collection_query_parameters = NULL;
  if (include_optional) {
    invoice_reference_dto_collection_query_parameters = invoice_reference_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    invoice_reference_dto_collection_query_parameters = invoice_reference_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return invoice_reference_dto_collection_query_parameters;
}


#ifdef invoice_reference_dto_collection_query_parameters_MAIN

void test_invoice_reference_dto_collection_query_parameters(int include_optional) {
    invoice_reference_dto_collection_query_parameters_t* invoice_reference_dto_collection_query_parameters_1 = instantiate_invoice_reference_dto_collection_query_parameters(include_optional);

	cJSON* jsoninvoice_reference_dto_collection_query_parameters_1 = invoice_reference_dto_collection_query_parameters_convertToJSON(invoice_reference_dto_collection_query_parameters_1);
	printf("invoice_reference_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoninvoice_reference_dto_collection_query_parameters_1));
	invoice_reference_dto_collection_query_parameters_t* invoice_reference_dto_collection_query_parameters_2 = invoice_reference_dto_collection_query_parameters_parseFromJSON(jsoninvoice_reference_dto_collection_query_parameters_1);
	cJSON* jsoninvoice_reference_dto_collection_query_parameters_2 = invoice_reference_dto_collection_query_parameters_convertToJSON(invoice_reference_dto_collection_query_parameters_2);
	printf("repeating invoice_reference_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoninvoice_reference_dto_collection_query_parameters_2));
}

int main() {
  test_invoice_reference_dto_collection_query_parameters(1);
  test_invoice_reference_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_reference_dto_collection_query_parameters_MAIN
#endif // invoice_reference_dto_collection_query_parameters_TEST
