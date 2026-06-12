#ifndef activity_type_dto_list_envelope_TEST
#define activity_type_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_type_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_type_dto_list_envelope.h"
activity_type_dto_list_envelope_t* instantiate_activity_type_dto_list_envelope(int include_optional);



activity_type_dto_list_envelope_t* instantiate_activity_type_dto_list_envelope(int include_optional) {
  activity_type_dto_list_envelope_t* activity_type_dto_list_envelope = NULL;
  if (include_optional) {
    activity_type_dto_list_envelope = activity_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    activity_type_dto_list_envelope = activity_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return activity_type_dto_list_envelope;
}


#ifdef activity_type_dto_list_envelope_MAIN

void test_activity_type_dto_list_envelope(int include_optional) {
    activity_type_dto_list_envelope_t* activity_type_dto_list_envelope_1 = instantiate_activity_type_dto_list_envelope(include_optional);

	cJSON* jsonactivity_type_dto_list_envelope_1 = activity_type_dto_list_envelope_convertToJSON(activity_type_dto_list_envelope_1);
	printf("activity_type_dto_list_envelope :\n%s\n", cJSON_Print(jsonactivity_type_dto_list_envelope_1));
	activity_type_dto_list_envelope_t* activity_type_dto_list_envelope_2 = activity_type_dto_list_envelope_parseFromJSON(jsonactivity_type_dto_list_envelope_1);
	cJSON* jsonactivity_type_dto_list_envelope_2 = activity_type_dto_list_envelope_convertToJSON(activity_type_dto_list_envelope_2);
	printf("repeating activity_type_dto_list_envelope:\n%s\n", cJSON_Print(jsonactivity_type_dto_list_envelope_2));
}

int main() {
  test_activity_type_dto_list_envelope(1);
  test_activity_type_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_type_dto_list_envelope_MAIN
#endif // activity_type_dto_list_envelope_TEST
