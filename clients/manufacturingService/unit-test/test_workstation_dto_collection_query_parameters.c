#ifndef workstation_dto_collection_query_parameters_TEST
#define workstation_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define workstation_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/workstation_dto_collection_query_parameters.h"
workstation_dto_collection_query_parameters_t* instantiate_workstation_dto_collection_query_parameters(int include_optional);



workstation_dto_collection_query_parameters_t* instantiate_workstation_dto_collection_query_parameters(int include_optional) {
  workstation_dto_collection_query_parameters_t* workstation_dto_collection_query_parameters = NULL;
  if (include_optional) {
    workstation_dto_collection_query_parameters = workstation_dto_collection_query_parameters_create(
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
    workstation_dto_collection_query_parameters = workstation_dto_collection_query_parameters_create(
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

  return workstation_dto_collection_query_parameters;
}


#ifdef workstation_dto_collection_query_parameters_MAIN

void test_workstation_dto_collection_query_parameters(int include_optional) {
    workstation_dto_collection_query_parameters_t* workstation_dto_collection_query_parameters_1 = instantiate_workstation_dto_collection_query_parameters(include_optional);

	cJSON* jsonworkstation_dto_collection_query_parameters_1 = workstation_dto_collection_query_parameters_convertToJSON(workstation_dto_collection_query_parameters_1);
	printf("workstation_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonworkstation_dto_collection_query_parameters_1));
	workstation_dto_collection_query_parameters_t* workstation_dto_collection_query_parameters_2 = workstation_dto_collection_query_parameters_parseFromJSON(jsonworkstation_dto_collection_query_parameters_1);
	cJSON* jsonworkstation_dto_collection_query_parameters_2 = workstation_dto_collection_query_parameters_convertToJSON(workstation_dto_collection_query_parameters_2);
	printf("repeating workstation_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonworkstation_dto_collection_query_parameters_2));
}

int main() {
  test_workstation_dto_collection_query_parameters(1);
  test_workstation_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // workstation_dto_collection_query_parameters_MAIN
#endif // workstation_dto_collection_query_parameters_TEST
