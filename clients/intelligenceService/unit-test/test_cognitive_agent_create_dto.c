#ifndef cognitive_agent_create_dto_TEST
#define cognitive_agent_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cognitive_agent_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cognitive_agent_create_dto.h"
cognitive_agent_create_dto_t* instantiate_cognitive_agent_create_dto(int include_optional);



cognitive_agent_create_dto_t* instantiate_cognitive_agent_create_dto(int include_optional) {
  cognitive_agent_create_dto_t* cognitive_agent_create_dto = NULL;
  if (include_optional) {
    cognitive_agent_create_dto = cognitive_agent_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    cognitive_agent_create_dto = cognitive_agent_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return cognitive_agent_create_dto;
}


#ifdef cognitive_agent_create_dto_MAIN

void test_cognitive_agent_create_dto(int include_optional) {
    cognitive_agent_create_dto_t* cognitive_agent_create_dto_1 = instantiate_cognitive_agent_create_dto(include_optional);

	cJSON* jsoncognitive_agent_create_dto_1 = cognitive_agent_create_dto_convertToJSON(cognitive_agent_create_dto_1);
	printf("cognitive_agent_create_dto :\n%s\n", cJSON_Print(jsoncognitive_agent_create_dto_1));
	cognitive_agent_create_dto_t* cognitive_agent_create_dto_2 = cognitive_agent_create_dto_parseFromJSON(jsoncognitive_agent_create_dto_1);
	cJSON* jsoncognitive_agent_create_dto_2 = cognitive_agent_create_dto_convertToJSON(cognitive_agent_create_dto_2);
	printf("repeating cognitive_agent_create_dto:\n%s\n", cJSON_Print(jsoncognitive_agent_create_dto_2));
}

int main() {
  test_cognitive_agent_create_dto(1);
  test_cognitive_agent_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // cognitive_agent_create_dto_MAIN
#endif // cognitive_agent_create_dto_TEST
