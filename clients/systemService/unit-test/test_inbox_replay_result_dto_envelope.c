#ifndef inbox_replay_result_dto_envelope_TEST
#define inbox_replay_result_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inbox_replay_result_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inbox_replay_result_dto_envelope.h"
inbox_replay_result_dto_envelope_t* instantiate_inbox_replay_result_dto_envelope(int include_optional);

#include "test_inbox_replay_result_dto.c"


inbox_replay_result_dto_envelope_t* instantiate_inbox_replay_result_dto_envelope(int include_optional) {
  inbox_replay_result_dto_envelope_t* inbox_replay_result_dto_envelope = NULL;
  if (include_optional) {
    inbox_replay_result_dto_envelope = inbox_replay_result_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_inbox_replay_result_dto(0)
    );
  } else {
    inbox_replay_result_dto_envelope = inbox_replay_result_dto_envelope_create(
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

  return inbox_replay_result_dto_envelope;
}


#ifdef inbox_replay_result_dto_envelope_MAIN

void test_inbox_replay_result_dto_envelope(int include_optional) {
    inbox_replay_result_dto_envelope_t* inbox_replay_result_dto_envelope_1 = instantiate_inbox_replay_result_dto_envelope(include_optional);

	cJSON* jsoninbox_replay_result_dto_envelope_1 = inbox_replay_result_dto_envelope_convertToJSON(inbox_replay_result_dto_envelope_1);
	printf("inbox_replay_result_dto_envelope :\n%s\n", cJSON_Print(jsoninbox_replay_result_dto_envelope_1));
	inbox_replay_result_dto_envelope_t* inbox_replay_result_dto_envelope_2 = inbox_replay_result_dto_envelope_parseFromJSON(jsoninbox_replay_result_dto_envelope_1);
	cJSON* jsoninbox_replay_result_dto_envelope_2 = inbox_replay_result_dto_envelope_convertToJSON(inbox_replay_result_dto_envelope_2);
	printf("repeating inbox_replay_result_dto_envelope:\n%s\n", cJSON_Print(jsoninbox_replay_result_dto_envelope_2));
}

int main() {
  test_inbox_replay_result_dto_envelope(1);
  test_inbox_replay_result_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // inbox_replay_result_dto_envelope_MAIN
#endif // inbox_replay_result_dto_envelope_TEST
