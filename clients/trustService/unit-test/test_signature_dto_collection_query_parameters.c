#ifndef signature_dto_collection_query_parameters_TEST
#define signature_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_dto_collection_query_parameters.h"
signature_dto_collection_query_parameters_t* instantiate_signature_dto_collection_query_parameters(int include_optional);



signature_dto_collection_query_parameters_t* instantiate_signature_dto_collection_query_parameters(int include_optional) {
  signature_dto_collection_query_parameters_t* signature_dto_collection_query_parameters = NULL;
  if (include_optional) {
    signature_dto_collection_query_parameters = signature_dto_collection_query_parameters_create(
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
    signature_dto_collection_query_parameters = signature_dto_collection_query_parameters_create(
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

  return signature_dto_collection_query_parameters;
}


#ifdef signature_dto_collection_query_parameters_MAIN

void test_signature_dto_collection_query_parameters(int include_optional) {
    signature_dto_collection_query_parameters_t* signature_dto_collection_query_parameters_1 = instantiate_signature_dto_collection_query_parameters(include_optional);

	cJSON* jsonsignature_dto_collection_query_parameters_1 = signature_dto_collection_query_parameters_convertToJSON(signature_dto_collection_query_parameters_1);
	printf("signature_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsignature_dto_collection_query_parameters_1));
	signature_dto_collection_query_parameters_t* signature_dto_collection_query_parameters_2 = signature_dto_collection_query_parameters_parseFromJSON(jsonsignature_dto_collection_query_parameters_1);
	cJSON* jsonsignature_dto_collection_query_parameters_2 = signature_dto_collection_query_parameters_convertToJSON(signature_dto_collection_query_parameters_2);
	printf("repeating signature_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsignature_dto_collection_query_parameters_2));
}

int main() {
  test_signature_dto_collection_query_parameters(1);
  test_signature_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_dto_collection_query_parameters_MAIN
#endif // signature_dto_collection_query_parameters_TEST
