#ifndef bill_of_lading_line_dto_collection_query_parameters_TEST
#define bill_of_lading_line_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bill_of_lading_line_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bill_of_lading_line_dto_collection_query_parameters.h"
bill_of_lading_line_dto_collection_query_parameters_t* instantiate_bill_of_lading_line_dto_collection_query_parameters(int include_optional);



bill_of_lading_line_dto_collection_query_parameters_t* instantiate_bill_of_lading_line_dto_collection_query_parameters(int include_optional) {
  bill_of_lading_line_dto_collection_query_parameters_t* bill_of_lading_line_dto_collection_query_parameters = NULL;
  if (include_optional) {
    bill_of_lading_line_dto_collection_query_parameters = bill_of_lading_line_dto_collection_query_parameters_create(
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
    bill_of_lading_line_dto_collection_query_parameters = bill_of_lading_line_dto_collection_query_parameters_create(
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

  return bill_of_lading_line_dto_collection_query_parameters;
}


#ifdef bill_of_lading_line_dto_collection_query_parameters_MAIN

void test_bill_of_lading_line_dto_collection_query_parameters(int include_optional) {
    bill_of_lading_line_dto_collection_query_parameters_t* bill_of_lading_line_dto_collection_query_parameters_1 = instantiate_bill_of_lading_line_dto_collection_query_parameters(include_optional);

	cJSON* jsonbill_of_lading_line_dto_collection_query_parameters_1 = bill_of_lading_line_dto_collection_query_parameters_convertToJSON(bill_of_lading_line_dto_collection_query_parameters_1);
	printf("bill_of_lading_line_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonbill_of_lading_line_dto_collection_query_parameters_1));
	bill_of_lading_line_dto_collection_query_parameters_t* bill_of_lading_line_dto_collection_query_parameters_2 = bill_of_lading_line_dto_collection_query_parameters_parseFromJSON(jsonbill_of_lading_line_dto_collection_query_parameters_1);
	cJSON* jsonbill_of_lading_line_dto_collection_query_parameters_2 = bill_of_lading_line_dto_collection_query_parameters_convertToJSON(bill_of_lading_line_dto_collection_query_parameters_2);
	printf("repeating bill_of_lading_line_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonbill_of_lading_line_dto_collection_query_parameters_2));
}

int main() {
  test_bill_of_lading_line_dto_collection_query_parameters(1);
  test_bill_of_lading_line_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // bill_of_lading_line_dto_collection_query_parameters_MAIN
#endif // bill_of_lading_line_dto_collection_query_parameters_TEST
