#ifndef cognitive_agent_dto_list_envelope_TEST
#define cognitive_agent_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cognitive_agent_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cognitive_agent_dto_list_envelope.h"
cognitive_agent_dto_list_envelope_t* instantiate_cognitive_agent_dto_list_envelope(int include_optional);



cognitive_agent_dto_list_envelope_t* instantiate_cognitive_agent_dto_list_envelope(int include_optional) {
  cognitive_agent_dto_list_envelope_t* cognitive_agent_dto_list_envelope = NULL;
  if (include_optional) {
    cognitive_agent_dto_list_envelope = cognitive_agent_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  } else {
    cognitive_agent_dto_list_envelope = cognitive_agent_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  }

  return cognitive_agent_dto_list_envelope;
}


#ifdef cognitive_agent_dto_list_envelope_MAIN

void test_cognitive_agent_dto_list_envelope(int include_optional) {
    cognitive_agent_dto_list_envelope_t* cognitive_agent_dto_list_envelope_1 = instantiate_cognitive_agent_dto_list_envelope(include_optional);

	cJSON* jsoncognitive_agent_dto_list_envelope_1 = cognitive_agent_dto_list_envelope_convertToJSON(cognitive_agent_dto_list_envelope_1);
	printf("cognitive_agent_dto_list_envelope :\n%s\n", cJSON_Print(jsoncognitive_agent_dto_list_envelope_1));
	cognitive_agent_dto_list_envelope_t* cognitive_agent_dto_list_envelope_2 = cognitive_agent_dto_list_envelope_parseFromJSON(jsoncognitive_agent_dto_list_envelope_1);
	cJSON* jsoncognitive_agent_dto_list_envelope_2 = cognitive_agent_dto_list_envelope_convertToJSON(cognitive_agent_dto_list_envelope_2);
	printf("repeating cognitive_agent_dto_list_envelope:\n%s\n", cJSON_Print(jsoncognitive_agent_dto_list_envelope_2));
}

int main() {
  test_cognitive_agent_dto_list_envelope(1);
  test_cognitive_agent_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // cognitive_agent_dto_list_envelope_MAIN
#endif // cognitive_agent_dto_list_envelope_TEST
