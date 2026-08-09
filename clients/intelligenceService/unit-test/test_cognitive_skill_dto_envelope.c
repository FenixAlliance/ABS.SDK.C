#ifndef cognitive_skill_dto_envelope_TEST
#define cognitive_skill_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cognitive_skill_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cognitive_skill_dto_envelope.h"
cognitive_skill_dto_envelope_t* instantiate_cognitive_skill_dto_envelope(int include_optional);

#include "test_cognitive_skill_dto.c"


cognitive_skill_dto_envelope_t* instantiate_cognitive_skill_dto_envelope(int include_optional) {
  cognitive_skill_dto_envelope_t* cognitive_skill_dto_envelope = NULL;
  if (include_optional) {
    cognitive_skill_dto_envelope = cognitive_skill_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_cognitive_skill_dto(0)
    );
  } else {
    cognitive_skill_dto_envelope = cognitive_skill_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      NULL
    );
  }

  return cognitive_skill_dto_envelope;
}


#ifdef cognitive_skill_dto_envelope_MAIN

void test_cognitive_skill_dto_envelope(int include_optional) {
    cognitive_skill_dto_envelope_t* cognitive_skill_dto_envelope_1 = instantiate_cognitive_skill_dto_envelope(include_optional);

	cJSON* jsoncognitive_skill_dto_envelope_1 = cognitive_skill_dto_envelope_convertToJSON(cognitive_skill_dto_envelope_1);
	printf("cognitive_skill_dto_envelope :\n%s\n", cJSON_Print(jsoncognitive_skill_dto_envelope_1));
	cognitive_skill_dto_envelope_t* cognitive_skill_dto_envelope_2 = cognitive_skill_dto_envelope_parseFromJSON(jsoncognitive_skill_dto_envelope_1);
	cJSON* jsoncognitive_skill_dto_envelope_2 = cognitive_skill_dto_envelope_convertToJSON(cognitive_skill_dto_envelope_2);
	printf("repeating cognitive_skill_dto_envelope:\n%s\n", cJSON_Print(jsoncognitive_skill_dto_envelope_2));
}

int main() {
  test_cognitive_skill_dto_envelope(1);
  test_cognitive_skill_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // cognitive_skill_dto_envelope_MAIN
#endif // cognitive_skill_dto_envelope_TEST
