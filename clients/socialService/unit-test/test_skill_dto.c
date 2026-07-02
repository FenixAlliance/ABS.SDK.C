#ifndef skill_dto_TEST
#define skill_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define skill_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/skill_dto.h"
skill_dto_t* instantiate_skill_dto(int include_optional);



skill_dto_t* instantiate_skill_dto(int include_optional) {
  skill_dto_t* skill_dto = NULL;
  if (include_optional) {
    skill_dto = skill_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      socialservice_skill_dto_SKILLTYPE_Skill,
      "0",
      "0"
    );
  } else {
    skill_dto = skill_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      socialservice_skill_dto_SKILLTYPE_Skill,
      "0",
      "0"
    );
  }

  return skill_dto;
}


#ifdef skill_dto_MAIN

void test_skill_dto(int include_optional) {
    skill_dto_t* skill_dto_1 = instantiate_skill_dto(include_optional);

	cJSON* jsonskill_dto_1 = skill_dto_convertToJSON(skill_dto_1);
	printf("skill_dto :\n%s\n", cJSON_Print(jsonskill_dto_1));
	skill_dto_t* skill_dto_2 = skill_dto_parseFromJSON(jsonskill_dto_1);
	cJSON* jsonskill_dto_2 = skill_dto_convertToJSON(skill_dto_2);
	printf("repeating skill_dto:\n%s\n", cJSON_Print(jsonskill_dto_2));
}

int main() {
  test_skill_dto(1);
  test_skill_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // skill_dto_MAIN
#endif // skill_dto_TEST
