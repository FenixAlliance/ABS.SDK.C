#ifndef employer_profile_dto_collection_query_parameters_TEST
#define employer_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employer_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employer_profile_dto_collection_query_parameters.h"
employer_profile_dto_collection_query_parameters_t* instantiate_employer_profile_dto_collection_query_parameters(int include_optional);



employer_profile_dto_collection_query_parameters_t* instantiate_employer_profile_dto_collection_query_parameters(int include_optional) {
  employer_profile_dto_collection_query_parameters_t* employer_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    employer_profile_dto_collection_query_parameters = employer_profile_dto_collection_query_parameters_create(
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
    employer_profile_dto_collection_query_parameters = employer_profile_dto_collection_query_parameters_create(
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

  return employer_profile_dto_collection_query_parameters;
}


#ifdef employer_profile_dto_collection_query_parameters_MAIN

void test_employer_profile_dto_collection_query_parameters(int include_optional) {
    employer_profile_dto_collection_query_parameters_t* employer_profile_dto_collection_query_parameters_1 = instantiate_employer_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsonemployer_profile_dto_collection_query_parameters_1 = employer_profile_dto_collection_query_parameters_convertToJSON(employer_profile_dto_collection_query_parameters_1);
	printf("employer_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonemployer_profile_dto_collection_query_parameters_1));
	employer_profile_dto_collection_query_parameters_t* employer_profile_dto_collection_query_parameters_2 = employer_profile_dto_collection_query_parameters_parseFromJSON(jsonemployer_profile_dto_collection_query_parameters_1);
	cJSON* jsonemployer_profile_dto_collection_query_parameters_2 = employer_profile_dto_collection_query_parameters_convertToJSON(employer_profile_dto_collection_query_parameters_2);
	printf("repeating employer_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonemployer_profile_dto_collection_query_parameters_2));
}

int main() {
  test_employer_profile_dto_collection_query_parameters(1);
  test_employer_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // employer_profile_dto_collection_query_parameters_MAIN
#endif // employer_profile_dto_collection_query_parameters_TEST
