#ifndef billing_profile_dto_collection_query_parameters_TEST
#define billing_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_profile_dto_collection_query_parameters.h"
billing_profile_dto_collection_query_parameters_t* instantiate_billing_profile_dto_collection_query_parameters(int include_optional);



billing_profile_dto_collection_query_parameters_t* instantiate_billing_profile_dto_collection_query_parameters(int include_optional) {
  billing_profile_dto_collection_query_parameters_t* billing_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    billing_profile_dto_collection_query_parameters = billing_profile_dto_collection_query_parameters_create(
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
    billing_profile_dto_collection_query_parameters = billing_profile_dto_collection_query_parameters_create(
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

  return billing_profile_dto_collection_query_parameters;
}


#ifdef billing_profile_dto_collection_query_parameters_MAIN

void test_billing_profile_dto_collection_query_parameters(int include_optional) {
    billing_profile_dto_collection_query_parameters_t* billing_profile_dto_collection_query_parameters_1 = instantiate_billing_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsonbilling_profile_dto_collection_query_parameters_1 = billing_profile_dto_collection_query_parameters_convertToJSON(billing_profile_dto_collection_query_parameters_1);
	printf("billing_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonbilling_profile_dto_collection_query_parameters_1));
	billing_profile_dto_collection_query_parameters_t* billing_profile_dto_collection_query_parameters_2 = billing_profile_dto_collection_query_parameters_parseFromJSON(jsonbilling_profile_dto_collection_query_parameters_1);
	cJSON* jsonbilling_profile_dto_collection_query_parameters_2 = billing_profile_dto_collection_query_parameters_convertToJSON(billing_profile_dto_collection_query_parameters_2);
	printf("repeating billing_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonbilling_profile_dto_collection_query_parameters_2));
}

int main() {
  test_billing_profile_dto_collection_query_parameters(1);
  test_billing_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_profile_dto_collection_query_parameters_MAIN
#endif // billing_profile_dto_collection_query_parameters_TEST
