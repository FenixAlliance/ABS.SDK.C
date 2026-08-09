#ifndef task_category_dto_collection_query_parameters_TEST
#define task_category_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define task_category_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/task_category_dto_collection_query_parameters.h"
task_category_dto_collection_query_parameters_t* instantiate_task_category_dto_collection_query_parameters(int include_optional);



task_category_dto_collection_query_parameters_t* instantiate_task_category_dto_collection_query_parameters(int include_optional) {
  task_category_dto_collection_query_parameters_t* task_category_dto_collection_query_parameters = NULL;
  if (include_optional) {
    task_category_dto_collection_query_parameters = task_category_dto_collection_query_parameters_create(
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
    task_category_dto_collection_query_parameters = task_category_dto_collection_query_parameters_create(
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

  return task_category_dto_collection_query_parameters;
}


#ifdef task_category_dto_collection_query_parameters_MAIN

void test_task_category_dto_collection_query_parameters(int include_optional) {
    task_category_dto_collection_query_parameters_t* task_category_dto_collection_query_parameters_1 = instantiate_task_category_dto_collection_query_parameters(include_optional);

	cJSON* jsontask_category_dto_collection_query_parameters_1 = task_category_dto_collection_query_parameters_convertToJSON(task_category_dto_collection_query_parameters_1);
	printf("task_category_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontask_category_dto_collection_query_parameters_1));
	task_category_dto_collection_query_parameters_t* task_category_dto_collection_query_parameters_2 = task_category_dto_collection_query_parameters_parseFromJSON(jsontask_category_dto_collection_query_parameters_1);
	cJSON* jsontask_category_dto_collection_query_parameters_2 = task_category_dto_collection_query_parameters_convertToJSON(task_category_dto_collection_query_parameters_2);
	printf("repeating task_category_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontask_category_dto_collection_query_parameters_2));
}

int main() {
  test_task_category_dto_collection_query_parameters(1);
  test_task_category_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // task_category_dto_collection_query_parameters_MAIN
#endif // task_category_dto_collection_query_parameters_TEST
