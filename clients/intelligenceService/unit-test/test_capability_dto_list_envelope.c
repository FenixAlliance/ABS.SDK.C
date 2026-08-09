#ifndef capability_dto_list_envelope_TEST
#define capability_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define capability_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/capability_dto_list_envelope.h"
capability_dto_list_envelope_t* instantiate_capability_dto_list_envelope(int include_optional);



capability_dto_list_envelope_t* instantiate_capability_dto_list_envelope(int include_optional) {
  capability_dto_list_envelope_t* capability_dto_list_envelope = NULL;
  if (include_optional) {
    capability_dto_list_envelope = capability_dto_list_envelope_create(
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
    capability_dto_list_envelope = capability_dto_list_envelope_create(
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

  return capability_dto_list_envelope;
}


#ifdef capability_dto_list_envelope_MAIN

void test_capability_dto_list_envelope(int include_optional) {
    capability_dto_list_envelope_t* capability_dto_list_envelope_1 = instantiate_capability_dto_list_envelope(include_optional);

	cJSON* jsoncapability_dto_list_envelope_1 = capability_dto_list_envelope_convertToJSON(capability_dto_list_envelope_1);
	printf("capability_dto_list_envelope :\n%s\n", cJSON_Print(jsoncapability_dto_list_envelope_1));
	capability_dto_list_envelope_t* capability_dto_list_envelope_2 = capability_dto_list_envelope_parseFromJSON(jsoncapability_dto_list_envelope_1);
	cJSON* jsoncapability_dto_list_envelope_2 = capability_dto_list_envelope_convertToJSON(capability_dto_list_envelope_2);
	printf("repeating capability_dto_list_envelope:\n%s\n", cJSON_Print(jsoncapability_dto_list_envelope_2));
}

int main() {
  test_capability_dto_list_envelope(1);
  test_capability_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // capability_dto_list_envelope_MAIN
#endif // capability_dto_list_envelope_TEST
