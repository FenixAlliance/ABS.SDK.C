#ifndef timezone_dto_list_envelope_TEST
#define timezone_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_dto_list_envelope.h"
timezone_dto_list_envelope_t* instantiate_timezone_dto_list_envelope(int include_optional);



timezone_dto_list_envelope_t* instantiate_timezone_dto_list_envelope(int include_optional) {
  timezone_dto_list_envelope_t* timezone_dto_list_envelope = NULL;
  if (include_optional) {
    timezone_dto_list_envelope = timezone_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    timezone_dto_list_envelope = timezone_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return timezone_dto_list_envelope;
}


#ifdef timezone_dto_list_envelope_MAIN

void test_timezone_dto_list_envelope(int include_optional) {
    timezone_dto_list_envelope_t* timezone_dto_list_envelope_1 = instantiate_timezone_dto_list_envelope(include_optional);

	cJSON* jsontimezone_dto_list_envelope_1 = timezone_dto_list_envelope_convertToJSON(timezone_dto_list_envelope_1);
	printf("timezone_dto_list_envelope :\n%s\n", cJSON_Print(jsontimezone_dto_list_envelope_1));
	timezone_dto_list_envelope_t* timezone_dto_list_envelope_2 = timezone_dto_list_envelope_parseFromJSON(jsontimezone_dto_list_envelope_1);
	cJSON* jsontimezone_dto_list_envelope_2 = timezone_dto_list_envelope_convertToJSON(timezone_dto_list_envelope_2);
	printf("repeating timezone_dto_list_envelope:\n%s\n", cJSON_Print(jsontimezone_dto_list_envelope_2));
}

int main() {
  test_timezone_dto_list_envelope(1);
  test_timezone_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_dto_list_envelope_MAIN
#endif // timezone_dto_list_envelope_TEST
