#ifndef skill_create_dto_TEST
#define skill_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define skill_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/skill_create_dto.h"
skill_create_dto_t* instantiate_skill_create_dto(int include_optional);



skill_create_dto_t* instantiate_skill_create_dto(int include_optional) {
  skill_create_dto_t* skill_create_dto = NULL;
  if (include_optional) {
    skill_create_dto = skill_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      socialservice_skill_create_dto_SKILLTYPE_Skill
    );
  } else {
    skill_create_dto = skill_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      socialservice_skill_create_dto_SKILLTYPE_Skill
    );
  }

  return skill_create_dto;
}


#ifdef skill_create_dto_MAIN

void test_skill_create_dto(int include_optional) {
    skill_create_dto_t* skill_create_dto_1 = instantiate_skill_create_dto(include_optional);

	cJSON* jsonskill_create_dto_1 = skill_create_dto_convertToJSON(skill_create_dto_1);
	printf("skill_create_dto :\n%s\n", cJSON_Print(jsonskill_create_dto_1));
	skill_create_dto_t* skill_create_dto_2 = skill_create_dto_parseFromJSON(jsonskill_create_dto_1);
	cJSON* jsonskill_create_dto_2 = skill_create_dto_convertToJSON(skill_create_dto_2);
	printf("repeating skill_create_dto:\n%s\n", cJSON_Print(jsonskill_create_dto_2));
}

int main() {
  test_skill_create_dto(1);
  test_skill_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // skill_create_dto_MAIN
#endif // skill_create_dto_TEST
