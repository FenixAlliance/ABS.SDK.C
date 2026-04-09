#ifndef option_dto_list_envelope_TEST
#define option_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define option_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/option_dto_list_envelope.h"
option_dto_list_envelope_t* instantiate_option_dto_list_envelope(int include_optional);



option_dto_list_envelope_t* instantiate_option_dto_list_envelope(int include_optional) {
  option_dto_list_envelope_t* option_dto_list_envelope = NULL;
  if (include_optional) {
    option_dto_list_envelope = option_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    option_dto_list_envelope = option_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return option_dto_list_envelope;
}


#ifdef option_dto_list_envelope_MAIN

void test_option_dto_list_envelope(int include_optional) {
    option_dto_list_envelope_t* option_dto_list_envelope_1 = instantiate_option_dto_list_envelope(include_optional);

	cJSON* jsonoption_dto_list_envelope_1 = option_dto_list_envelope_convertToJSON(option_dto_list_envelope_1);
	printf("option_dto_list_envelope :\n%s\n", cJSON_Print(jsonoption_dto_list_envelope_1));
	option_dto_list_envelope_t* option_dto_list_envelope_2 = option_dto_list_envelope_parseFromJSON(jsonoption_dto_list_envelope_1);
	cJSON* jsonoption_dto_list_envelope_2 = option_dto_list_envelope_convertToJSON(option_dto_list_envelope_2);
	printf("repeating option_dto_list_envelope:\n%s\n", cJSON_Print(jsonoption_dto_list_envelope_2));
}

int main() {
  test_option_dto_list_envelope(1);
  test_option_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // option_dto_list_envelope_MAIN
#endif // option_dto_list_envelope_TEST
