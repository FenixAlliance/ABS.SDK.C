#ifndef cost_centre_group_dto_collection_query_parameters_TEST
#define cost_centre_group_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cost_centre_group_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cost_centre_group_dto_collection_query_parameters.h"
cost_centre_group_dto_collection_query_parameters_t* instantiate_cost_centre_group_dto_collection_query_parameters(int include_optional);



cost_centre_group_dto_collection_query_parameters_t* instantiate_cost_centre_group_dto_collection_query_parameters(int include_optional) {
  cost_centre_group_dto_collection_query_parameters_t* cost_centre_group_dto_collection_query_parameters = NULL;
  if (include_optional) {
    cost_centre_group_dto_collection_query_parameters = cost_centre_group_dto_collection_query_parameters_create(
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
    cost_centre_group_dto_collection_query_parameters = cost_centre_group_dto_collection_query_parameters_create(
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

  return cost_centre_group_dto_collection_query_parameters;
}


#ifdef cost_centre_group_dto_collection_query_parameters_MAIN

void test_cost_centre_group_dto_collection_query_parameters(int include_optional) {
    cost_centre_group_dto_collection_query_parameters_t* cost_centre_group_dto_collection_query_parameters_1 = instantiate_cost_centre_group_dto_collection_query_parameters(include_optional);

	cJSON* jsoncost_centre_group_dto_collection_query_parameters_1 = cost_centre_group_dto_collection_query_parameters_convertToJSON(cost_centre_group_dto_collection_query_parameters_1);
	printf("cost_centre_group_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncost_centre_group_dto_collection_query_parameters_1));
	cost_centre_group_dto_collection_query_parameters_t* cost_centre_group_dto_collection_query_parameters_2 = cost_centre_group_dto_collection_query_parameters_parseFromJSON(jsoncost_centre_group_dto_collection_query_parameters_1);
	cJSON* jsoncost_centre_group_dto_collection_query_parameters_2 = cost_centre_group_dto_collection_query_parameters_convertToJSON(cost_centre_group_dto_collection_query_parameters_2);
	printf("repeating cost_centre_group_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncost_centre_group_dto_collection_query_parameters_2));
}

int main() {
  test_cost_centre_group_dto_collection_query_parameters(1);
  test_cost_centre_group_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // cost_centre_group_dto_collection_query_parameters_MAIN
#endif // cost_centre_group_dto_collection_query_parameters_TEST
