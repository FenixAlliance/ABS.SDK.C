#ifndef signed_document_dto_collection_query_parameters_TEST
#define signed_document_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signed_document_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signed_document_dto_collection_query_parameters.h"
signed_document_dto_collection_query_parameters_t* instantiate_signed_document_dto_collection_query_parameters(int include_optional);



signed_document_dto_collection_query_parameters_t* instantiate_signed_document_dto_collection_query_parameters(int include_optional) {
  signed_document_dto_collection_query_parameters_t* signed_document_dto_collection_query_parameters = NULL;
  if (include_optional) {
    signed_document_dto_collection_query_parameters = signed_document_dto_collection_query_parameters_create(
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
    signed_document_dto_collection_query_parameters = signed_document_dto_collection_query_parameters_create(
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

  return signed_document_dto_collection_query_parameters;
}


#ifdef signed_document_dto_collection_query_parameters_MAIN

void test_signed_document_dto_collection_query_parameters(int include_optional) {
    signed_document_dto_collection_query_parameters_t* signed_document_dto_collection_query_parameters_1 = instantiate_signed_document_dto_collection_query_parameters(include_optional);

	cJSON* jsonsigned_document_dto_collection_query_parameters_1 = signed_document_dto_collection_query_parameters_convertToJSON(signed_document_dto_collection_query_parameters_1);
	printf("signed_document_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsigned_document_dto_collection_query_parameters_1));
	signed_document_dto_collection_query_parameters_t* signed_document_dto_collection_query_parameters_2 = signed_document_dto_collection_query_parameters_parseFromJSON(jsonsigned_document_dto_collection_query_parameters_1);
	cJSON* jsonsigned_document_dto_collection_query_parameters_2 = signed_document_dto_collection_query_parameters_convertToJSON(signed_document_dto_collection_query_parameters_2);
	printf("repeating signed_document_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsigned_document_dto_collection_query_parameters_2));
}

int main() {
  test_signed_document_dto_collection_query_parameters(1);
  test_signed_document_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // signed_document_dto_collection_query_parameters_MAIN
#endif // signed_document_dto_collection_query_parameters_TEST
