#ifndef inbox_replay_result_dto_TEST
#define inbox_replay_result_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inbox_replay_result_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inbox_replay_result_dto.h"
inbox_replay_result_dto_t* instantiate_inbox_replay_result_dto(int include_optional);



inbox_replay_result_dto_t* instantiate_inbox_replay_result_dto(int include_optional) {
  inbox_replay_result_dto_t* inbox_replay_result_dto = NULL;
  if (include_optional) {
    inbox_replay_result_dto = inbox_replay_result_dto_create(
      "0",
      "0",
      56
    );
  } else {
    inbox_replay_result_dto = inbox_replay_result_dto_create(
      "0",
      "0",
      56
    );
  }

  return inbox_replay_result_dto;
}


#ifdef inbox_replay_result_dto_MAIN

void test_inbox_replay_result_dto(int include_optional) {
    inbox_replay_result_dto_t* inbox_replay_result_dto_1 = instantiate_inbox_replay_result_dto(include_optional);

	cJSON* jsoninbox_replay_result_dto_1 = inbox_replay_result_dto_convertToJSON(inbox_replay_result_dto_1);
	printf("inbox_replay_result_dto :\n%s\n", cJSON_Print(jsoninbox_replay_result_dto_1));
	inbox_replay_result_dto_t* inbox_replay_result_dto_2 = inbox_replay_result_dto_parseFromJSON(jsoninbox_replay_result_dto_1);
	cJSON* jsoninbox_replay_result_dto_2 = inbox_replay_result_dto_convertToJSON(inbox_replay_result_dto_2);
	printf("repeating inbox_replay_result_dto:\n%s\n", cJSON_Print(jsoninbox_replay_result_dto_2));
}

int main() {
  test_inbox_replay_result_dto(1);
  test_inbox_replay_result_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // inbox_replay_result_dto_MAIN
#endif // inbox_replay_result_dto_TEST
