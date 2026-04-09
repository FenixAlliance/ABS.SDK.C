#ifndef task_category_create_dto_TEST
#define task_category_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define task_category_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/task_category_create_dto.h"
task_category_create_dto_t* instantiate_task_category_create_dto(int include_optional);



task_category_create_dto_t* instantiate_task_category_create_dto(int include_optional) {
  task_category_create_dto_t* task_category_create_dto = NULL;
  if (include_optional) {
    task_category_create_dto = task_category_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    task_category_create_dto = task_category_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return task_category_create_dto;
}


#ifdef task_category_create_dto_MAIN

void test_task_category_create_dto(int include_optional) {
    task_category_create_dto_t* task_category_create_dto_1 = instantiate_task_category_create_dto(include_optional);

	cJSON* jsontask_category_create_dto_1 = task_category_create_dto_convertToJSON(task_category_create_dto_1);
	printf("task_category_create_dto :\n%s\n", cJSON_Print(jsontask_category_create_dto_1));
	task_category_create_dto_t* task_category_create_dto_2 = task_category_create_dto_parseFromJSON(jsontask_category_create_dto_1);
	cJSON* jsontask_category_create_dto_2 = task_category_create_dto_convertToJSON(task_category_create_dto_2);
	printf("repeating task_category_create_dto:\n%s\n", cJSON_Print(jsontask_category_create_dto_2));
}

int main() {
  test_task_category_create_dto(1);
  test_task_category_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // task_category_create_dto_MAIN
#endif // task_category_create_dto_TEST
