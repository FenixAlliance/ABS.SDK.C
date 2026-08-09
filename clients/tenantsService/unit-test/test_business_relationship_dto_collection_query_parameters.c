#ifndef business_relationship_dto_collection_query_parameters_TEST
#define business_relationship_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_relationship_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_relationship_dto_collection_query_parameters.h"
business_relationship_dto_collection_query_parameters_t* instantiate_business_relationship_dto_collection_query_parameters(int include_optional);



business_relationship_dto_collection_query_parameters_t* instantiate_business_relationship_dto_collection_query_parameters(int include_optional) {
  business_relationship_dto_collection_query_parameters_t* business_relationship_dto_collection_query_parameters = NULL;
  if (include_optional) {
    business_relationship_dto_collection_query_parameters = business_relationship_dto_collection_query_parameters_create(
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
    business_relationship_dto_collection_query_parameters = business_relationship_dto_collection_query_parameters_create(
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

  return business_relationship_dto_collection_query_parameters;
}


#ifdef business_relationship_dto_collection_query_parameters_MAIN

void test_business_relationship_dto_collection_query_parameters(int include_optional) {
    business_relationship_dto_collection_query_parameters_t* business_relationship_dto_collection_query_parameters_1 = instantiate_business_relationship_dto_collection_query_parameters(include_optional);

	cJSON* jsonbusiness_relationship_dto_collection_query_parameters_1 = business_relationship_dto_collection_query_parameters_convertToJSON(business_relationship_dto_collection_query_parameters_1);
	printf("business_relationship_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonbusiness_relationship_dto_collection_query_parameters_1));
	business_relationship_dto_collection_query_parameters_t* business_relationship_dto_collection_query_parameters_2 = business_relationship_dto_collection_query_parameters_parseFromJSON(jsonbusiness_relationship_dto_collection_query_parameters_1);
	cJSON* jsonbusiness_relationship_dto_collection_query_parameters_2 = business_relationship_dto_collection_query_parameters_convertToJSON(business_relationship_dto_collection_query_parameters_2);
	printf("repeating business_relationship_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonbusiness_relationship_dto_collection_query_parameters_2));
}

int main() {
  test_business_relationship_dto_collection_query_parameters(1);
  test_business_relationship_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_relationship_dto_collection_query_parameters_MAIN
#endif // business_relationship_dto_collection_query_parameters_TEST
