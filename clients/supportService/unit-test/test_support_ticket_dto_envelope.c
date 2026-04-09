#ifndef support_ticket_dto_envelope_TEST
#define support_ticket_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define support_ticket_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/support_ticket_dto_envelope.h"
support_ticket_dto_envelope_t* instantiate_support_ticket_dto_envelope(int include_optional);

#include "test_support_ticket_dto.c"


support_ticket_dto_envelope_t* instantiate_support_ticket_dto_envelope(int include_optional) {
  support_ticket_dto_envelope_t* support_ticket_dto_envelope = NULL;
  if (include_optional) {
    support_ticket_dto_envelope = support_ticket_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_support_ticket_dto(0)
    );
  } else {
    support_ticket_dto_envelope = support_ticket_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return support_ticket_dto_envelope;
}


#ifdef support_ticket_dto_envelope_MAIN

void test_support_ticket_dto_envelope(int include_optional) {
    support_ticket_dto_envelope_t* support_ticket_dto_envelope_1 = instantiate_support_ticket_dto_envelope(include_optional);

	cJSON* jsonsupport_ticket_dto_envelope_1 = support_ticket_dto_envelope_convertToJSON(support_ticket_dto_envelope_1);
	printf("support_ticket_dto_envelope :\n%s\n", cJSON_Print(jsonsupport_ticket_dto_envelope_1));
	support_ticket_dto_envelope_t* support_ticket_dto_envelope_2 = support_ticket_dto_envelope_parseFromJSON(jsonsupport_ticket_dto_envelope_1);
	cJSON* jsonsupport_ticket_dto_envelope_2 = support_ticket_dto_envelope_convertToJSON(support_ticket_dto_envelope_2);
	printf("repeating support_ticket_dto_envelope:\n%s\n", cJSON_Print(jsonsupport_ticket_dto_envelope_2));
}

int main() {
  test_support_ticket_dto_envelope(1);
  test_support_ticket_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // support_ticket_dto_envelope_MAIN
#endif // support_ticket_dto_envelope_TEST
