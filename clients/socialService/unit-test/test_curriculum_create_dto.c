#ifndef curriculum_create_dto_TEST
#define curriculum_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define curriculum_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/curriculum_create_dto.h"
curriculum_create_dto_t* instantiate_curriculum_create_dto(int include_optional);



curriculum_create_dto_t* instantiate_curriculum_create_dto(int include_optional) {
  curriculum_create_dto_t* curriculum_create_dto = NULL;
  if (include_optional) {
    curriculum_create_dto = curriculum_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    curriculum_create_dto = curriculum_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return curriculum_create_dto;
}


#ifdef curriculum_create_dto_MAIN

void test_curriculum_create_dto(int include_optional) {
    curriculum_create_dto_t* curriculum_create_dto_1 = instantiate_curriculum_create_dto(include_optional);

	cJSON* jsoncurriculum_create_dto_1 = curriculum_create_dto_convertToJSON(curriculum_create_dto_1);
	printf("curriculum_create_dto :\n%s\n", cJSON_Print(jsoncurriculum_create_dto_1));
	curriculum_create_dto_t* curriculum_create_dto_2 = curriculum_create_dto_parseFromJSON(jsoncurriculum_create_dto_1);
	cJSON* jsoncurriculum_create_dto_2 = curriculum_create_dto_convertToJSON(curriculum_create_dto_2);
	printf("repeating curriculum_create_dto:\n%s\n", cJSON_Print(jsoncurriculum_create_dto_2));
}

int main() {
  test_curriculum_create_dto(1);
  test_curriculum_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // curriculum_create_dto_MAIN
#endif // curriculum_create_dto_TEST
