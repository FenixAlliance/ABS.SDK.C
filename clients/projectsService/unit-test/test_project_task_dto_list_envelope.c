#ifndef project_task_dto_list_envelope_TEST
#define project_task_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_task_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_task_dto_list_envelope.h"
project_task_dto_list_envelope_t* instantiate_project_task_dto_list_envelope(int include_optional);



project_task_dto_list_envelope_t* instantiate_project_task_dto_list_envelope(int include_optional) {
  project_task_dto_list_envelope_t* project_task_dto_list_envelope = NULL;
  if (include_optional) {
    project_task_dto_list_envelope = project_task_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    project_task_dto_list_envelope = project_task_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return project_task_dto_list_envelope;
}


#ifdef project_task_dto_list_envelope_MAIN

void test_project_task_dto_list_envelope(int include_optional) {
    project_task_dto_list_envelope_t* project_task_dto_list_envelope_1 = instantiate_project_task_dto_list_envelope(include_optional);

	cJSON* jsonproject_task_dto_list_envelope_1 = project_task_dto_list_envelope_convertToJSON(project_task_dto_list_envelope_1);
	printf("project_task_dto_list_envelope :\n%s\n", cJSON_Print(jsonproject_task_dto_list_envelope_1));
	project_task_dto_list_envelope_t* project_task_dto_list_envelope_2 = project_task_dto_list_envelope_parseFromJSON(jsonproject_task_dto_list_envelope_1);
	cJSON* jsonproject_task_dto_list_envelope_2 = project_task_dto_list_envelope_convertToJSON(project_task_dto_list_envelope_2);
	printf("repeating project_task_dto_list_envelope:\n%s\n", cJSON_Print(jsonproject_task_dto_list_envelope_2));
}

int main() {
  test_project_task_dto_list_envelope(1);
  test_project_task_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_task_dto_list_envelope_MAIN
#endif // project_task_dto_list_envelope_TEST
