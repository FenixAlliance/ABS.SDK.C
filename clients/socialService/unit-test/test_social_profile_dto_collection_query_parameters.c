#ifndef social_profile_dto_collection_query_parameters_TEST
#define social_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_profile_dto_collection_query_parameters.h"
social_profile_dto_collection_query_parameters_t* instantiate_social_profile_dto_collection_query_parameters(int include_optional);



social_profile_dto_collection_query_parameters_t* instantiate_social_profile_dto_collection_query_parameters(int include_optional) {
  social_profile_dto_collection_query_parameters_t* social_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    social_profile_dto_collection_query_parameters = social_profile_dto_collection_query_parameters_create(
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
    social_profile_dto_collection_query_parameters = social_profile_dto_collection_query_parameters_create(
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

  return social_profile_dto_collection_query_parameters;
}


#ifdef social_profile_dto_collection_query_parameters_MAIN

void test_social_profile_dto_collection_query_parameters(int include_optional) {
    social_profile_dto_collection_query_parameters_t* social_profile_dto_collection_query_parameters_1 = instantiate_social_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsonsocial_profile_dto_collection_query_parameters_1 = social_profile_dto_collection_query_parameters_convertToJSON(social_profile_dto_collection_query_parameters_1);
	printf("social_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsocial_profile_dto_collection_query_parameters_1));
	social_profile_dto_collection_query_parameters_t* social_profile_dto_collection_query_parameters_2 = social_profile_dto_collection_query_parameters_parseFromJSON(jsonsocial_profile_dto_collection_query_parameters_1);
	cJSON* jsonsocial_profile_dto_collection_query_parameters_2 = social_profile_dto_collection_query_parameters_convertToJSON(social_profile_dto_collection_query_parameters_2);
	printf("repeating social_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsocial_profile_dto_collection_query_parameters_2));
}

int main() {
  test_social_profile_dto_collection_query_parameters(1);
  test_social_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_profile_dto_collection_query_parameters_MAIN
#endif // social_profile_dto_collection_query_parameters_TEST
