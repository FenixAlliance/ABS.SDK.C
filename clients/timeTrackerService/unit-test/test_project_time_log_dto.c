#ifndef project_time_log_dto_TEST
#define project_time_log_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_time_log_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_time_log_dto.h"
project_time_log_dto_t* instantiate_project_time_log_dto(int include_optional);



project_time_log_dto_t* instantiate_project_time_log_dto(int include_optional) {
  project_time_log_dto_t* project_time_log_dto = NULL;
  if (include_optional) {
    project_time_log_dto = project_time_log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      timetrackerservice_project_time_log_dto_RECORDTYPE_RegularHours,
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    project_time_log_dto = project_time_log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      timetrackerservice_project_time_log_dto_RECORDTYPE_RegularHours,
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return project_time_log_dto;
}


#ifdef project_time_log_dto_MAIN

void test_project_time_log_dto(int include_optional) {
    project_time_log_dto_t* project_time_log_dto_1 = instantiate_project_time_log_dto(include_optional);

	cJSON* jsonproject_time_log_dto_1 = project_time_log_dto_convertToJSON(project_time_log_dto_1);
	printf("project_time_log_dto :\n%s\n", cJSON_Print(jsonproject_time_log_dto_1));
	project_time_log_dto_t* project_time_log_dto_2 = project_time_log_dto_parseFromJSON(jsonproject_time_log_dto_1);
	cJSON* jsonproject_time_log_dto_2 = project_time_log_dto_convertToJSON(project_time_log_dto_2);
	printf("repeating project_time_log_dto:\n%s\n", cJSON_Print(jsonproject_time_log_dto_2));
}

int main() {
  test_project_time_log_dto(1);
  test_project_time_log_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_time_log_dto_MAIN
#endif // project_time_log_dto_TEST
