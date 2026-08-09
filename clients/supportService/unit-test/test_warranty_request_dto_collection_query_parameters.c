#ifndef warranty_request_dto_collection_query_parameters_TEST
#define warranty_request_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warranty_request_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warranty_request_dto_collection_query_parameters.h"
warranty_request_dto_collection_query_parameters_t* instantiate_warranty_request_dto_collection_query_parameters(int include_optional);



warranty_request_dto_collection_query_parameters_t* instantiate_warranty_request_dto_collection_query_parameters(int include_optional) {
  warranty_request_dto_collection_query_parameters_t* warranty_request_dto_collection_query_parameters = NULL;
  if (include_optional) {
    warranty_request_dto_collection_query_parameters = warranty_request_dto_collection_query_parameters_create(
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
    warranty_request_dto_collection_query_parameters = warranty_request_dto_collection_query_parameters_create(
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

  return warranty_request_dto_collection_query_parameters;
}


#ifdef warranty_request_dto_collection_query_parameters_MAIN

void test_warranty_request_dto_collection_query_parameters(int include_optional) {
    warranty_request_dto_collection_query_parameters_t* warranty_request_dto_collection_query_parameters_1 = instantiate_warranty_request_dto_collection_query_parameters(include_optional);

	cJSON* jsonwarranty_request_dto_collection_query_parameters_1 = warranty_request_dto_collection_query_parameters_convertToJSON(warranty_request_dto_collection_query_parameters_1);
	printf("warranty_request_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwarranty_request_dto_collection_query_parameters_1));
	warranty_request_dto_collection_query_parameters_t* warranty_request_dto_collection_query_parameters_2 = warranty_request_dto_collection_query_parameters_parseFromJSON(jsonwarranty_request_dto_collection_query_parameters_1);
	cJSON* jsonwarranty_request_dto_collection_query_parameters_2 = warranty_request_dto_collection_query_parameters_convertToJSON(warranty_request_dto_collection_query_parameters_2);
	printf("repeating warranty_request_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwarranty_request_dto_collection_query_parameters_2));
}

int main() {
  test_warranty_request_dto_collection_query_parameters(1);
  test_warranty_request_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // warranty_request_dto_collection_query_parameters_MAIN
#endif // warranty_request_dto_collection_query_parameters_TEST
