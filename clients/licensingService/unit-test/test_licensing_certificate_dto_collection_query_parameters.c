#ifndef licensing_certificate_dto_collection_query_parameters_TEST
#define licensing_certificate_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licensing_certificate_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licensing_certificate_dto_collection_query_parameters.h"
licensing_certificate_dto_collection_query_parameters_t* instantiate_licensing_certificate_dto_collection_query_parameters(int include_optional);



licensing_certificate_dto_collection_query_parameters_t* instantiate_licensing_certificate_dto_collection_query_parameters(int include_optional) {
  licensing_certificate_dto_collection_query_parameters_t* licensing_certificate_dto_collection_query_parameters = NULL;
  if (include_optional) {
    licensing_certificate_dto_collection_query_parameters = licensing_certificate_dto_collection_query_parameters_create(
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
    licensing_certificate_dto_collection_query_parameters = licensing_certificate_dto_collection_query_parameters_create(
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

  return licensing_certificate_dto_collection_query_parameters;
}


#ifdef licensing_certificate_dto_collection_query_parameters_MAIN

void test_licensing_certificate_dto_collection_query_parameters(int include_optional) {
    licensing_certificate_dto_collection_query_parameters_t* licensing_certificate_dto_collection_query_parameters_1 = instantiate_licensing_certificate_dto_collection_query_parameters(include_optional);

	cJSON* jsonlicensing_certificate_dto_collection_query_parameters_1 = licensing_certificate_dto_collection_query_parameters_convertToJSON(licensing_certificate_dto_collection_query_parameters_1);
	printf("licensing_certificate_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonlicensing_certificate_dto_collection_query_parameters_1));
	licensing_certificate_dto_collection_query_parameters_t* licensing_certificate_dto_collection_query_parameters_2 = licensing_certificate_dto_collection_query_parameters_parseFromJSON(jsonlicensing_certificate_dto_collection_query_parameters_1);
	cJSON* jsonlicensing_certificate_dto_collection_query_parameters_2 = licensing_certificate_dto_collection_query_parameters_convertToJSON(licensing_certificate_dto_collection_query_parameters_2);
	printf("repeating licensing_certificate_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonlicensing_certificate_dto_collection_query_parameters_2));
}

int main() {
  test_licensing_certificate_dto_collection_query_parameters(1);
  test_licensing_certificate_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // licensing_certificate_dto_collection_query_parameters_MAIN
#endif // licensing_certificate_dto_collection_query_parameters_TEST
