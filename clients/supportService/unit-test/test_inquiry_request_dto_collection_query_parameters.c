#ifndef inquiry_request_dto_collection_query_parameters_TEST
#define inquiry_request_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inquiry_request_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inquiry_request_dto_collection_query_parameters.h"
inquiry_request_dto_collection_query_parameters_t* instantiate_inquiry_request_dto_collection_query_parameters(int include_optional);



inquiry_request_dto_collection_query_parameters_t* instantiate_inquiry_request_dto_collection_query_parameters(int include_optional) {
  inquiry_request_dto_collection_query_parameters_t* inquiry_request_dto_collection_query_parameters = NULL;
  if (include_optional) {
    inquiry_request_dto_collection_query_parameters = inquiry_request_dto_collection_query_parameters_create(
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
    inquiry_request_dto_collection_query_parameters = inquiry_request_dto_collection_query_parameters_create(
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

  return inquiry_request_dto_collection_query_parameters;
}


#ifdef inquiry_request_dto_collection_query_parameters_MAIN

void test_inquiry_request_dto_collection_query_parameters(int include_optional) {
    inquiry_request_dto_collection_query_parameters_t* inquiry_request_dto_collection_query_parameters_1 = instantiate_inquiry_request_dto_collection_query_parameters(include_optional);

	cJSON* jsoninquiry_request_dto_collection_query_parameters_1 = inquiry_request_dto_collection_query_parameters_convertToJSON(inquiry_request_dto_collection_query_parameters_1);
	printf("inquiry_request_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoninquiry_request_dto_collection_query_parameters_1));
	inquiry_request_dto_collection_query_parameters_t* inquiry_request_dto_collection_query_parameters_2 = inquiry_request_dto_collection_query_parameters_parseFromJSON(jsoninquiry_request_dto_collection_query_parameters_1);
	cJSON* jsoninquiry_request_dto_collection_query_parameters_2 = inquiry_request_dto_collection_query_parameters_convertToJSON(inquiry_request_dto_collection_query_parameters_2);
	printf("repeating inquiry_request_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoninquiry_request_dto_collection_query_parameters_2));
}

int main() {
  test_inquiry_request_dto_collection_query_parameters(1);
  test_inquiry_request_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // inquiry_request_dto_collection_query_parameters_MAIN
#endif // inquiry_request_dto_collection_query_parameters_TEST
