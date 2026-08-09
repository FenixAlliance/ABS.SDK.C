#ifndef production_plan_dto_collection_query_parameters_TEST
#define production_plan_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define production_plan_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/production_plan_dto_collection_query_parameters.h"
production_plan_dto_collection_query_parameters_t* instantiate_production_plan_dto_collection_query_parameters(int include_optional);



production_plan_dto_collection_query_parameters_t* instantiate_production_plan_dto_collection_query_parameters(int include_optional) {
  production_plan_dto_collection_query_parameters_t* production_plan_dto_collection_query_parameters = NULL;
  if (include_optional) {
    production_plan_dto_collection_query_parameters = production_plan_dto_collection_query_parameters_create(
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
    production_plan_dto_collection_query_parameters = production_plan_dto_collection_query_parameters_create(
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

  return production_plan_dto_collection_query_parameters;
}


#ifdef production_plan_dto_collection_query_parameters_MAIN

void test_production_plan_dto_collection_query_parameters(int include_optional) {
    production_plan_dto_collection_query_parameters_t* production_plan_dto_collection_query_parameters_1 = instantiate_production_plan_dto_collection_query_parameters(include_optional);

	cJSON* jsonproduction_plan_dto_collection_query_parameters_1 = production_plan_dto_collection_query_parameters_convertToJSON(production_plan_dto_collection_query_parameters_1);
	printf("production_plan_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonproduction_plan_dto_collection_query_parameters_1));
	production_plan_dto_collection_query_parameters_t* production_plan_dto_collection_query_parameters_2 = production_plan_dto_collection_query_parameters_parseFromJSON(jsonproduction_plan_dto_collection_query_parameters_1);
	cJSON* jsonproduction_plan_dto_collection_query_parameters_2 = production_plan_dto_collection_query_parameters_convertToJSON(production_plan_dto_collection_query_parameters_2);
	printf("repeating production_plan_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonproduction_plan_dto_collection_query_parameters_2));
}

int main() {
  test_production_plan_dto_collection_query_parameters(1);
  test_production_plan_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // production_plan_dto_collection_query_parameters_MAIN
#endif // production_plan_dto_collection_query_parameters_TEST
