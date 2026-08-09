#ifndef outbox_health_dto_envelope_TEST
#define outbox_health_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define outbox_health_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/outbox_health_dto_envelope.h"
outbox_health_dto_envelope_t* instantiate_outbox_health_dto_envelope(int include_optional);

#include "test_outbox_health_dto.c"


outbox_health_dto_envelope_t* instantiate_outbox_health_dto_envelope(int include_optional) {
  outbox_health_dto_envelope_t* outbox_health_dto_envelope = NULL;
  if (include_optional) {
    outbox_health_dto_envelope = outbox_health_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_outbox_health_dto(0)
    );
  } else {
    outbox_health_dto_envelope = outbox_health_dto_envelope_create(
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

  return outbox_health_dto_envelope;
}


#ifdef outbox_health_dto_envelope_MAIN

void test_outbox_health_dto_envelope(int include_optional) {
    outbox_health_dto_envelope_t* outbox_health_dto_envelope_1 = instantiate_outbox_health_dto_envelope(include_optional);

	cJSON* jsonoutbox_health_dto_envelope_1 = outbox_health_dto_envelope_convertToJSON(outbox_health_dto_envelope_1);
	printf("outbox_health_dto_envelope :\n%s\n", cJSON_Print(jsonoutbox_health_dto_envelope_1));
	outbox_health_dto_envelope_t* outbox_health_dto_envelope_2 = outbox_health_dto_envelope_parseFromJSON(jsonoutbox_health_dto_envelope_1);
	cJSON* jsonoutbox_health_dto_envelope_2 = outbox_health_dto_envelope_convertToJSON(outbox_health_dto_envelope_2);
	printf("repeating outbox_health_dto_envelope:\n%s\n", cJSON_Print(jsonoutbox_health_dto_envelope_2));
}

int main() {
  test_outbox_health_dto_envelope(1);
  test_outbox_health_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // outbox_health_dto_envelope_MAIN
#endif // outbox_health_dto_envelope_TEST
