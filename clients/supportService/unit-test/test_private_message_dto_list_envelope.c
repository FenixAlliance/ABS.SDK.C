#ifndef private_message_dto_list_envelope_TEST
#define private_message_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define private_message_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/private_message_dto_list_envelope.h"
private_message_dto_list_envelope_t* instantiate_private_message_dto_list_envelope(int include_optional);



private_message_dto_list_envelope_t* instantiate_private_message_dto_list_envelope(int include_optional) {
  private_message_dto_list_envelope_t* private_message_dto_list_envelope = NULL;
  if (include_optional) {
    private_message_dto_list_envelope = private_message_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    private_message_dto_list_envelope = private_message_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return private_message_dto_list_envelope;
}


#ifdef private_message_dto_list_envelope_MAIN

void test_private_message_dto_list_envelope(int include_optional) {
    private_message_dto_list_envelope_t* private_message_dto_list_envelope_1 = instantiate_private_message_dto_list_envelope(include_optional);

	cJSON* jsonprivate_message_dto_list_envelope_1 = private_message_dto_list_envelope_convertToJSON(private_message_dto_list_envelope_1);
	printf("private_message_dto_list_envelope :\n%s\n", cJSON_Print(jsonprivate_message_dto_list_envelope_1));
	private_message_dto_list_envelope_t* private_message_dto_list_envelope_2 = private_message_dto_list_envelope_parseFromJSON(jsonprivate_message_dto_list_envelope_1);
	cJSON* jsonprivate_message_dto_list_envelope_2 = private_message_dto_list_envelope_convertToJSON(private_message_dto_list_envelope_2);
	printf("repeating private_message_dto_list_envelope:\n%s\n", cJSON_Print(jsonprivate_message_dto_list_envelope_2));
}

int main() {
  test_private_message_dto_list_envelope(1);
  test_private_message_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // private_message_dto_list_envelope_MAIN
#endif // private_message_dto_list_envelope_TEST
