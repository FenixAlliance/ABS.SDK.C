#ifndef project_dto_collection_query_parameters_TEST
#define project_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_dto_collection_query_parameters.h"
project_dto_collection_query_parameters_t* instantiate_project_dto_collection_query_parameters(int include_optional);



project_dto_collection_query_parameters_t* instantiate_project_dto_collection_query_parameters(int include_optional) {
  project_dto_collection_query_parameters_t* project_dto_collection_query_parameters = NULL;
  if (include_optional) {
    project_dto_collection_query_parameters = project_dto_collection_query_parameters_create(
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
    project_dto_collection_query_parameters = project_dto_collection_query_parameters_create(
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

  return project_dto_collection_query_parameters;
}


#ifdef project_dto_collection_query_parameters_MAIN

void test_project_dto_collection_query_parameters(int include_optional) {
    project_dto_collection_query_parameters_t* project_dto_collection_query_parameters_1 = instantiate_project_dto_collection_query_parameters(include_optional);

	cJSON* jsonproject_dto_collection_query_parameters_1 = project_dto_collection_query_parameters_convertToJSON(project_dto_collection_query_parameters_1);
	printf("project_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonproject_dto_collection_query_parameters_1));
	project_dto_collection_query_parameters_t* project_dto_collection_query_parameters_2 = project_dto_collection_query_parameters_parseFromJSON(jsonproject_dto_collection_query_parameters_1);
	cJSON* jsonproject_dto_collection_query_parameters_2 = project_dto_collection_query_parameters_convertToJSON(project_dto_collection_query_parameters_2);
	printf("repeating project_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonproject_dto_collection_query_parameters_2));
}

int main() {
  test_project_dto_collection_query_parameters(1);
  test_project_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_dto_collection_query_parameters_MAIN
#endif // project_dto_collection_query_parameters_TEST
