#ifndef loan_application_dto_collection_query_parameters_TEST
#define loan_application_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loan_application_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loan_application_dto_collection_query_parameters.h"
loan_application_dto_collection_query_parameters_t* instantiate_loan_application_dto_collection_query_parameters(int include_optional);



loan_application_dto_collection_query_parameters_t* instantiate_loan_application_dto_collection_query_parameters(int include_optional) {
  loan_application_dto_collection_query_parameters_t* loan_application_dto_collection_query_parameters = NULL;
  if (include_optional) {
    loan_application_dto_collection_query_parameters = loan_application_dto_collection_query_parameters_create(
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
    loan_application_dto_collection_query_parameters = loan_application_dto_collection_query_parameters_create(
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

  return loan_application_dto_collection_query_parameters;
}


#ifdef loan_application_dto_collection_query_parameters_MAIN

void test_loan_application_dto_collection_query_parameters(int include_optional) {
    loan_application_dto_collection_query_parameters_t* loan_application_dto_collection_query_parameters_1 = instantiate_loan_application_dto_collection_query_parameters(include_optional);

	cJSON* jsonloan_application_dto_collection_query_parameters_1 = loan_application_dto_collection_query_parameters_convertToJSON(loan_application_dto_collection_query_parameters_1);
	printf("loan_application_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonloan_application_dto_collection_query_parameters_1));
	loan_application_dto_collection_query_parameters_t* loan_application_dto_collection_query_parameters_2 = loan_application_dto_collection_query_parameters_parseFromJSON(jsonloan_application_dto_collection_query_parameters_1);
	cJSON* jsonloan_application_dto_collection_query_parameters_2 = loan_application_dto_collection_query_parameters_convertToJSON(loan_application_dto_collection_query_parameters_2);
	printf("repeating loan_application_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonloan_application_dto_collection_query_parameters_2));
}

int main() {
  test_loan_application_dto_collection_query_parameters(1);
  test_loan_application_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // loan_application_dto_collection_query_parameters_MAIN
#endif // loan_application_dto_collection_query_parameters_TEST
