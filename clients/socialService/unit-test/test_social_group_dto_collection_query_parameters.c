#ifndef social_group_dto_collection_query_parameters_TEST
#define social_group_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_group_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_group_dto_collection_query_parameters.h"
social_group_dto_collection_query_parameters_t* instantiate_social_group_dto_collection_query_parameters(int include_optional);



social_group_dto_collection_query_parameters_t* instantiate_social_group_dto_collection_query_parameters(int include_optional) {
  social_group_dto_collection_query_parameters_t* social_group_dto_collection_query_parameters = NULL;
  if (include_optional) {
    social_group_dto_collection_query_parameters = social_group_dto_collection_query_parameters_create(
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
    social_group_dto_collection_query_parameters = social_group_dto_collection_query_parameters_create(
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

  return social_group_dto_collection_query_parameters;
}


#ifdef social_group_dto_collection_query_parameters_MAIN

void test_social_group_dto_collection_query_parameters(int include_optional) {
    social_group_dto_collection_query_parameters_t* social_group_dto_collection_query_parameters_1 = instantiate_social_group_dto_collection_query_parameters(include_optional);

	cJSON* jsonsocial_group_dto_collection_query_parameters_1 = social_group_dto_collection_query_parameters_convertToJSON(social_group_dto_collection_query_parameters_1);
	printf("social_group_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsocial_group_dto_collection_query_parameters_1));
	social_group_dto_collection_query_parameters_t* social_group_dto_collection_query_parameters_2 = social_group_dto_collection_query_parameters_parseFromJSON(jsonsocial_group_dto_collection_query_parameters_1);
	cJSON* jsonsocial_group_dto_collection_query_parameters_2 = social_group_dto_collection_query_parameters_convertToJSON(social_group_dto_collection_query_parameters_2);
	printf("repeating social_group_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsocial_group_dto_collection_query_parameters_2));
}

int main() {
  test_social_group_dto_collection_query_parameters(1);
  test_social_group_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_group_dto_collection_query_parameters_MAIN
#endif // social_group_dto_collection_query_parameters_TEST
