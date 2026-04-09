#ifndef project_task_dto_TEST
#define project_task_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_task_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_task_dto.h"
project_task_dto_t* instantiate_project_task_dto(int include_optional);



project_task_dto_t* instantiate_project_task_dto(int include_optional) {
  project_task_dto_t* project_task_dto = NULL;
  if (include_optional) {
    project_task_dto = project_task_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    project_task_dto = project_task_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return project_task_dto;
}


#ifdef project_task_dto_MAIN

void test_project_task_dto(int include_optional) {
    project_task_dto_t* project_task_dto_1 = instantiate_project_task_dto(include_optional);

	cJSON* jsonproject_task_dto_1 = project_task_dto_convertToJSON(project_task_dto_1);
	printf("project_task_dto :\n%s\n", cJSON_Print(jsonproject_task_dto_1));
	project_task_dto_t* project_task_dto_2 = project_task_dto_parseFromJSON(jsonproject_task_dto_1);
	cJSON* jsonproject_task_dto_2 = project_task_dto_convertToJSON(project_task_dto_2);
	printf("repeating project_task_dto:\n%s\n", cJSON_Print(jsonproject_task_dto_2));
}

int main() {
  test_project_task_dto(1);
  test_project_task_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_task_dto_MAIN
#endif // project_task_dto_TEST
