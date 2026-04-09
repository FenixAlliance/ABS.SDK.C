#ifndef project_hours_approval_status_update_dto_TEST
#define project_hours_approval_status_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_hours_approval_status_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_hours_approval_status_update_dto.h"
project_hours_approval_status_update_dto_t* instantiate_project_hours_approval_status_update_dto(int include_optional);



project_hours_approval_status_update_dto_t* instantiate_project_hours_approval_status_update_dto(int include_optional) {
  project_hours_approval_status_update_dto_t* project_hours_approval_status_update_dto = NULL;
  if (include_optional) {
    project_hours_approval_status_update_dto = project_hours_approval_status_update_dto_create(
      timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_Pending,
      "0"
    );
  } else {
    project_hours_approval_status_update_dto = project_hours_approval_status_update_dto_create(
      timetrackerservice_project_hours_approval_status_update_dto_APPROVALSTATUS_Pending,
      "0"
    );
  }

  return project_hours_approval_status_update_dto;
}


#ifdef project_hours_approval_status_update_dto_MAIN

void test_project_hours_approval_status_update_dto(int include_optional) {
    project_hours_approval_status_update_dto_t* project_hours_approval_status_update_dto_1 = instantiate_project_hours_approval_status_update_dto(include_optional);

	cJSON* jsonproject_hours_approval_status_update_dto_1 = project_hours_approval_status_update_dto_convertToJSON(project_hours_approval_status_update_dto_1);
	printf("project_hours_approval_status_update_dto :\n%s\n", cJSON_Print(jsonproject_hours_approval_status_update_dto_1));
	project_hours_approval_status_update_dto_t* project_hours_approval_status_update_dto_2 = project_hours_approval_status_update_dto_parseFromJSON(jsonproject_hours_approval_status_update_dto_1);
	cJSON* jsonproject_hours_approval_status_update_dto_2 = project_hours_approval_status_update_dto_convertToJSON(project_hours_approval_status_update_dto_2);
	printf("repeating project_hours_approval_status_update_dto:\n%s\n", cJSON_Print(jsonproject_hours_approval_status_update_dto_2));
}

int main() {
  test_project_hours_approval_status_update_dto(1);
  test_project_hours_approval_status_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_hours_approval_status_update_dto_MAIN
#endif // project_hours_approval_status_update_dto_TEST
