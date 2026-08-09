#ifndef project_time_log_dto_collection_query_parameters_TEST
#define project_time_log_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_time_log_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_time_log_dto_collection_query_parameters.h"
project_time_log_dto_collection_query_parameters_t* instantiate_project_time_log_dto_collection_query_parameters(int include_optional);



project_time_log_dto_collection_query_parameters_t* instantiate_project_time_log_dto_collection_query_parameters(int include_optional) {
  project_time_log_dto_collection_query_parameters_t* project_time_log_dto_collection_query_parameters = NULL;
  if (include_optional) {
    project_time_log_dto_collection_query_parameters = project_time_log_dto_collection_query_parameters_create(
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
    project_time_log_dto_collection_query_parameters = project_time_log_dto_collection_query_parameters_create(
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

  return project_time_log_dto_collection_query_parameters;
}


#ifdef project_time_log_dto_collection_query_parameters_MAIN

void test_project_time_log_dto_collection_query_parameters(int include_optional) {
    project_time_log_dto_collection_query_parameters_t* project_time_log_dto_collection_query_parameters_1 = instantiate_project_time_log_dto_collection_query_parameters(include_optional);

	cJSON* jsonproject_time_log_dto_collection_query_parameters_1 = project_time_log_dto_collection_query_parameters_convertToJSON(project_time_log_dto_collection_query_parameters_1);
	printf("project_time_log_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonproject_time_log_dto_collection_query_parameters_1));
	project_time_log_dto_collection_query_parameters_t* project_time_log_dto_collection_query_parameters_2 = project_time_log_dto_collection_query_parameters_parseFromJSON(jsonproject_time_log_dto_collection_query_parameters_1);
	cJSON* jsonproject_time_log_dto_collection_query_parameters_2 = project_time_log_dto_collection_query_parameters_convertToJSON(project_time_log_dto_collection_query_parameters_2);
	printf("repeating project_time_log_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonproject_time_log_dto_collection_query_parameters_2));
}

int main() {
  test_project_time_log_dto_collection_query_parameters(1);
  test_project_time_log_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_time_log_dto_collection_query_parameters_MAIN
#endif // project_time_log_dto_collection_query_parameters_TEST
