#ifndef curriculum_experience_dto_envelope_TEST
#define curriculum_experience_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define curriculum_experience_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/curriculum_experience_dto_envelope.h"
curriculum_experience_dto_envelope_t* instantiate_curriculum_experience_dto_envelope(int include_optional);

#include "test_curriculum_experience_dto.c"


curriculum_experience_dto_envelope_t* instantiate_curriculum_experience_dto_envelope(int include_optional) {
  curriculum_experience_dto_envelope_t* curriculum_experience_dto_envelope = NULL;
  if (include_optional) {
    curriculum_experience_dto_envelope = curriculum_experience_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_curriculum_experience_dto(0)
    );
  } else {
    curriculum_experience_dto_envelope = curriculum_experience_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return curriculum_experience_dto_envelope;
}


#ifdef curriculum_experience_dto_envelope_MAIN

void test_curriculum_experience_dto_envelope(int include_optional) {
    curriculum_experience_dto_envelope_t* curriculum_experience_dto_envelope_1 = instantiate_curriculum_experience_dto_envelope(include_optional);

	cJSON* jsoncurriculum_experience_dto_envelope_1 = curriculum_experience_dto_envelope_convertToJSON(curriculum_experience_dto_envelope_1);
	printf("curriculum_experience_dto_envelope :\n%s\n", cJSON_Print(jsoncurriculum_experience_dto_envelope_1));
	curriculum_experience_dto_envelope_t* curriculum_experience_dto_envelope_2 = curriculum_experience_dto_envelope_parseFromJSON(jsoncurriculum_experience_dto_envelope_1);
	cJSON* jsoncurriculum_experience_dto_envelope_2 = curriculum_experience_dto_envelope_convertToJSON(curriculum_experience_dto_envelope_2);
	printf("repeating curriculum_experience_dto_envelope:\n%s\n", cJSON_Print(jsoncurriculum_experience_dto_envelope_2));
}

int main() {
  test_curriculum_experience_dto_envelope(1);
  test_curriculum_experience_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // curriculum_experience_dto_envelope_MAIN
#endif // curriculum_experience_dto_envelope_TEST
