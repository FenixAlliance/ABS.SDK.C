#ifndef trust_signing_provider_descriptor_dto_collection_query_parameters_TEST
#define trust_signing_provider_descriptor_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_signing_provider_descriptor_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_signing_provider_descriptor_dto_collection_query_parameters.h"
trust_signing_provider_descriptor_dto_collection_query_parameters_t* instantiate_trust_signing_provider_descriptor_dto_collection_query_parameters(int include_optional);



trust_signing_provider_descriptor_dto_collection_query_parameters_t* instantiate_trust_signing_provider_descriptor_dto_collection_query_parameters(int include_optional) {
  trust_signing_provider_descriptor_dto_collection_query_parameters_t* trust_signing_provider_descriptor_dto_collection_query_parameters = NULL;
  if (include_optional) {
    trust_signing_provider_descriptor_dto_collection_query_parameters = trust_signing_provider_descriptor_dto_collection_query_parameters_create(
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
    trust_signing_provider_descriptor_dto_collection_query_parameters = trust_signing_provider_descriptor_dto_collection_query_parameters_create(
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

  return trust_signing_provider_descriptor_dto_collection_query_parameters;
}


#ifdef trust_signing_provider_descriptor_dto_collection_query_parameters_MAIN

void test_trust_signing_provider_descriptor_dto_collection_query_parameters(int include_optional) {
    trust_signing_provider_descriptor_dto_collection_query_parameters_t* trust_signing_provider_descriptor_dto_collection_query_parameters_1 = instantiate_trust_signing_provider_descriptor_dto_collection_query_parameters(include_optional);

	cJSON* jsontrust_signing_provider_descriptor_dto_collection_query_parameters_1 = trust_signing_provider_descriptor_dto_collection_query_parameters_convertToJSON(trust_signing_provider_descriptor_dto_collection_query_parameters_1);
	printf("trust_signing_provider_descriptor_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontrust_signing_provider_descriptor_dto_collection_query_parameters_1));
	trust_signing_provider_descriptor_dto_collection_query_parameters_t* trust_signing_provider_descriptor_dto_collection_query_parameters_2 = trust_signing_provider_descriptor_dto_collection_query_parameters_parseFromJSON(jsontrust_signing_provider_descriptor_dto_collection_query_parameters_1);
	cJSON* jsontrust_signing_provider_descriptor_dto_collection_query_parameters_2 = trust_signing_provider_descriptor_dto_collection_query_parameters_convertToJSON(trust_signing_provider_descriptor_dto_collection_query_parameters_2);
	printf("repeating trust_signing_provider_descriptor_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontrust_signing_provider_descriptor_dto_collection_query_parameters_2));
}

int main() {
  test_trust_signing_provider_descriptor_dto_collection_query_parameters(1);
  test_trust_signing_provider_descriptor_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_signing_provider_descriptor_dto_collection_query_parameters_MAIN
#endif // trust_signing_provider_descriptor_dto_collection_query_parameters_TEST
