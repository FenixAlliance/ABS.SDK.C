#ifndef waybill_line_dto_collection_query_parameters_TEST
#define waybill_line_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define waybill_line_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/waybill_line_dto_collection_query_parameters.h"
waybill_line_dto_collection_query_parameters_t* instantiate_waybill_line_dto_collection_query_parameters(int include_optional);



waybill_line_dto_collection_query_parameters_t* instantiate_waybill_line_dto_collection_query_parameters(int include_optional) {
  waybill_line_dto_collection_query_parameters_t* waybill_line_dto_collection_query_parameters = NULL;
  if (include_optional) {
    waybill_line_dto_collection_query_parameters = waybill_line_dto_collection_query_parameters_create(
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
    waybill_line_dto_collection_query_parameters = waybill_line_dto_collection_query_parameters_create(
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

  return waybill_line_dto_collection_query_parameters;
}


#ifdef waybill_line_dto_collection_query_parameters_MAIN

void test_waybill_line_dto_collection_query_parameters(int include_optional) {
    waybill_line_dto_collection_query_parameters_t* waybill_line_dto_collection_query_parameters_1 = instantiate_waybill_line_dto_collection_query_parameters(include_optional);

	cJSON* jsonwaybill_line_dto_collection_query_parameters_1 = waybill_line_dto_collection_query_parameters_convertToJSON(waybill_line_dto_collection_query_parameters_1);
	printf("waybill_line_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwaybill_line_dto_collection_query_parameters_1));
	waybill_line_dto_collection_query_parameters_t* waybill_line_dto_collection_query_parameters_2 = waybill_line_dto_collection_query_parameters_parseFromJSON(jsonwaybill_line_dto_collection_query_parameters_1);
	cJSON* jsonwaybill_line_dto_collection_query_parameters_2 = waybill_line_dto_collection_query_parameters_convertToJSON(waybill_line_dto_collection_query_parameters_2);
	printf("repeating waybill_line_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwaybill_line_dto_collection_query_parameters_2));
}

int main() {
  test_waybill_line_dto_collection_query_parameters(1);
  test_waybill_line_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // waybill_line_dto_collection_query_parameters_MAIN
#endif // waybill_line_dto_collection_query_parameters_TEST
