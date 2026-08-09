#ifndef signing_certificate_dto_collection_query_parameters_TEST
#define signing_certificate_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_certificate_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_certificate_dto_collection_query_parameters.h"
signing_certificate_dto_collection_query_parameters_t* instantiate_signing_certificate_dto_collection_query_parameters(int include_optional);



signing_certificate_dto_collection_query_parameters_t* instantiate_signing_certificate_dto_collection_query_parameters(int include_optional) {
  signing_certificate_dto_collection_query_parameters_t* signing_certificate_dto_collection_query_parameters = NULL;
  if (include_optional) {
    signing_certificate_dto_collection_query_parameters = signing_certificate_dto_collection_query_parameters_create(
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
    signing_certificate_dto_collection_query_parameters = signing_certificate_dto_collection_query_parameters_create(
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

  return signing_certificate_dto_collection_query_parameters;
}


#ifdef signing_certificate_dto_collection_query_parameters_MAIN

void test_signing_certificate_dto_collection_query_parameters(int include_optional) {
    signing_certificate_dto_collection_query_parameters_t* signing_certificate_dto_collection_query_parameters_1 = instantiate_signing_certificate_dto_collection_query_parameters(include_optional);

	cJSON* jsonsigning_certificate_dto_collection_query_parameters_1 = signing_certificate_dto_collection_query_parameters_convertToJSON(signing_certificate_dto_collection_query_parameters_1);
	printf("signing_certificate_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsigning_certificate_dto_collection_query_parameters_1));
	signing_certificate_dto_collection_query_parameters_t* signing_certificate_dto_collection_query_parameters_2 = signing_certificate_dto_collection_query_parameters_parseFromJSON(jsonsigning_certificate_dto_collection_query_parameters_1);
	cJSON* jsonsigning_certificate_dto_collection_query_parameters_2 = signing_certificate_dto_collection_query_parameters_convertToJSON(signing_certificate_dto_collection_query_parameters_2);
	printf("repeating signing_certificate_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsigning_certificate_dto_collection_query_parameters_2));
}

int main() {
  test_signing_certificate_dto_collection_query_parameters(1);
  test_signing_certificate_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_certificate_dto_collection_query_parameters_MAIN
#endif // signing_certificate_dto_collection_query_parameters_TEST
