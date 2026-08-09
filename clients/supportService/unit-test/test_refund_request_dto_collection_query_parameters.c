#ifndef refund_request_dto_collection_query_parameters_TEST
#define refund_request_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define refund_request_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/refund_request_dto_collection_query_parameters.h"
refund_request_dto_collection_query_parameters_t* instantiate_refund_request_dto_collection_query_parameters(int include_optional);



refund_request_dto_collection_query_parameters_t* instantiate_refund_request_dto_collection_query_parameters(int include_optional) {
  refund_request_dto_collection_query_parameters_t* refund_request_dto_collection_query_parameters = NULL;
  if (include_optional) {
    refund_request_dto_collection_query_parameters = refund_request_dto_collection_query_parameters_create(
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
    refund_request_dto_collection_query_parameters = refund_request_dto_collection_query_parameters_create(
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

  return refund_request_dto_collection_query_parameters;
}


#ifdef refund_request_dto_collection_query_parameters_MAIN

void test_refund_request_dto_collection_query_parameters(int include_optional) {
    refund_request_dto_collection_query_parameters_t* refund_request_dto_collection_query_parameters_1 = instantiate_refund_request_dto_collection_query_parameters(include_optional);

	cJSON* jsonrefund_request_dto_collection_query_parameters_1 = refund_request_dto_collection_query_parameters_convertToJSON(refund_request_dto_collection_query_parameters_1);
	printf("refund_request_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonrefund_request_dto_collection_query_parameters_1));
	refund_request_dto_collection_query_parameters_t* refund_request_dto_collection_query_parameters_2 = refund_request_dto_collection_query_parameters_parseFromJSON(jsonrefund_request_dto_collection_query_parameters_1);
	cJSON* jsonrefund_request_dto_collection_query_parameters_2 = refund_request_dto_collection_query_parameters_convertToJSON(refund_request_dto_collection_query_parameters_2);
	printf("repeating refund_request_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonrefund_request_dto_collection_query_parameters_2));
}

int main() {
  test_refund_request_dto_collection_query_parameters(1);
  test_refund_request_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // refund_request_dto_collection_query_parameters_MAIN
#endif // refund_request_dto_collection_query_parameters_TEST
