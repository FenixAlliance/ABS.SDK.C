#ifndef skill_update_dto_TEST
#define skill_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define skill_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/skill_update_dto.h"
skill_update_dto_t* instantiate_skill_update_dto(int include_optional);



skill_update_dto_t* instantiate_skill_update_dto(int include_optional) {
  skill_update_dto_t* skill_update_dto = NULL;
  if (include_optional) {
    skill_update_dto = skill_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      socialservice_skill_update_dto_SKILLTYPE_Skill
    );
  } else {
    skill_update_dto = skill_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      socialservice_skill_update_dto_SKILLTYPE_Skill
    );
  }

  return skill_update_dto;
}


#ifdef skill_update_dto_MAIN

void test_skill_update_dto(int include_optional) {
    skill_update_dto_t* skill_update_dto_1 = instantiate_skill_update_dto(include_optional);

	cJSON* jsonskill_update_dto_1 = skill_update_dto_convertToJSON(skill_update_dto_1);
	printf("skill_update_dto :\n%s\n", cJSON_Print(jsonskill_update_dto_1));
	skill_update_dto_t* skill_update_dto_2 = skill_update_dto_parseFromJSON(jsonskill_update_dto_1);
	cJSON* jsonskill_update_dto_2 = skill_update_dto_convertToJSON(skill_update_dto_2);
	printf("repeating skill_update_dto:\n%s\n", cJSON_Print(jsonskill_update_dto_2));
}

int main() {
  test_skill_update_dto(1);
  test_skill_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // skill_update_dto_MAIN
#endif // skill_update_dto_TEST
