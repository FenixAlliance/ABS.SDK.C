#ifndef skill_dto_list_envelope_TEST
#define skill_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define skill_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/skill_dto_list_envelope.h"
skill_dto_list_envelope_t* instantiate_skill_dto_list_envelope(int include_optional);



skill_dto_list_envelope_t* instantiate_skill_dto_list_envelope(int include_optional) {
  skill_dto_list_envelope_t* skill_dto_list_envelope = NULL;
  if (include_optional) {
    skill_dto_list_envelope = skill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    skill_dto_list_envelope = skill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return skill_dto_list_envelope;
}


#ifdef skill_dto_list_envelope_MAIN

void test_skill_dto_list_envelope(int include_optional) {
    skill_dto_list_envelope_t* skill_dto_list_envelope_1 = instantiate_skill_dto_list_envelope(include_optional);

	cJSON* jsonskill_dto_list_envelope_1 = skill_dto_list_envelope_convertToJSON(skill_dto_list_envelope_1);
	printf("skill_dto_list_envelope :\n%s\n", cJSON_Print(jsonskill_dto_list_envelope_1));
	skill_dto_list_envelope_t* skill_dto_list_envelope_2 = skill_dto_list_envelope_parseFromJSON(jsonskill_dto_list_envelope_1);
	cJSON* jsonskill_dto_list_envelope_2 = skill_dto_list_envelope_convertToJSON(skill_dto_list_envelope_2);
	printf("repeating skill_dto_list_envelope:\n%s\n", cJSON_Print(jsonskill_dto_list_envelope_2));
}

int main() {
  test_skill_dto_list_envelope(1);
  test_skill_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // skill_dto_list_envelope_MAIN
#endif // skill_dto_list_envelope_TEST
