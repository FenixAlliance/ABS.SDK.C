#ifndef project_dto_envelope_TEST
#define project_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define project_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/project_dto_envelope.h"
project_dto_envelope_t* instantiate_project_dto_envelope(int include_optional);

#include "test_project_dto.c"


project_dto_envelope_t* instantiate_project_dto_envelope(int include_optional) {
  project_dto_envelope_t* project_dto_envelope = NULL;
  if (include_optional) {
    project_dto_envelope = project_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_project_dto(0)
    );
  } else {
    project_dto_envelope = project_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return project_dto_envelope;
}


#ifdef project_dto_envelope_MAIN

void test_project_dto_envelope(int include_optional) {
    project_dto_envelope_t* project_dto_envelope_1 = instantiate_project_dto_envelope(include_optional);

	cJSON* jsonproject_dto_envelope_1 = project_dto_envelope_convertToJSON(project_dto_envelope_1);
	printf("project_dto_envelope :\n%s\n", cJSON_Print(jsonproject_dto_envelope_1));
	project_dto_envelope_t* project_dto_envelope_2 = project_dto_envelope_parseFromJSON(jsonproject_dto_envelope_1);
	cJSON* jsonproject_dto_envelope_2 = project_dto_envelope_convertToJSON(project_dto_envelope_2);
	printf("repeating project_dto_envelope:\n%s\n", cJSON_Print(jsonproject_dto_envelope_2));
}

int main() {
  test_project_dto_envelope(1);
  test_project_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // project_dto_envelope_MAIN
#endif // project_dto_envelope_TEST
