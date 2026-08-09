#ifndef inbox_message_dto_i_read_only_list_envelope_TEST
#define inbox_message_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inbox_message_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inbox_message_dto_i_read_only_list_envelope.h"
inbox_message_dto_i_read_only_list_envelope_t* instantiate_inbox_message_dto_i_read_only_list_envelope(int include_optional);



inbox_message_dto_i_read_only_list_envelope_t* instantiate_inbox_message_dto_i_read_only_list_envelope(int include_optional) {
  inbox_message_dto_i_read_only_list_envelope_t* inbox_message_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    inbox_message_dto_i_read_only_list_envelope = inbox_message_dto_i_read_only_list_envelope_create(
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
    inbox_message_dto_i_read_only_list_envelope = inbox_message_dto_i_read_only_list_envelope_create(
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

  return inbox_message_dto_i_read_only_list_envelope;
}


#ifdef inbox_message_dto_i_read_only_list_envelope_MAIN

void test_inbox_message_dto_i_read_only_list_envelope(int include_optional) {
    inbox_message_dto_i_read_only_list_envelope_t* inbox_message_dto_i_read_only_list_envelope_1 = instantiate_inbox_message_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsoninbox_message_dto_i_read_only_list_envelope_1 = inbox_message_dto_i_read_only_list_envelope_convertToJSON(inbox_message_dto_i_read_only_list_envelope_1);
	printf("inbox_message_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsoninbox_message_dto_i_read_only_list_envelope_1));
	inbox_message_dto_i_read_only_list_envelope_t* inbox_message_dto_i_read_only_list_envelope_2 = inbox_message_dto_i_read_only_list_envelope_parseFromJSON(jsoninbox_message_dto_i_read_only_list_envelope_1);
	cJSON* jsoninbox_message_dto_i_read_only_list_envelope_2 = inbox_message_dto_i_read_only_list_envelope_convertToJSON(inbox_message_dto_i_read_only_list_envelope_2);
	printf("repeating inbox_message_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsoninbox_message_dto_i_read_only_list_envelope_2));
}

int main() {
  test_inbox_message_dto_i_read_only_list_envelope(1);
  test_inbox_message_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // inbox_message_dto_i_read_only_list_envelope_MAIN
#endif // inbox_message_dto_i_read_only_list_envelope_TEST
