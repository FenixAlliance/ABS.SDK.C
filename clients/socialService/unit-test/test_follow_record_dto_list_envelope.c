#ifndef follow_record_dto_list_envelope_TEST
#define follow_record_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define follow_record_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/follow_record_dto_list_envelope.h"
follow_record_dto_list_envelope_t* instantiate_follow_record_dto_list_envelope(int include_optional);



follow_record_dto_list_envelope_t* instantiate_follow_record_dto_list_envelope(int include_optional) {
  follow_record_dto_list_envelope_t* follow_record_dto_list_envelope = NULL;
  if (include_optional) {
    follow_record_dto_list_envelope = follow_record_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    follow_record_dto_list_envelope = follow_record_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return follow_record_dto_list_envelope;
}


#ifdef follow_record_dto_list_envelope_MAIN

void test_follow_record_dto_list_envelope(int include_optional) {
    follow_record_dto_list_envelope_t* follow_record_dto_list_envelope_1 = instantiate_follow_record_dto_list_envelope(include_optional);

	cJSON* jsonfollow_record_dto_list_envelope_1 = follow_record_dto_list_envelope_convertToJSON(follow_record_dto_list_envelope_1);
	printf("follow_record_dto_list_envelope :\n%s\n", cJSON_Print(jsonfollow_record_dto_list_envelope_1));
	follow_record_dto_list_envelope_t* follow_record_dto_list_envelope_2 = follow_record_dto_list_envelope_parseFromJSON(jsonfollow_record_dto_list_envelope_1);
	cJSON* jsonfollow_record_dto_list_envelope_2 = follow_record_dto_list_envelope_convertToJSON(follow_record_dto_list_envelope_2);
	printf("repeating follow_record_dto_list_envelope:\n%s\n", cJSON_Print(jsonfollow_record_dto_list_envelope_2));
}

int main() {
  test_follow_record_dto_list_envelope(1);
  test_follow_record_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // follow_record_dto_list_envelope_MAIN
#endif // follow_record_dto_list_envelope_TEST
