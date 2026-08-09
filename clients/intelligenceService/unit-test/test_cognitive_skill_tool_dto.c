#ifndef cognitive_skill_tool_dto_TEST
#define cognitive_skill_tool_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cognitive_skill_tool_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cognitive_skill_tool_dto.h"
cognitive_skill_tool_dto_t* instantiate_cognitive_skill_tool_dto(int include_optional);



cognitive_skill_tool_dto_t* instantiate_cognitive_skill_tool_dto(int include_optional) {
  cognitive_skill_tool_dto_t* cognitive_skill_tool_dto = NULL;
  if (include_optional) {
    cognitive_skill_tool_dto = cognitive_skill_tool_dto_create(
      "0",
      "0",
      1
    );
  } else {
    cognitive_skill_tool_dto = cognitive_skill_tool_dto_create(
      "0",
      "0",
      1
    );
  }

  return cognitive_skill_tool_dto;
}


#ifdef cognitive_skill_tool_dto_MAIN

void test_cognitive_skill_tool_dto(int include_optional) {
    cognitive_skill_tool_dto_t* cognitive_skill_tool_dto_1 = instantiate_cognitive_skill_tool_dto(include_optional);

	cJSON* jsoncognitive_skill_tool_dto_1 = cognitive_skill_tool_dto_convertToJSON(cognitive_skill_tool_dto_1);
	printf("cognitive_skill_tool_dto :\n%s\n", cJSON_Print(jsoncognitive_skill_tool_dto_1));
	cognitive_skill_tool_dto_t* cognitive_skill_tool_dto_2 = cognitive_skill_tool_dto_parseFromJSON(jsoncognitive_skill_tool_dto_1);
	cJSON* jsoncognitive_skill_tool_dto_2 = cognitive_skill_tool_dto_convertToJSON(cognitive_skill_tool_dto_2);
	printf("repeating cognitive_skill_tool_dto:\n%s\n", cJSON_Print(jsoncognitive_skill_tool_dto_2));
}

int main() {
  test_cognitive_skill_tool_dto(1);
  test_cognitive_skill_tool_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // cognitive_skill_tool_dto_MAIN
#endif // cognitive_skill_tool_dto_TEST
