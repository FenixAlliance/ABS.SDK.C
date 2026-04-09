#ifndef project_period_update_dto_TEST
#define project_period_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_period_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_period_update_dto.h"
project_period_update_dto_t* instantiate_project_period_update_dto(int include_optional);



project_period_update_dto_t* instantiate_project_period_update_dto(int include_optional) {
  project_period_update_dto_t* project_period_update_dto = NULL;
  if (include_optional) {
    project_period_update_dto = project_period_update_dto_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    project_period_update_dto = project_period_update_dto_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return project_period_update_dto;
}


#ifdef project_period_update_dto_MAIN

void test_project_period_update_dto(int include_optional) {
    project_period_update_dto_t* project_period_update_dto_1 = instantiate_project_period_update_dto(include_optional);

	cJSON* jsonproject_period_update_dto_1 = project_period_update_dto_convertToJSON(project_period_update_dto_1);
	printf("project_period_update_dto :\n%s\n", cJSON_Print(jsonproject_period_update_dto_1));
	project_period_update_dto_t* project_period_update_dto_2 = project_period_update_dto_parseFromJSON(jsonproject_period_update_dto_1);
	cJSON* jsonproject_period_update_dto_2 = project_period_update_dto_convertToJSON(project_period_update_dto_2);
	printf("repeating project_period_update_dto:\n%s\n", cJSON_Print(jsonproject_period_update_dto_2));
}

int main() {
  test_project_period_update_dto(1);
  test_project_period_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_period_update_dto_MAIN
#endif // project_period_update_dto_TEST
