#ifndef project_hours_approval_create_dto_TEST
#define project_hours_approval_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_hours_approval_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_hours_approval_create_dto.h"
project_hours_approval_create_dto_t* instantiate_project_hours_approval_create_dto(int include_optional);



project_hours_approval_create_dto_t* instantiate_project_hours_approval_create_dto(int include_optional) {
  project_hours_approval_create_dto_t* project_hours_approval_create_dto = NULL;
  if (include_optional) {
    project_hours_approval_create_dto = project_hours_approval_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    project_hours_approval_create_dto = project_hours_approval_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return project_hours_approval_create_dto;
}


#ifdef project_hours_approval_create_dto_MAIN

void test_project_hours_approval_create_dto(int include_optional) {
    project_hours_approval_create_dto_t* project_hours_approval_create_dto_1 = instantiate_project_hours_approval_create_dto(include_optional);

	cJSON* jsonproject_hours_approval_create_dto_1 = project_hours_approval_create_dto_convertToJSON(project_hours_approval_create_dto_1);
	printf("project_hours_approval_create_dto :\n%s\n", cJSON_Print(jsonproject_hours_approval_create_dto_1));
	project_hours_approval_create_dto_t* project_hours_approval_create_dto_2 = project_hours_approval_create_dto_parseFromJSON(jsonproject_hours_approval_create_dto_1);
	cJSON* jsonproject_hours_approval_create_dto_2 = project_hours_approval_create_dto_convertToJSON(project_hours_approval_create_dto_2);
	printf("repeating project_hours_approval_create_dto:\n%s\n", cJSON_Print(jsonproject_hours_approval_create_dto_2));
}

int main() {
  test_project_hours_approval_create_dto(1);
  test_project_hours_approval_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_hours_approval_create_dto_MAIN
#endif // project_hours_approval_create_dto_TEST
